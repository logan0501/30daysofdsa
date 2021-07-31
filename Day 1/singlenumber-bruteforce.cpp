#include <bits/stdc++.h>
using namespace std;
//Logic:looping each element twice and returning a number which has count of 1.
//Time complexity O(n^2)
int singleNumber(int nums[], int n)
{

    
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j] && i!=j)
            {
                count++;
            }
        }
        if (count ==1)
        {
            return nums[i];
        }
        
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter Array size";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num = singleNumber(arr, n);
    cout << num;
}