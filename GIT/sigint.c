#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void react(int sig) {
	printf("I've received signal number %d\n", sig);
	
}

int main() {
	(void) signal (SIGINT, react);
	
	while(1) {
		printf("Just doing my thing...\n");
		sleep(1);
	}
}
