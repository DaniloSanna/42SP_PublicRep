#include<string.h>
#include<stdio.h>

void	*ft_memset(void *startposition, int replacevalue, size_t endposition)
{
	unsigned char	*casting;

	casting = startposition;
	while (endposition-- > 0)
		*casting++ = replacevalue;
	return (casting);
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
	char str3[50] = "GeeksForGeeks is for programming geeks.";
    
	printf("\nBefore memset(): %s\n", str);
	printf("Befor ft_memset: %s\n", str3);
  
    memset(str + 1, '.', 8*sizeof(char));
	ft_memset(str3 + 1, '.', 8*sizeof(char));
  
    printf("\nAfter memset():  %s", str);
	printf("\nAfte ft_memset:  %s", str3);
    return 0;
}