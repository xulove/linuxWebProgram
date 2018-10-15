#include <stdio.h>
#include <stdlib.h>
static int sum(int value);
struct inout{
	int value;
	int result;
};
int main(int argc,char *argv[]){
	struct inout *io = (struct inout*)malloc(sizeof(struct inout));
	if (io == NULL){
		printf("申请内存失败\n");
		return -1;
	}
	if (argc != 2){
		printf("输入参数有误\n");
		return -1;
	}
	io->value = *argv[1]-'0';
	io->result = sum(io->value);
	printf("你输入的参数为:%d,计算的结果为:%d\n",io->value,io->result);
	return 0;
}
static int sum(int value){
	int result = 0;
	int i = 0;	
	for (i=0;i<value;i++){
		result += i;
	}
	return result;
}

