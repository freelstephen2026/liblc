#ifndef _LIBIO_H
#define _LIBIO_H

#include <types/FILE.h>

struct _IO_marker
{
    struct _IO_marker *_next;
    FILE *_sbuf;
     /* If _pos >= 0
     it points to _buf->Gbase()+_pos. FIXME comment */
    /* if _pos < 0, it points to _buf->eBptr()+_pos. FIXME comment */
    int _pos;
};

#endif /* _LIBIO_H */