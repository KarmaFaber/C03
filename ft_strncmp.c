int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    
    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0') 
    {
        if (s1[i] != s2[i]) 
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    
    if (i < n)
    {
        return (s1[i] - s2[i]);
    }
    return (0);
}

#include <stdio.h>
int main (void)
{
    unsigned int numero = 5;
    char *cadena1 = "hola caracola loca";
    char *cadena2 = "hole caracola loca";
    
    int resultado = ft_strncmp(cadena1, cadena2, numero);
    printf("Resultado de la comparación: %d\n", resultado);
    
    return 0;
}
