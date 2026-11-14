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
    while(row <= y)
    {
        col =1;
        while(col <= x)
        {
            if( row ==1 || row ==y)
            {
               if(col ==1 || col == x)
               {
                ft_putchar('o');
               }
               else
               {
                ft_putchar('-');
               }
            }
            else
            {
                if(col ==1 || col ==x)
                {
                    ft_putchar('|');
                }
                else
                {
                    ft_putchar(' ');
                }
            }
            
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
    return 0;
}