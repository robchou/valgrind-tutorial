#include <stdlib.h>

void fun() {

    // MemoryLeak
    int *p = (int*)malloc(10 * sizeof(int));
    // InvalidWrite
    p[10] = 0;
}

int main(int argc,  char* argv[]) 
{
    fun();
    return 0;
}
