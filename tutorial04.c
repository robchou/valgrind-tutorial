#include <string.h>

int main(int argc, char *argv[])
{
    char x[50];
    int i;

    for (i = 0; i < 50; ++i) {
        x[i] = i + 1;
    }

    // OK dest:[20, 39], src:[0, 19]
    strncpy(x + 20, x, 20);
    // Overlap dest:[20, 40], src:[0, 20], x[20] overlap
    strncpy(x + 20, x, 21);
    // OK dest:[0, 19], src:[20, 39]
    strncpy(x, x + 20, 20);
    // Overlap dest:[0, 20], src:[20, 40], x[20] overlap
    strncpy(x, x + 20, 21);

    // strcpy make '\0' as terminator
    x[39] = '\0';
    // OK, dest:[0, 19], src:[20, 39]
    strcpy(x, x + 20);

    x[39] = 39;
    x[40] = '\0';
    // Overlap, dest:[0, 20], src:[20, 40] x[20] overlap
    strcpy(x, x + 20);

    return 0;
}
