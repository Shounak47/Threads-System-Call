#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include<string.h>
int N=10;
int main(){
	pid_t pid=fork();
	if(pid>0){
		//wait(NULL);
		/*for(int i=1;i<=90;i++){
			N++;
		}*/
		int i=1;
		while(++N<100){
			i++;
		};
		printf("Parent Process: %d\n",N);
		printf("Incremented: %d\n",i);


	}else if(pid==0){
		int j=1;
		
	
		while(--N>-90){
			j++;
		};
		
	
		printf("Child Process: %d\n",N);
		printf("Decremented: %d\n",j);
		exit(0);

	}else if(pid<0){
		printf("Fork failed");
		exit(1);
	}
	return 0;

}