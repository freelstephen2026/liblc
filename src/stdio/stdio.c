#include <stdio.h>
#include <sys/syscall.h>
#include <types.h>

int puts(char *_Buffer)
{
	size_t len = 0;
	while (_Buffer[len] != '\0')
	{
		len++;
	}
	syscall(SYS_write, 1, );
}