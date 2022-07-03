#include <stdlib.h>
#include <stdio.h>

int arr(int index);

void main()
{
int i,j;
printf("Enter an index: ");
scanf("%d", i);
j = arr(i);
printf("The selected index is %d", j);
}

int arr(int index)
{
int x[6] = {0,1,2,3,4,5};
return (x[index]);
}
