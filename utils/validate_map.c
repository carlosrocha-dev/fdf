#include <stdio.h>

int	count_cols(char *line)
{
	int i;
	int j;

	while(line[++i] != '\0')
	{
		if(line[i] == ' ')
			++j;
	}
	return (++j);
}

int main()
{
	int cols;
	char *test = "0 0 10 0 0";

	cols = count_cols(test);
	printf("%d\n", cols);

	return 0;
}
