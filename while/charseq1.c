#include <stdio.h>

int main()
{
	char x,y;
	
	printf("Please input character one\n");
	scanf(" %c", &x);
		
	printf("Please input character two\n");
	scanf(" %c", &y);
	
	if (x != y)
	{
		if (x < y)
		{
			
		while (x <= y)
		{
		printf("%c\n", x);
		x++;

		}
		}
	    if (y < x)
	    	    while (y <= x)
	    	    {
	    	    	    printf("%c\n", y);
	    	    	    y++;
	    	    }
		
	}
	return 0;
}
