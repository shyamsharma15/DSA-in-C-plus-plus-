
// que : 21 :- Program  to count the number of inversions by using merge sort (Recursion) :) ....

#include <iostream>
using namespace std;
long long merge(int arr[], int start, int end)
{
    long long inv = 0;
    int mid = start + (end - start) / 2;
    // new array jo banegi unki length kya hogi
    int length1 = (mid - start) + 1;
    int length2 = (end - mid);

    // array bannao
    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    // copy karo donno array ki values new arrays mai
    int mainArrayindex = start;
    for (int i = 0; i < length1; i++)
    {
        arr1[i] = arr[mainArrayindex++];
    }
    mainArrayindex = mid + 1;
    for (int i = 0; i < length2; i++)
    {
        arr2[i] = arr[mainArrayindex++];
    }
    // finally merge karlo bhaiya
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = start;
    while (index1 < length1 && index2 < length2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainArrayindex++] = arr1[index1++];
        }
        else
        {
            arr[mainArrayindex++] = arr2[index2++];
            // yahan inversion hoha kyunki arr1[index1]  , arr[index1+2] , arr[index1 + 3]> arr2[index2]
            inv += length1 - index1;
        }
    }
    // kuch element bachgye 1st array ke to unko print karralo jo already sorted hoinge
    while (index1 < length1)
    {
        arr[mainArrayindex++] = arr1[index1++];
    }
    // aur agar doosere element ke bach gye to unko print karrao
    while (index2 < length2)
    {
        arr[mainArrayindex++] = arr2[index2++];
    }

    return inv;

    delete[] arr1;
    delete[] arr2;
}
long long mergeSort(int array[], int start, int end)
{
    long long inv = 0;
    // base case
    if (start >= end)
    {
        return 0;
    }
    int mid = start + (end - start) / 2;
    // left array ko sort karro
    inv += mergeSort(array, start, mid);

    // right walle array ko sort karro ghty
    inv += mergeSort(array, mid + 1, end);

    // abb array ko merge karlo laundon
    inv += merge(array, start, end);

    return inv;
}
int main()
{
    int array[5] = {2, 6, 1, 5, 9};
    int size = 5;
    cout << " total inversions will be " << endl;
    cout << mergeSort(array, 0, size - 1);
}

// que : 22 :- Program  for quick sort by using recursion :) ....

#include <iostream>
using namespace std;
int partition(int array[], int start, int end)
{
    int pivot = array[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (array[i] <= pivot)
        {
            count++;
        }
    }
    // sahi jagah rakhdo bahiya iss pivot element ko
    int pivotIndex = start + count;
    swap(array[pivotIndex], array[start]);

    // abb left walla aur right walla part ko sahi karlo
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (array[i] < pivot)
        {
            i++;
        }
        while (array[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(array[i], array[j]);
        }
    }

    return pivotIndex;
}
void quickSort(int array[], int start, int end)
{
    // base case bannao
    if (start >= end)
        return;

    // partition karlo
    int p = partition(array, start, end);

    // abb left part ko sort karralo
    quickSort(array, start, p - 1);

    // aur right walla part sort karlo
    quickSort(array, p + 1, end);
}
int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int size = 5;
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Recursion
// Program : leetcode : (Subset) : problem Example : I/p: {1,2,3} . O/p : [[],[1],[2],[3],[1,2][2,3][1,3],[1,2,3]]
class Solution
{
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
    {
        // base case bannao bhaiya
        if (index >= nums.size())
        {
            ans.push_back(output); // return karna se pahelle ans ko store karlena bhaiya
            return;
        }
        // exclude walla function call karlo
        solve(nums, output, index + 1, ans);
        // abb include element walla function ko calll karlo bhaiya
        int element = nums[index];
        output.push_back(element); // element ko output mai daal lo
        solve(nums, output, index + 1, ans);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
}

// Program : codestudio : (Subsequences) : problem Example :I/p: string = "abc" O/p: "bc","ac","ab","a","b","c","abc"
// iss problem mai empty string answer mai nhi dena hai

// yea function humne banaya hai code studio mai

void
solve(string str, string output, int index, vector<string> &ans)
{
    // base case bannao bhaiya
    if (index >= str.length())
    {                            // return karna se pahelle ans ko store karlena
        if (output.length() > 0) // empty string naa jaaye isliye yea condition lagai hai humne
        {
            ans.push_back(output);
        }
        return;
    }
    // exclude walla function call karlo
    solve(str, output, index + 1, ans);
    // abb include element walla function ko calll karlo bhaiya
    char element = str[index];
    output.push_back(element); // element ko output mai daal lo
    solve(str, output, index + 1, ans);
}
// yea function given hai code studio kaa
vector<string> subsequences(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

// Recursion : Program : (leetcode) Letter Combinations of a Phone number .

class Solution
{
private:
    void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
    {
        // base case bannao bhaiya
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }
        int number = digits[index] - '0';
        string value = mapping[number];
        for (int i = 0; i < value.length(); i++)
        {
            output.push_back(value[i]);
            solve(digits, output, index + 1, mapping, ans);
            output.pop_back(); // output str mai jo element daala fir usko hatana padega nhi to ans galat aayega
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;

        if (digits.length() == 0) // agar input mai kuch nhi diya to ans mai bhi kuch nhi yea given hai testcase mai
            return ans;

        string output = "";
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

// Recursion :(leetcode) Permutations of a string .

class Solution
{
private:
    void solve(vector<int> nums, vector < vector<int> & ans, int index)
    {
        // base case bannao bhaiya
        if (index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            solve(nums, ans, index + 1);
            // backtrace :- isliye kiya taaki jo swap kiya tha wo nutralize ho jaaye kyunki humme original array mai hee changes karna hai to wapis humm original array par aakar hee changes karinge
            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

// Recursion :(Geeks for Geek) Rat in a Maze Problem .

class Solution
{
private:
    bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && (m[x][y] == 1) && (visited[x][y] == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
    {
        // yahan appp abb x , y par khade ho bhaiya

        // base case bannao bhaiya
        if (x == n - 1 && y == n - 1) // matlab aap destination par pahuch gyae ho to ans ko store karo aur return karo
        {
            ans.push_back(path);
            return;
        }
        visited[x][y] = 1; // visited mark karlo

        // abbb 4 choices hai :- D L R U
        // Down
        int newx = x + 1;
        int newy = y;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('D');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back(); // D ko hatana bhi padega wapis jaaunga jab function se tab
        }
        // Left
        newx = x;
        newy = y - 1;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        // Right
        newx = x;
        newy = y + 1;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('R');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        // Upp
        newx = x - 1;
        newy = y;
        if (isSafe(newx, newy, n, visited, m))
        {
            path.push_back('U');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }

        visited[x][y] = 0; // function se jab lauto to zero mark kardena .
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;
        // agar source (starting) mai hee 0 hai to chooha kahi nhi jaa paayega
        if (m[0][0] == 0)
        {
            return ans;
        }

        int srcx = 0;
        int srcy = 0;

        vector<vector<int>> visited = m;
        // initialize with zero (0) ;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }
        string path = "";
        solve(m, n, ans, srcx, srcy, visited, path);
        // abbb ans ko sort karna padega kyunki question mai given hai
        sort(ans.begin(), ans.end());
        return ans;
    }
};
// ka 