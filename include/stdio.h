#ifndef _STDIO_H
#define _STDIO_H

#include <types/FILE.h>
#include <stddef.h>

FILE *fopen(char*, char*);

FILE *stdin = fopen("/dev/stdin", "r");
FILE *stdout = fopen("/dev/stdout", "w");
FILE *stderr = fopen("/dev/stderr", "w");

#endif /* _STDIO_H */