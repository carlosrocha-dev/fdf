#include <stdio.h>

int	count_cols(char *line)
{
	int i;
	int j;

	while(line[++i] != '\0')
	{
		if(line[i] == ' ')
		{
			++j;
			// printf("%d\n", j);
		}
	}
	return (++j);
}

int main()
{
	unsigned int cols;
	char *test = "0  0  10  0  0";

	printf("%s\n", test);
	cols = count_cols(test);
	printf("%i\n", cols);

	return 0;
}
