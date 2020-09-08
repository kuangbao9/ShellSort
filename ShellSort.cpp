#include<stdio.h>


void ShellSort(int *a, int n)
{
	int i, j, k, gap, tmp;
	for(gap = n/2; gap>0; gap = gap/2)
	{
		for(i = 0; i<gap; i++)
		{
			for(j=gap+i; j<n; j+=gap)
			{
				tmp = a[j];
				k = j - gap;
				while(k>=0 && a[k]>tmp)
				{
					a[k+gap] = a[k];
					k -= gap;
				}
				a[k+gap] = tmp;
			}
		}
	}
	
}
int main()
{
	int i;
	int a[7] = {5,2,10,8,6,4,7};
	ShellSort(a, 7);
	for(i=0; i<7; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
