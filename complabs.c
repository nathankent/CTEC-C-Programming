#include <stdio.h>
#include <curses.h>

int main() 
{
	int room;
	
	printf("Please input the room number : \n");
	scanf("%i", &room);
	
	
	switch (room)
	{
		
	case '679' : printf("Computer Science Laboratory");
		break;
	
		
	default : printf("You have entered an invalid value");
		
	
		
	}
	
	
	return 0;
	
}
