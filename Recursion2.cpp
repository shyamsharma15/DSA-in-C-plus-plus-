
// que : 11 :- Program for finding the sum between two natural numbers by using recursion :) ....

#include<iostream>
using namespace std;
int getSum(int a , int b)
{
    if(a > b)
    return 0;


    int bigger = a + getSum(a + 1 , b);
    return bigger;
}
int main()
{
    int a,b;
    cout<<" enter the first number "<<endl;
    cin>>a;
    cout<<" enter the second number "<<endl;
    cin>>b;
    cout<<" the sum between these is "<<getSum(a , b);
}

// que : 12 :- Program :  to find the sum of n natural numbers :) ....

#include<iostream>
using namespace std;
int getSum(int n)
{
    // base case base case  
    if(n == 1)
    return 1;

    return n + getSum(n-1);
}
int main()
{
    int n;
    cout<<" enter the number "<<endl;
    cin>>n;
    cout<<" the sum is "<<getSum(n);
}

// que : 13 :- Program : to reverse the array  by using recursion :) ....

#include<iostream>
using namespace std;
void reverse(int (&arr)[5], int start , int end , int size) // yahan humne array ko pass by reference karra liya hai 
{
    // base case bannao bhaiya 
    
    if(start > end)
    return;

    swap(arr[start] , arr[end]);
    start ++ ;
    end -- ;

    // recursive call maaro bhaiya 

     reverse(arr , start , end , size);
     
   
}
int main()
{
    int array[5] = {1,2,3,4,5};
    int size = 5;
    cout<<" now the reverse array is "<<endl;
    reverse(array , 0 , 4 , 5);
    for(int i = 0;i<size;i++)
     {
         cout<<array[i]<<" ";
     }
}



//  **   Recursion with Strings  **

// que : 14 :- Program : to reverse the string  by using recursion :) ....

#include<iostream>
using namespace std;
void reverse(string &str, int start , int end ) // yahan humne string ko pass by reference karra liya hai 
{
    // base case bannao bhaiya 
    
    if(start > end)
    return;

    swap(str[start] , str[end]);
    start ++ ;
    end -- ;

    // recursive call maaro 

     reverse(str , start , end );
    
   
}
int main()
{
    string name = "babbar";
    cout<<" now the reverse string is "<<endl;
    reverse(name , 0 , name.length() - 1);
    cout<<name;
}


// que : 15 :- Program to check the string is palindrome or not by using recursion :) ....

#include<iostream>
using namespace std;
bool check(string str , int start , int end)
{
    // base case bannao 
    if(start > end)
    return true;
    
    if(str[start] != str[end])
    {
        return false;
    }
    else
    {
        // recursive calll maaro yahan par 
         check(str , start + 1 , end - 1);
    }


}
int main()
{
   string name = "abbccbba";
   bool ans = check(name , 0 , name.length() - 1);
   if(ans)
   {
    cout<<" string is palindrome "<<endl;
   }
   else{
    cout<<" not palindrome ";
   }
}


// que : 16 :- Program  to calculate the power . a^b by using recursion :) ....

#include<iostream>
using namespace std;
int power(int a , int b)
{
    // base case batao 
    if(b == 0)  // kissi ki power zero hoti hai to uska matlab 1 
    return 1;

    if(b == 1)  // kissi ki power 1 matlab khud wo number hee hoga naa 
    return a;

    // recursive call karro 

    int ans = power(a , b/2);
    if(b % 2 == 0)         // if b is even 
    {
        return ans * ans ;
    }
    else{     //  if b is odd 
        return a * ans * ans ;
    }
}
int main()
{
    int a , b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<" Answer is "<<ans;
}



// que : 17 :- Program for bubble sort by using recursion :) ....

#include<iostream>
using namespace std;
void sortArray(int *arr , int size)
{
    // base case - already sorted hai 
    if(size == 0 || size == 1)
    {
        return ;
    }

    // abb bas ekk case solv karlo baaki case recursion khud solv larlega 
    // bas ekk element ko sahi jagah rakhdo baaki recursion khud karlega 

    for(int i = 0 ; i < size-1 ; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            swap(arr[i] , arr[i + 1]);
        }
    }
    sortArray(arr , size - 1);  // jo bigger element sort hota jaaye last mai usse hata te jaao  
}
int main()
{
    int arr[5] = {2,5,1,6,9};  
    sortArray(arr , 5);
    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

}


// que : 18 :- Program  for sellection sort by using the recursion :) ....

#include<iostream>
using namespace std;
void selectionSort(int *array , int start , int end)
{
    cout<<" start "<<start<<" end "<<end<<endl;
    // base case bannao 
    if(start >= end)
    {
        return ;
    }
    int minIndex = start;
    for(int i = start;i<=end;i++)
    {
        
        if(array[i] < array[minIndex])
        {
            minIndex  =  i;
        }
    }
    swap(array[minIndex] , array[start]);

    //  recursive calll maaro abbb 

    selectionSort(array , start + 1 , end);

}
int main()
{
   int arr[6] = {5,4,3,0,1,2};
   cout<<" the array after sorting is "<<endl;
   selectionSort(arr , 0 , 5);
   for(int i = 0;i<6;i++)
   {
    cout<<arr[i]<<" ";
   }
   
}


// que : 19 :- Program  for insertion sort by using the recursion :) ....

#include<iostream>
using namespace std;
void selectionSort(int array[] , int start , int end)
{
    // base case bannalo bhaiya 
    if(start >= end)
    return ;

    int temp = array[start];
    int j = start - 1;
    for(j; j>= 0 ;j--)
    {

        if(array[j] > temp)
        {
            // shift karna padega jagah bannani padegi bhaiya left mai 
            array[j+1] = array[j];
        }
        else{
            // to ruk jaao vahi par 
            break;
        }
    }
      array[j+1] = temp;  // abb jahan ruke hai uske ekk aange element rakho 

      // recursive calll karralo bhaiya 

      selectionSort(array , start + 1 , end);


}
int main()
{
    int array[7] = {1,7,10,4,8,2,11};
    selectionSort(array , 1 , 6);
    for(int i = 0;i<7;i++)
    {
        cout<<array[i]<<" ";
    }
}


// que : 20 :- Program for merge sort by using recursion :) ....

#include<iostream>
using namespace std;
void merge(int *arr , int start , int end)
{
    int mid = start + (end - start)/2;
    
    // abb two arrays banana hai pahelle ki length length1 aur doosere ki length length2 maanlo 
    int length1 = (mid - start) + 1;
    int length2 = end - mid ;

    // abb new array create karlo dynamic memory ki help se 
    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    // copy values for 1st array 
    int mainArrayindex = start;
    for(int i = 0; i<length1 ;i++)
    {
        arr1[i] = arr[mainArrayindex ++ ];
    }

    // copy values for 2nd array
     mainArrayindex = mid + 1;
    for(int i = 0 ; i<length2; i++)
    {
        arr2[i] = arr[mainArrayindex ++ ];
    }

    // abb donno sorted array ko merge karlo bhaiya 
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = start;
    while(index1 < length1 && index2 < length2)
    {
        if(arr1[index1] < arr2[index2])
        {
            arr[mainArrayindex++] = arr1[index1++];
        }
        else{
            arr[mainArrayindex++] = arr2[index2++];
        }
    } 

    // abb agar first ke kuch element reh gye to unko daalo 
    while(index1 < length1)
    {
        arr[mainArrayindex ++] = arr1[index1++];
    }
    // aur agar 2nd ke reh gyae to onko daalo
    while(index2 < length2)
    {
        arr[mainArrayindex++] = arr2[index2++];
    }
    // abb jo uper dynamic arrays bannaye the unko kaaam khatam honne par delete kardena chaiye 
    delete []arr1;
    delete []arr2;
    
}
void mergeSort(int *array , int start , int end)
{
    // base case bannalo bhaiya 

    if(start >= end)
    {
        return ;
    }
    int mid = start + (end - start)/2;

    // abb left part sort karo bhaiya 
    mergeSort(array , start , mid);

    // abb right part sort karlo bhaiya 
    mergeSort(array , mid + 1 , end);

    // merge karlo 
    merge(array , start , end);

}
int main()
{
    int arr[5] = {2,6,1,5,9};
    int size = 5;
    mergeSort(arr , 0 , size - 1);
    // print karralo sorted array ko bhaiya 
    for(int i = 0; i<size ;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}