#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, len = 4;
    // MemoryLeak
    int *pt = (int*)malloc(len * sizeof(int));
    int *p = pt;

    for (i = 0; i < len; ++i) {
        p++;
    }

    // InvalidWrite
    *p = 5;

    // InvalidRead
    printf("the value of p equal: %d\n", *p);

    return 0;
}
