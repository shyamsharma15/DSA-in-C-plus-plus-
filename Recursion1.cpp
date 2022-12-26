// que : 1 :- Program for finding the factorial of a number by using recursion :) ....
/*
#include<iostream>
using namespace std;
int factorial(int n)
{
    // base condition 
    if(n==0)
    return 1;

    // relation
    int smallerproblem = factorial(n-1);
    int biggerproblem = n * smallerproblem;
    return biggerproblem;
}
int main()
{
    int n , ans;
    cin>>n;
    ans = factorial(n);
    cout<<" the factorial is "<<ans;
}

// que : 2 :- Program for printing counting using recursion :) ....
#include<iostream>
using namespace std;
void print(int n)
{
    // base condition 
    if(n == 0)
    {
        return;
    }
    // recurrence relation 
    print(n-1);
    cout<<n<<endl;

}
int main()
{
    int n;
    cout<<" enter the number "<<endl;
    cin>>n;
    print(n);
}

// que : 3 :- Program for calculation of power of 2 using recursion :) ....

#include<iostream>
using namespace std;
int power(int n)
{
  // base condition
     if(n == 0)
     return 1;

     // recurrence relation
     int smallerproblem = power(n-1);
     int biggerproblem = 2 * smallerproblem;

     return biggerproblem;
}
int main()
{
    int n;
    cout<<" enter the power for 2 "<<endl;
    cin>>n;
    cout<<"the power of 2^"<<n<<" is "<<power(n);
    
}

// que : 4 :- Program for say digits by recursion  . Example : I/p = 623 , O/p = six two three :) ....

#include<iostream>
using namespace std;
void sayDigit(int n ,string array[])
{
    // base case 
    if(n == 0)
    return ;

    int digit = n % 10;
    n = n/10;

    sayDigit(n , array);

    cout<<array[digit]<<" ";

}
int main()
{
  string array[11] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" , "ten"};
  int n;
  cout<<" enter the number "<<endl;
  cin>>n;
  cout<<" the answer is "<<endl;
  sayDigit(n , array);
  return 0;

}


//que : 5 :- Program : you have to given an array so you have to find that the given array is
//           sorted or not by using recursion . example: I/p :- array[6] = {2,4,6,9,11,13} . O/p :- true

#include<iostream>
using namespace std;
bool isSorted(int array[] , int size)
{

    // base case : agar ekk hee element hai to wo to already sorted hai naa 
    if(size == 1 || size == 0)
    return true ;
 
    if(array[0] > array[1])
    {
        return false;
    }
    else
    {
       return isSorted(array + 1 , size - 1);
    }
}
int main()
{
    int arr[6] = {2,6,4,9,11,13};
    bool ans = isSorted(arr , 6);
    if(ans)
    {
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<" not sorted"<<endl;
    }
}

// que : 6 :- Program :  to find the sum of array using recursion :) ....
//            I/p :- arr[5] = {3,2,5,1,6};  O/p :- 17 

#include<iostream>
using namespace std;
int getSum(int array[] , int size)
{
    // base case
    if(size == 0)
    return 0; 

    if(size == 1)
    return array[0];

   int  remaining = getSum(array + 1 , size - 1);
    int sum = array[0] + remaining;
    return sum;
    
}
int main()
{
    int arr[5] = {3,2,7,1,6};
    cout<<" the sum of array is "<<getSum(arr , 5)<<endl;
}



// que : 7 :- Program :  for linear search using recursion .  I/p :- array[5] = {1,2,3,4,5}; , key = 6 .  O/p :- key not found :) ....

#include<iostream>
using namespace std;
bool linearSearch(int array[] , int size , int k)
{
    // base case 
    if(size == 0)
    return false;

    if(array[0] == k)
    return true;

     bool  remaining = linearSearch(array + 1 , size - 1, k);
        return remaining;
}
int main()
{
    int array[5] = {1,2,3,6,5};
    int key = 6;
    bool ans = linearSearch(array , 5 , 6);
    if(ans)
    {
        cout<<" key is found "<<endl;
    }
    else{
        cout<<" key was not found "<<endl;
    }
}


// que : 8 :- Program : binary search using recursion :) ....

#include<iostream>
using namespace std;
bool binarySearch(int array[], int key , int start , int end)
{
// base condition 
    // -> if element not found 
    if(start > end)
    return false;

    int mid = start + (end - start)/2;
    // -> if element is found 

    if(array[mid] == key)
    return true;

    // recursive call maaro 

    if(key > array[mid])
    {
        return binarySearch(array , key , mid + 1 , end);
    }
    else{
        return binarySearch(array , key , start ,mid - 1);
    }

}
int main()
{
    int array[6] = {2,4,6,10,14,18};
    int key = 1;
    cout<<"present or not "<<binarySearch(array , 1 , 0 , 5);
    
    return 0;

}

// que : 9 :- Program for finding the peak index of a mountain array by using recursion :) ....

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



// que : 10 :- Program to find the pivot element index by using the recursion :) ....

#include<iostream>
using namespace std;
int getPivot(int array[] , int start , int end)
{
     // base condition 
     if(start > end)
     return -1;

     if(start == end)
     return start;
      
     int mid = start + (end - start)/2;

     if(array[mid] >= array[0])
     {
        getPivot(array , mid + 1 , end);
     }
     else
     {
        getPivot(array , start , mid);
     }
}
int main()
{
    int array[7] = {7,9,10,11,1,2,3};
    int ans = getPivot(array , 0 , 6);
    cout<<" the pivot element is "<<ans;
}

