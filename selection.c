#include <stdio.h>

int a[7]={74, 26, 53, 22, 49, 59, 36};

int main()
{
  printf("INITIAL = %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
  int temp;
  for(int i = 0 ; i < 7 ; i++)
  {
    int min = i;
    for(int j = i+1 ; j < 7 ; j++)
    {
      if(a[j] < a[min])
      {
        min = j;
      }
    }
    if(min != i)
    {
      temp=a[min];
      a[min]=a[i];
      a[i]=temp;
    }
      printf("SWAPPED = %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
  }
  printf("COMPLETED = %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);

  return 0;
}
