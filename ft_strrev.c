#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	printf("%d\n", i);
	return (i);
}

char	*ft_strrev(char *str)
{
	int length;
	int i;
	char temp;

	i = 0;
	length = ft_strlen(str);
	while (i < length/2)
	{
		temp = str[(length- 1) - i];
		str[(length - 1) - i] = str[i];
		str[i] = temp;	
		i++;
	}
	printf("%s\n", str);
	return(str);
}

int main(void)
{
	char string[]= "helloagain";

	ft_strrev(string);
	printf("%s\n", string);
	return (0);
}

