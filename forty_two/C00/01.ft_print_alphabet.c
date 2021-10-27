#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);

int     main(void)
{
    ft_print_alphabet();
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    int     i;

    i = 'a';
    while (i <= 'z')
    {
        ft_putchar(i);
        i++;
    }
}
