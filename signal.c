#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<signal.h>
#include<sys/wait.h>
void action()
{
	printf("recieved signal \n");
	signal(SIGINT,SIG_DFL);
}
int main(){
	signal(SIGINT,action);
	while(1)
	{
		printf("hello world\n");
		sleep(5);
	}
}