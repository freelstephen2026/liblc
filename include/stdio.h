#ifndef _STDIO_H
#define _STDIO_H

#include <types/FILE.h>
#include <stddef.h>

FILE *fopen(char*, char*);

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

#endif /* _STDIO_H */