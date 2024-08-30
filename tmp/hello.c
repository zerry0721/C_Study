#include <stdio.h>
#include <string.h>

int main()
{
    const char endata[64] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};
    char *tmp;
    char out[256];
    tmp=strchr(endata, 'A');
    printf("%d",tmp-endata);
}