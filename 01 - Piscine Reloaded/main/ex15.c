#include<unistd.h>

void	ft_print(char str)
{
	write(1, &str, 1);
}
void	ft_putstr(char *str)
{
	int loop;

	loop = 0;
	while(str[loop] != '\0')
		ft_print(str[loop++]);
}

int main(void)
{
    char a[] = "Bunda lele";

    ft_putstr(a);
}