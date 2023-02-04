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
	unsigned long long num_of_chars_printed = syscall(SYS_write, 1, _Buffer, len);
	unsigned long long printed_newline = syscall(SYS_write, 1, "\n", 1);
	if (num_of_chars_printed != len)
	{
		if (printed_newline == 1)
			return -1;
		else
			return -3;
	}
	else if (printed_newline != 1)
	{
		return -2;
	}
	//return value -1 means cannot print the buffer. return value -2 means could not print the newline. return value -3 means that neither was possible.
	return len + 1;
}
