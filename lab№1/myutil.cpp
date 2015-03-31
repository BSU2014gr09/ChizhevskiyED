#include <conio.h>

int initstr(char *m)
{
    *m=_getch();

    while (*m != '.')
    {
        m++;
        *m = _getch();
    }

      *m = '\0';

    return 0;
}