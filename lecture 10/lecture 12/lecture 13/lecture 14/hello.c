#include <stdio.h>

void max_sum(int arr[], int n)
 {
    int i = arr[0], k = arr[0];
    int start = 0, khatam = 0, s = 0;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > k + arr[i]) 
        {
            k = arr[i];
            s = i;
        } else
         
    {
            k += arr[i];
        }

        if (k > i)
         {
            i = k;
            start = s;
            khatam = i;
        }
    }

    