#include <stdlib.h>
#include <sys/syscall.h>

void *malloc(unsigned long long)
{
    void *ret;

    /*
	*
	 set `ret` to the next available memory location in the heap
	*
    */

	if (!heap_data.is_full)
    {
    	_Bool success = syscall(SYS_brk, ret);
    	if (!success)
    	{
    	    heap_full = true;
        }
    }
	/* this will NOT work as an else statement. needs to be seperate if statement */
	if (heap_full)
	{
		/* use the `mmap` syscall to allocate onto the memory map, since the heap is full */
	}
}