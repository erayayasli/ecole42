#include "ft_printf.h"
int printchar(char a)
{
    write(1, &a, 1);
    return (1);
}
int printstr(const char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i++],1);
    }
    return (i);
}
int printnbr(long a)
{
    int prtnbr;

    prtnbr = 0;
    if (a < 0)
    {
        prtnbr += printchar(45);
        a = -a;
    }
    if (a > 9)
        prtnbr += printnbr(a / 10);
    prtnbr += printchar(a % 10 + '0');
    return (prtnbr);
}
int printdecimal(unsigned int n, char c)
{
    int prtnbr;

    prtnbr = 0;
    if (n == 0)
    {
        printchar('0');
        return (1);
    }
    if (n >= 16)
        prtnbr += printdecimal(n / 16, c);
    if (c == 'x')
        prtnbr += printchar("0123456789abcdef"[n % 16]);
    else
        prtnbr += printchar("0123456789ABCDEF"[n % 16]);
    return (prtnbr);
}
int printpercent(void)
{
    write(1, "%", 1);
    return (1);
}
int printpointer(unsigned long int a)
{
    int prtnbr;

    prtnbr = 0;
    if (a >= 16)
        prtnbr += printpointer(a / 16);
    prtnbr += printchar("0123456789abcdef"[a % 16]);
    return (prtnbr);
}