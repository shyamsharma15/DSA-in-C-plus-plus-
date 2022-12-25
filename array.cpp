/*
// que : 1 :- Program for Reverse the array :) ....

#include<iostream>
using namespace std;
void reverseArray(int arr[] , int size)
{
    int start = 0;
    int end = size - 1;
    while(start <= end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

}
void printArray(int shy[] , int s)
{
    for(int i = 0;i<s;i++)
    {
        cout<<shy[i]<<" ";
    }
}
int main()
{
   int even[8];
   cout<<" enter the array element "<<endl;
   for(int i = 0;i<8;i++)
   {
    cin>>even[i];
   }
   cout<<" after reversing the array element "<<endl;
    reverseArray(even , 8);
   printArray(even , 8);
}

// que : 2 :- Program to swap the alternate elements in an array :) ....

#include<iostream>
using namespace std;
void swapAlternate(int arr[] , int size )
{
    for(int i = 0;i<size;i += 2)
    {
        if(i+1 < size){
        swap(arr[i] , arr[i+1]);
        }
    }
    cout<<endl;
}
void printArray(int shy[] , int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<shy[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int even[8] = {2,3,4,5,6,7,6,8};
    int odd[7] = { 5,4,6,8,3,5,7};
    swapAlternate(even , 8);
    printArray(even , 8);
    swapAlternate(odd , 7);
    printArray(odd , 7);

}

// que : 3 :- Program to search element in an array by linear search :) ....

#include<iostream>
using namespace std;
bool search(int arr[] , int size , int tey)
{
    for(int i = 0;i<size;i++)
    {
        if(tey == i)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int find[10] = { 3,5,2,6,4,9,8,1,0,};
    int key;
    cout<<" enter the key to find in array "<<endl;
    cin>>key;
    if(search(find , 10 , key)){
      cout<<" key is present "<<endl;
    }
    else{
        cout<<" key not found "<<endl;
    }
}

// que : 4 :- Program to find the maximum and minimum element in an array :) ....

#include<iostream>
using namespace std;
int getMin(int arr[] , int size)
{
    int minni = 100;
    for(int i = 0;i<size;i++)
    {
        if(arr[i] < minni)
        {
            minni  = arr[i];
        }
    }
    return minni;
}
int getMax(int arr[] , int size)
{
    int maxi = 0;
    for(int i = 0;i<size;i++)
    {
        if( arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main()
{
    int array[9] = {2,5,3,6,8,9,10,11,16};
    cout<<" the maximum element in an array is "<<endl;
    cout<<getMax(array , 9)<<endl;
    cout<<" the minimum element in an array is "<<endl;
    cout<<getMin(array , 9);
}

*/  
