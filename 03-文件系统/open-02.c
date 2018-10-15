#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i = 0 ;
	int fd = 0;
	char filename[] = "test.txt";

	for (i=0;fd>=0;i++){
		printf("start!\n");
		fd = open(filename,O_RDWR);
		if (fd > 0){
			printf("fd:%d\n",fd);
		}else{
			printf("error!can't open file\n");
		}
	}	
	
}