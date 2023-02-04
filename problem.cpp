
// Code-Studio Problem :-  Aggressive Cows Problem
// Solution of this Problem with the help of concept of binary searching 

bool isPossible(vector<int> &stalls , int k , int mid)
{
   int cowsCount = 1;
   int lastPosition = stalls[0];
   for(int i = 0;i<stalls.size();i++)
   {
      if((stalls[i] - lastPosition) >= mid)
      {
         cowsCount++; // yahan ekk nyi cow bna li 
         if(cowsCount == k) 
         {
            return true;
         }
         lastPosition = stalls[i]; // aur yahan uss nyi cow ko rakh diya 
      }
   }
   return false;
}
int aggressiveCows(vector<int> &stalls , int k)
{
   sort(stalls.begin(),stalls.end());  // sort karna padega 
   int s = 0;
   int maxi = -1;
   int ans = -1;
   for(int i = 0;i<stalls.size();i++)
   {
     maxi = max(maxi,stalls[i]);
   }
   int e = maxi;
   int mid = s+(e-s)/2;
   while(s<=e)
   {
      if(isPossible(stalls,k,mid))
      {
         ans = mid + 1;
         s + mid + 1;
      }
      else
      {
          e = mid - 1;
      }
      mid = s+(e-s)/2;
   }
   return ans;
}

