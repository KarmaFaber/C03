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


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
   unsigned int i;
   int j; 
   
   i = 0;
   j = ft_strlen(dest);
   while ( i < nb && src[i] != '\0')
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
    unsigned int num = 3;
    char dest[30] = "hola ";
    char src [] = "caracola";
    
    ft_strncat(dest, src, num);
 
    printf("%s\n", dest);

    return 0;
}
