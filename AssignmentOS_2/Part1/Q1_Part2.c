#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include<string.h>
#include <pthread.h> 

int N=10;

void* func(void * ptid){
	int j=1;
	while(--N>-90){
			j++;
		};
		
	
	printf("Child Thread: %d\n",N);
	printf("Decremented: %d\n",j);
	pthread_exit(NULL);
	//return NULL;
}

int main(){
	pthread_t ptid; 
	int a=pthread_create(&ptid, NULL, &func, NULL);

	int i=1;
		while(++N<100){
			i++;
		};
		printf("Parent Thread: %d\n",N);
		printf("Incremented: %d\n",i);

	int b=pthread_join(ptid, NULL);

	pthread_exit(NULL);
	return 0;  



}