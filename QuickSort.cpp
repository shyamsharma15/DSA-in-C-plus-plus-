
// que : 22 :- Program  for quick sort by using recursion :) ....

#include<iostream>
using namespace std;
int partition(int array[] , int start , int end)
{
    int pivot = array[start];
    int count = 0;
    for(int i = start + 1; i<= end;i++)
    {
        if(array[i] <= pivot)
        {
            count ++;
        }
    }
    // sahi jagah rakhdo bahiya iss pivot element ko 
    int pivotIndex = start + count ;
    swap(array[pivotIndex] , array[start]);

    // abb left walla aur right walla part ko sahi karlo 
    int i = start , j = end ;
    while(i < pivotIndex && j > pivotIndex )
    {
        while(array[i] < pivot)
        {
            i++;
        }
        while(array[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
           swap(array[i] , array[j]);
        }
        
    }

    return pivotIndex;
}
void quickSort(int array[] , int start , int end )
{
    // base case bannao 
    if(start >= end)
    return;

    // partition karlo 
    int p = partition(array , start , end);

    // abb left part ko sort karralo  
    quickSort(array , start , p-1);

    // aur right walla part sort karlo 
    quickSort(array , p+1 , end);

}
int main()
{
    int arr[5] = {2,4,1,6,9};
    int size = 5;
    quickSort(arr , 0 , size - 1);
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}