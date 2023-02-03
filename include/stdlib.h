#ifndef _STDLIB_H
#define _STDLIB_H

#include <sys/syscall.h>

void *get_heap_start();

struct
{
    struct
    {
        void *ptr;
		unsigned long long size;
    } *first_entry; /* the pointer to the first entry of the array of malloc descriptors. a malloc descriptor is what describes each memory location that is returned by malloc, including how much memory is allocated from that location in memory*/
	unsigned long long entry_count;
    void *heap_ptr;
	_Bool is_full;
} heap_data;
/* this is used to keep track of everything that makes the execution of functions like `malloc` and `free` possible */

void *malloc(size_t);

#endif /* _STDLIB_H */