/*

// que : 1 :-  Program for binary search of key binary search :) ....

#include<iostream>
using namespace std;
int binarySearch(int arr[] , int size , int key )
{
    int start = 0 , end = size - 1;
    int mid = start + (end - start)/2;
     int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == key )
        {
            return mid ;
        }
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int arr1[8] = { 2,3,4,5,6,7,8,9};
    int arr2[5] = {4,5,6,7,8};
    int arr3[6] = {2,3,4,5,6,7};
    int array1 = binarySearch(arr1 , 8 , 6);
    cout<<" index of 6 in arr1 is "<<array1<<endl;
    int array2 = binarySearch(arr2 , 5 , 7);
    cout<<" index of 7 in arr2 is "<<array2<<endl;
    int array3 = binarySearch(arr3 , 6 ,1);
    cout<<" index of 1 in arr3 is "<<array3<<endl;
}



// que : 2 :- Program to find the first and the last occurence of an element in an array using binary search :) ....

#include<iostream>
using namespace std;
int lastOccurrence(int arr[] , int size , int key)
{
    int start = 0 , end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;

}
int firstOccurrence(int arr[] , int size , int key)
{
    int start = 0 , end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;

}
int main()
{
   int array[8] = { 2,3,4,5,5,5,6,7};
   cout<<" the first occurrence of 5 is "<<firstOccurrence(array , 8 , 1)<<endl;
   cout<<" the last occurrence of 5 is "<<lastOccurrence(array , 8 ,1);
}


// que : 3 :-Program to find the total number of occurrence of an element in a sorted array using binary search:) ....

#include<iostream>
using namespace std;
int firstOccurrence(int arr[] , int size , int key )
{
    int s = 0 , e = size - 1;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s <= e)
    {
        if(arr[mid] == key)
        {
            ans = mid ;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid  + 1 ;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
int lastOccurrence(int arr[] , int size ,int key)
{
    int s = 0 , e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e)
    {
          if(arr[mid] == key) 
          {
            ans = mid ;
            s = mid +1;
          }
          else if (key < arr[mid])
          {
            e = mid - 1;
          }
          else
          {
             s = mid + 1;
          }
          mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
   int array[9] = {2,3,4,5,6,6,6,6,7};
   int ans1 = firstOccurrence(array , 9 , 6);
   cout<<" first occurrence of 6 is at index "<<ans1<<endl;
   int ans2 = lastOccurrence(array , 9 , 6);
   cout<<" last occurrence of 6 is at index "<<ans2<<endl;
   int total =(ans2 - ans1) + 1;
   cout<<" total number of occurrence of 6 is "<<total;
}


// que : 4 :-Program to find the peak index in a mountain array using binary search  :) ....

#include<iostream>
using namespace std;
int peakIndex(int arr[] , int size)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;
    while(start < end)
    {
        if(arr[mid] < arr[mid + 1])
        {
          start = mid + 1;
        }
        else
        {
            end = mid ;
        }
        mid = start + (end - start)/2;

    }
    return start;
    
}
int main()
{
      int array[8] = {2,3,4,5,4,3,2,1};
      cout<<" the peak index is "<<peakIndex(array , 8);
}


// que : 5 :-Program to find the pivot element in an array using binary search :) ....

//   7  9  1  2  3

#include<iostream>
using namespace std;
int pivot(int arr[] , int size )
{
   int start = 0 , end = size - 1;
   int mid = start + (end - start)/2;
   while(start < end )
   {
    if(arr[mid] >= arr[0])
    {
        start = mid + 1; 
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start)/2;
   }

   return start;
}
int main()
{
   int array[7] = {7,9,10,11,1,2,3};
   cout<<" the pivot element index is at "<<pivot(array , 7);
}

// que : 6 :- Program to search in rotated sorted array :) ....

//  7  9  10  11  1  2  3  

#include<iostream>
using namespace std;
int getPivot(int arr[] , int size)
{
    int start = 0,end = size - 1;
    int mid = start + (end - start)/2;
    while(start < end )
    {
        if(arr[mid] >=  arr[0])
        {
            start = mid + 1;
        }
        else{
            end = mid ;
        }
        mid = start + (end - start)/2;
    }
    return start;

}
int binarySearch(int arr[] , int size , int s , int e, int key )
{
    int start = s , end = e;
    int mid = start + (end - start)/2;
    while(start <= end )
    {
        if(arr[mid] == key )
        {
            return mid;
        }
        if(key > arr[mid])
        {
            start = mid + 1 ;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int key;
    cout<<" enter the to search for "<<endl;
    cin>>key;
     int array[7] = {7,9,10,11,1,2,3};
     int pivot = getPivot(array , 7);
     if(key >= pivot && key <= 7 - 1)
     {
        cout<<binarySearch(array , 7 ,pivot ,6 ,key);
     } 
     else
     {
       cout<< binarySearch(array , 7 , 0 , pivot-1, key);
     }
     return 0;
     

     
}

// que : 7 :- Program to find  the accurate square root of the number :) ....

#include<iostream>
using namespace std;
int squareRoot(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start)/2;
    long long  ans = -1;
    while(start <= end )
    {
        long long  square = mid * mid ;
    if(square  == n)
    {
        return mid ;
    }
    if (square  < n)
    {
        ans = mid;
        start = mid + 1;
    }
    else{
        end = mid -1;
    }
    mid = start + (end - start)/2;

    }
    return ans;
}
double morePrecision(int n , int precision , int tempSol)
{

    double ans = tempSol;
    double factor = 1;
    for(int i = 0;i<precision;i++)
    {
         factor = factor / 10 ;
        for(double j = ans ; j*j<n;j = j+factor )
        {
            ans  = j ;
        }
    }
    return ans ;
}
int main()
{
    int n;
    cout<<" enter the number to find its square root "<<endl;
    cin>>n;
    int tempSol = squareRoot(n);
    cout<<" the answer is "<<morePrecision(n,3,tempSol);
    
}

*/

// Practice  for the binary search 
// program for finding the first and last occurrence of an element without using binary search in an array :) ....

#include<iostream>
using namespace std;
int peakIndex(int array[] , int size , int start , int end)
{
    // base case bannao 
    if(start > end)
    return -1;
  
    int mid = start +(end-start)/2;
     if(start == end)
     {
        return start;
     }
    if(array[mid] < array[mid + 1])
    {
        peakIndex(array , size , mid + 1 , end);
    }
    else{
        peakIndex(array , size , start , mid);
    }
}
int main()
{
    int array[8] = {2,3,4,5,6,3,2,1};
    cout<<" the peak index is "<<endl;
    int ans = peakIndex(array , 8 , 0 , 7 );
    cout<<ans;
}
