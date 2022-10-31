//Selection sort
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, pos, temp, min, a[30];
    // take input from user
    cout << "Enter the number of elements:";
    cin>>n;
    cout << "\nEnter the elements\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i = 0; i < n - 1; i++)
    {  //assuming ith element is the minimum element
        min = a[i];
        pos = i;
        for (j = i + 1; j < n; j++)
        {  //finding element smaller than min
            if (min > a[j])
            {
                min = a[j];
                pos = j;
            }
        }
      // putting smaller element to its correct position
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
   //printing the sorted list
    cout << "\nSorted list is as follows\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}