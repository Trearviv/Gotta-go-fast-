#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void rush(int x, int y)
{
    int row;
    int col;
    row = 1;
    while(row <=y)
    {
        col = 1;
        while(col <= x)
        {
            if(row ==1)
                if(col ==1 )
                    ft_putchar('A');
                else if(col == x)
                    ft_putchar('C');
                else
                    ft_putchar('B');
            else if(row ==y)
                if(col ==1 )
                    ft_putchar('C');
                else if(col == x)
                    ft_putchar('A');
                else
                    ft_putchar('B');
            else
                if(col ==1 || col ==x)
                    ft_putchar('B');
                else
                    ft_putchar(' ');
            col++;
        }
        ft_putchar('\n');
        row++;
    }
}
int main()
{
     rush(5,3);
    ft_putchar('\n');
    rush(5,1);
    ft_putchar('\n');
    rush(1,1);
    ft_putchar('\n');
    rush(1,5);
    ft_putchar('\n');
    rush(4,4);
    return 0;
}