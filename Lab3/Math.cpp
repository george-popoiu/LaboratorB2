#include "Math.h"
#include <stdarg.h>

int Math::Add(int a, int b)
{
    return a + b;
}

int Math::Add(int, int, int)
{
    return 0;
}

int Math::Add(double, double)
{
    return 0;
}

int Math::Add(double, double, double)
{
    return 0;
}

int Math::Mul(int, int)
{
    return 0;
}

int Math::Mul(int, int, int)
{
    return 0;
}

int Math::Mul(double, double)
{
    return 0;
}

int Math::Mul(double, double, double)
{
    return 0;
}

int Math::Add(int count, ...)
{
    int res = 0;
    va_list L;
    va_start(L, count);
    for (int i = 0; i < count; ++i) {
        int x = va_arg(L, int);
        res += x;
    }
    va_end(L);
    return res;
}

char* Math::Add(const char*, const char*)
{
    return nullptr;
}
