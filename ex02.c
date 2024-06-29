#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max)
{
  int i;
  int *res;
  if (min >= max)
  {
    *range = NULL;
    return (0);
  }
  i = max - min;  
  range = malloc (sizeof(int) * i);
  if (range == 0)
  {
    *range = NULL;
    return (-1);
  }
  *range = res;
  i = 0;
  while (min < max)
  {
    res[i] = min;
    min++;
    i++;
  }
  return (range);
}


int main(void)
{
	int	*tab;
	int	i = 0;

	tab = ft_range(5, 10);
	while(i < 10 - 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}