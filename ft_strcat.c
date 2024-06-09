int ft_strlen(char *str)
{
    int count;
    count = 0;
    
    while (str[count] != '\0')
    {
        count ++ ;
    }
    return (count);
}

char *ft_strcat(char *dest, char *src)
{
   int i;
   int j; 
   
   i = 0;
   j = ft_strlen(dest);
   while (dest[i] != '\0')
   {
       dest[j] = src [i];
       
       i ++ ;
       j ++;
   }
    dest[j] = '\0';
    
    return (dest);
}

#include <stdio.h>
int main (void)
{
    char dest[30] = "hola ";
    char src [] = "caracola";
    
    ft_strcat(dest, src);
 
    printf("%s\n", dest);

    return 0;
}
