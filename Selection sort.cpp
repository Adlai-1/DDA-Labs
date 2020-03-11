#include<iostream>
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min;  
  
    for (i = 0; i < n-1; i++)  
    {  
         
        min = 0;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min = j;  
  
          swap(&arr[min], &arr[i]);  
    }  
}  

void Display(int arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] <<endl ;  
     
}  
    
int main()  
{  
    int arr[] = {64, 25, 12, 22, 11};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    selectionSort(arr, n);  
    cout << "Sorted array"<<endl;  
    Display(arr, n);  
    return 0;  
}  
