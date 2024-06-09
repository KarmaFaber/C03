char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int temp;
	char *original_str = str; // Guardamos el puntero original

	if (*to_find == '\0')
		return (str);
		
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			temp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					temp = 1;
				i++;
			}
			if (temp == 0)
				return (str); 
		}
		str++;
	}
	return (NULL); 
}

#include <stdio.h>
int		main(void)
{
	char str[] = "Hola Caracola";
	char to_find[] = "acol";
	char *result;

	result = ft_strstr(str, to_find);
	if (result != NULL)
	{
		printf("La subcadena se encuentra en: %s\n", result);
		
		printf("Posición: %ld\n", result - str);
	}
	else
		printf("La subcadena no se encuentra en la cadena.\n");

	return 0;
}
