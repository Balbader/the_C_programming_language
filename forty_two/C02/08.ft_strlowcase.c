#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char str[1000] = "Ecrire une fonction qui met en majuscule chaque lettre.";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
