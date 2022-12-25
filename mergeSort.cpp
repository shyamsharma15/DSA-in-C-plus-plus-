
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
