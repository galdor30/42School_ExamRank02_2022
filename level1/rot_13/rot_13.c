#include <unistd.h>
int main(int ac, char **ag)
{
	int i = 0;
	if(ac == 2)
	{
		while(ag[1][i])
		{
			if(ag[1][i] >= 'a' && ag[1][i] <= 'm')
				ag[1][i] = ag[1][i] + 13;
			else if(ag[1][i] >= 'A' && ag[1][i] <= 'M')
				ag[1][i] = ag[1][i] + 13;
			else if(ag[1][i] >= 'n' && ag[1][i] <= 'z')
				ag[1][i] = ag[1][i] - 13;
			else if(ag[1][i] >= 'N' && ag[1][i] <= 'Z')
				ag[1][i] = ag[1][i] - 13;
			write(1, &ag[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}