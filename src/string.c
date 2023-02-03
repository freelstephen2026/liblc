#include <string.h>

int strlen(char* _String)
{
    int ret = 0;
    for (int i = 0; _String[i] != '\0'; i++)
    {
        ret = i + 1;
    }
    return ret;
}