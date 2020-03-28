#include <iostream>
using namespace std;
void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  
  void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
        swap(&arr[min_idx], &arr[i]);  
    }  
}  
int main()
{
    int arr[3], ord[3];
    cin >> arr[0] >> arr[1] >> arr[2];