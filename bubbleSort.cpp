
// Program for bubble sort :) ....

//    3  6  4  2  8  5  1  0

#include<iostream>
using namespace std;
int bubbleSort(int arr[] , int size )
{
    bool bubble = false;
      for(int i = 0;i< size-1 ;i++)
      {
        for(int j = 0;j<size-i-1;j++)
        { 
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
                bubble = true;
            }
        }
        if(bubble == false )
        break;
      }
}
void printArray( int arr[] , int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[8] = {3,6,4,2,8,5,1,0};
    cout<<" the array after sorting is "<<endl;
    bubbleSort(arr , 8);
    printArray(arr , 8);

}
