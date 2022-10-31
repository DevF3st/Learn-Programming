#include <stdio.h>
int main()
{
  int array[100], n, c, d, position, t;
  //taking input
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
  scanf("%d", &array[c]);

  for (c = 0; c < (n - 1); c++) 
  // finding minimum element (n-1) times
  {
    position = c;  
   //assuming smallest is at cth position
    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    //if assumption was wrong then swap it with correct smallest element 
    {
      t = array[c];
      array[c] = array[position];
      array[position] = t;
    }
  }

  printf("Sorted list in ascending order:\n");
  //printing sorted list
  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);

  return 0;
}