#include <stdio.h>

int main(int, char**)
{
#if defined(_WIN64)
    printf("[MSC v.%d 64 bit (AMD64)]\n", _MSC_VER);
#elif defined(_WIN32)
    printf("[MSC v.%d 32 bit (Intel)]\n", _MSC_VER);
#else
    printf("[MSC v.%d Unknown]\n", _MSC_VER);
#endif
    return 0;
}
