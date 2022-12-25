
/*
// que : 1 :- Program for intersection of an array :) ....

#include<iostream>
using namespace std;
void intersectionArray(int arr1[] , int arr2[] , int n ,int m)
{
    int i = 0 , j = 0;
          while(i < n && j < m)
          {
            if(arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<" ";
                i++;
                j++;
            }
            else if(arr1[i] < arr2[j])
            {
                i++;
            }
            else
            {
              j++;
            }
          }
 
}
int main()
{
    // int n , m;
    int arr1[6] = { 1 , 3 ,5 , 6 , 8 , 9 ,};
    int arr2[4] = { 5 , 8 , 9 };
    // cin>>n;
    // cin>>m;
    intersectionArray(arr1 , arr2 , 6 , 4);


}

// que : 2 :- Program to find the unique element in an array :) ....

#include<iostream>
using namespace std;
int uniqueElement(int array[] , int size)
{
    int ans = 0;
    for(int i = 0;i<size;i++)
    {
        ans = ans ^ array[i];
    }
    return ans;
}
int main()
{
   int array[9] = {2,3,6,8,3,2,8,6,1};
   cout<<" the unique element in an array is "<<endl;
   cout<<uniqueElement(array , 9);
}

// que : 3 :- Program for intersection of two array :) ....
#include<iostream>
#include<vector>
using namespace std;
int intersection(int array1[] , int m , int array2[] , int n)
{
    vector<int>v;
    vector<int> ans;
    int i = 0, j = 0;
    while(i <m && j < n)
    {
        if(array1[i] == array2[j])
        {
          ans.push_back(array1[i]);
          i++;
          j++;
        }else if (array1[i] < array2[j])
        {
            i++;
        }else{
            j++;
        }
    }
    return ans ;
}
int main()
{
   int array1[6] = {1,2,2,2,3,4};
   int array2[4] = {2,2,3,3};
   cout<<intersection(array1 , 6 , array2 , 4);

}
*/

   