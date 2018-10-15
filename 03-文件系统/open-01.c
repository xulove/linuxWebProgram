#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int fd = -1;
	char filename[] = "/dev/sda1";
	fd = open(filename,O_RDWR);
	if (fd == -1){
		printf("Open file %s failure!,fd:%d\n",filename,fd);
	}else{
		printf("open file:%s success,fd:%d\n",filename,fd);
	}
	return 0;
}
