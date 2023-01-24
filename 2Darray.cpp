/*
// que 1 :- Program to take input in a 2D array :)  ....
// que 2 :- program to take input in a 2D array :)  ....
#include<iostream>
using namespace std;
int main()
{
    int arr[3][4] ;
    cout<<" enter the array elements "<<endl;
    // array mai input leelo 
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<" the elements of an arrya is "<<endl;
    // array ko print karralo 
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }

}

// que : 2 :- Program to take input column wise in 2D array :) ....

#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    cout<<" enter the array elements ";
    // input lenne ke liye loop challao 
    for(int j = 0;j<4;j++)
    {
        for(int i = 0;i<3;i++)
        {
            cin>>arr[i][j];
        }
    }
    // print the array elements 
    for(int i = 0;i<3;i++)
    {
        for(int j = 0 ;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// que :3 :-  Program to take input row wise in matrix :) ....

#include<iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
   
     // printing matrix elements 
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<4;j++)
        {
            cout<<arr[i][j]<<"    ";
        }
        cout<<endl;
    }
}

// que : 4 :- Program to find the row wise sum in an array :) ....

#include<iostream>
using namespace std;
void rowSum(int arr[][3] , int i ,int j )
{
  for(int i = 0;i<3;i++)
  {
    int sum = 0;
    for(int j = 0;j<3;j++)
    {
       sum += arr[i][j];
      
    }
    cout<<"sum is "<<sum;
    cout<<endl;
  }
}

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rowSum(arr , 3,3);
    
}

// que : 5 :- Program to print the column wise sum in an array :) ....

#include<iostream>
using namespace std;
void columnSum(int arr[][4] , int row ,int col)
{
    for(int col = 0;col < 4;col++)
    {
        int sum = 0;
        for(int row = 0;row < 3;row++)
        {
            sum += arr[row][col];
        }
        cout<<" sum of col is "<<sum;
        cout<<endl;
    }
}
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<4;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    columnSum(arr , 3 ,4);
}

// que : 6 :- Program to print the largest row sum in a matrix :) ....

#include<iostream>
using namespace std;
int largestSum(int arr[][3] , int row ,int col)
{
    int  maxi = -1,rowindex = -6;
    for(int row = 0;row < 3;row ++)
    { 
        int sum = 0;
        for(int col = 0;col < 3;col++)
        {
          sum += arr[row][col];
        }
       cout<<" sum is "<<sum<<endl;
         if(sum > maxi)
          {
            rowindex = row;
            maxi = sum ;
          }
    }
    cout<<" the largest sum of row is at index ";
    return rowindex;
}
int main()
{
    int arr[3][3] = {1,3,2,4,5,6,7,8,9};
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   cout<<largestSum(arr , 3 ,3);
}

// que : 7 :- Program to find the transpose of a matrix :) ....

#include<iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0;i<3;i++)
    {
        for(int j = i;j<3;j++)// dignol ke upper walli matrix ko swap karinge isliye j = i liya 
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout<<" the matrix after transpose is "<<endl;
    // print karralo matrix 
    for(int i = 0;i<3;i++)
    {
       for(int j = 0;j<3;j++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<"\n";
    }
}
 
// que : 8 :- Program for matrix multiplication :) ....

#include<iostream>
using namespace std;
int main()
{
    int arr1[3][4] = {{2,4,1,2},{8,4,3,6},{1,7,9,5}};
    int arr2[4][3] = {{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
    // now ekk answer array bna lo jisme pahelle  sab elements ko 0 karlo
    int ans[3][3];
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            ans[i][j] = 0;
        }
    }
    // abb loops lagao paheli matrix ka row ko traverse karro aur dooseri matrix kaa column ko 
    // aur phir ekk aur loop challao elements ko multiply karne ke liye 

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            for(int k = 0;k<4;k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    // now final matrix ko print karrao 
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}

*/

