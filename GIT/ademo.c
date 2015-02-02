#include <stdio.h>
#include <string.h>

/* Author: drs
 * C program to allow interactive experimentation with assignment statements
 * Note: this is only a demo program - it does not catch division by zero errors
 * and it does not parse arbitrarily complex C expressions.  Its purpose is to
 * allow the entering and editing of simple C assignment expressions based on
 * four integer variables: a, b, c and d.
 * Usage:
 *        Save this program as: ademo.c
 *        Compilie:             gcc ademo.c -o ademo
 *        Run:                  ./ademo
 *             This will use the local files:
 *                      __default__program.c  (which it will create)
 *                      a.out
 *             You can change the name of the C program source by providing a
 *             command line argument (e.g. to use a file called "foo.c":
 *        Run:                  ./ademo foo.c
 *
 *        You can enter expressions such as:
 *        set(1,4,7,9)
 *        quit
 *        a = b + c
 *        d++
 *        c = a++ - b
 *        undo
 */

#define MAX_LINES 100
#define MAX_CHARS  40
#define CMD_WIDTH  80
#define DEFAULT_PROGRAM "__default__program.c"

#define BEFORE "#include <stdio.h>\n\
int a=0,b=0,c=0,d=0;\n\
void show(int n, char* s)\
{printf(\"%3d.      %-24s%10d%10d%10d%10d\\n\",n,s,a,b,c,d);}\n\
void init(){a=0,b=0,c=0,d=0;}\n\
void set(int w, int x, int y, int z){a=w;b=x;c=y;d=z;}\n\
int main(void)\n{\nint n = 0;\n\
printf(\" No.      %-24s%10s%10s%10s%10s\\n\",\"Expression\",\"a\",\"b\",\"c\",\"d\");\n"

#define AFTER "return 0;\n}\n"

int main(int argc, char** argv) 
{
   char a[MAX_LINES][MAX_CHARS];
   int i, n = 0, undo = 0;
   FILE * f;
   char compile[CMD_WIDTH];
   char program[CMD_WIDTH];
   char command[MAX_CHARS];

   if (argc>1) 
       strcpy(program,argv[1]);
   else
       strcpy(program,DEFAULT_PROGRAM);

   printf("Using program file %s\n", program);
   compile[0] = '\0';
   strcpy(compile,strcat(strcat(compile,"gcc "),program));

   while (n<MAX_LINES) {

      f = fopen(program,"w");
      fprintf(f,"%s",BEFORE);
      for (i=0; i<n; i++)
          fprintf(f,"%s; show(++n,\"%s\");\n",a[i],a[i]);
      fprintf(f,"%s",AFTER);
      fclose(f);

      if(system(compile) == 0)
         system("./a.out");
      else {
          if (n>0) n--;
      }

      printf("(%2i)Expr? ",n+1);
      fgets(command,MAX_CHARS,stdin);
      command[strlen(command)-1] = 0;

      if      (strncmp(command,"undo",4) == 0) {
          undo = 1;
      }
      else if (strncmp(command,"quit",4) == 0) {
          printf("stopping...\n");break;
      }

      if (undo) {
          if (n>0) n--;
          undo = 0;
          printf("Undone\n");
      }
      else {
          strcpy(a[n],command);
          n++;
      }

   }
   return 0;
}
