#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(){
	long res=syscall(441,1,"/home/shounakghatak/Desktop/t.txt");
	printf("%ld\n",res);
	return 0;
}
