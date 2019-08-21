#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[5];
    // s: UninitCondition
    int i, s;

    // a[2]: UninitCondition
    a[0] = a[1] = a[3] = a[4] = 0;

    for (i = 0; i < 5; ++i) {
        s += a[i];
    }

    if (s == 377) {
        printf("s is %d\n", s);
    }

    return 0;
}
