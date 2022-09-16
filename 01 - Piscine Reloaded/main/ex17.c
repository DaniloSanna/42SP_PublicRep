#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2){

int loop;

loop = 0;

while(s1[loop] != '\0')
{
    if(s1[loop] == s2[loop])
        loop++;
    else
        return(s1[loop] - s2[loop]);
}
	return(*s1 - *s2);
}

int main(void){
    char str1[15];
    char str2[15];

   strcpy(str1, "aa");
   strcpy(str2, "aA");

    printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));
    printf("STRCMP: %d\n", strcmp(str1, str2));
   
   return(0);
}