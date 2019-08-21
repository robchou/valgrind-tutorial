#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    char *p = (char*)malloc(10);
    char *pt = p;

    for (i = 0; i < 10; ++i) {
        p[i] = 'z';
    }

    // MismatchedFree
    delete p;

    // InvalidWrite
    pt[1] = 'x';

    // InvalidFree
    free(pt);

    return 0;
}
