#include<stdio.h>

int ft_strlen(char *str){
 int i;
 i = 0;
 while(str[i])
	 i++;
  return (i)
}

int main(int ac, char **av)
{
   char *str;
   str = malloc(sizeof(char) * ft_strlen(av[1]) + 1);
   if (!str)
	   return (NULL);
   str = av[1];
   printf("%s\n", str);
   free(str);

return 0;
}
