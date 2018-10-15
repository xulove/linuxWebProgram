#include <stdio.h>
int main(void)
{
	char src[] = "hello world";
	int (*pStrLenFun)(char *str);
	void *pHandle = NULL;
	char *perr = NULL;
	pHandle = dlopen("./libstr.so",RTLD_LAZY);
	/*判断是否打开正确 */
	if (!pHandle)
	{
		printf("Failed load library!\n");
	}
	perr = dlerror();
	if (perr != NULL)
	{
		printf("%s\n",perr);
		return 0;
	}
	pStrLenFun = dlsym(pHandle,"StrLen");
	perr = dlerror();
	if (perr != NULL)
	{
		printf("%s\n",peer);
		return 0;
	}
	printf ("the string length is :%d\n",pStrLenFun(src));
	dlclose(pHandle);
	return 0;
}
