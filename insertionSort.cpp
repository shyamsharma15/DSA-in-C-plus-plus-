// Program for insertion sort :) ....

#include<iostream>
using namespace std;
insertionSort(int array[] , int n)
{
     for(int i = 1;i<n;i++)
     {
        int current = array[i];
        int j = i-1;
        for(;j>=0;j-- )
        {
            if(array[j] >current)
            {
                array[j+1] = array[j];
            }
            else
            {
               break;
            }
        }
        array[j+1] = current;
     }
}
void printArray(int array[] , int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}
int main()
{                     
    int arr[7] = { 2,8,4,6,3,0,1};
    cout<<" now the array after sorting is "<<endl;
    insertionSort(arr , 7);
    printArray(arr , 7);
}

*/  
