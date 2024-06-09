int ft_strcmp(char *s1, char *s2) 
{
    int i;
    
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') 
    {
        if (s1[i] != s2[i]) 
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

#include <stdio.h>
int main() 
{
    char *cadena1 = "Hola mundo";
    char *cadena2 = "Hola mundo";

    int resultado=ft_strcmp(cadena1, cadena2);
    printf("%i", resultado);

    return 0;
}


/*--------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------*/
/*tambien vale este formato
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------*/
/*tambien vale este formato:
int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main() {
    char cadena1[] = "Hola mundo";
    char cadena2[] = "Hola mUndo";
    
    int resultado = ft_strcmp(cadena1, cadena2);

    if (resultado == 0) {
        printf("Las cadenas son iguales. Int = 0.");
    } else {
        printf("Las cadenas son diferentes.\n");

        int i = 0;
        while (cadena1[i] && cadena2[i] && cadena1[i] == cadena2[i]) {
            i++;
        }

        if (cadena1[i] != cadena2[i]) {
            printf("Diferencia en posición %d: '%c' (ASCII: %d) en cadena1 (s1), '%c' (ASCII: %d) en cadena2 (s2), Diferencia ASCII: %d\n", 
                   i, cadena1[i], cadena1[i], cadena2[i], cadena2[i], cadena1[i] - cadena2[i]);
        }
    }

    return 0;
}

*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------*/
/*EXPLICACION DE INT DEVUELTO: */
/*
char *s1 = "hola";
char *s2 = "hola";
int resultado = ft_strcmp(s1, s2);  // resultado será 0

char *s1 = "hola";
char *s2 = "holA";
int resultado = ft_strcmp(s1, s2);  // resultado será 'a' - 'A' = 97 - 65 = 32

char *s1 = "hola";
char *s2 = "holanda";
int resultado = ft_strcmp(s1, s2);  // resultado será '\0' - 'n' = 0 - 110 = -110
*/
