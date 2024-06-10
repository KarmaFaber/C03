char *ft_strstr(char *str, char *to_find)
{
    int i;

    if (*to_find == '\0')
        return (str);

    while (*str != '\0')
    {
        if (*str == *to_find)
        {
            i = 0;
            while (to_find[i] != '\0')
            {
                if (str[i] != to_find[i])
                    break;
                i++;
            }
            if (to_find[i] == '\0')
                return (str);
        }
        str++;
    }
    return ((char *)0); // Retorna un puntero nulo
}

#include <stdio.h>
int main(void)
{
    char str[] = "Hola Caracola";
    char to_find[] = "Ca";
    char *result;

    result = ft_strstr(str, to_find);
    if (result != (char *)0) // Compara con puntero nulo
    {
        printf("La subcadena se encuentra en: %s\n", result);
        printf("Posición: %ld\n", result - str);
    }
    else
        printf("La subcadena no se encuentra en la cadena.\n");

    return 0;
}
