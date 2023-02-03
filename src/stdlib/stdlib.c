#include <stdlib.h>
#include <stdio.h>

void *get_heap_start()
{
	void *ret;
	syscall(SYS_brk, 0, ret);
	return ret;
};

*heap_data.first_entry =
{
    .ptr = NULL;
    .size = 0;
}

heap_data.heap_ptr = get_heap_start();