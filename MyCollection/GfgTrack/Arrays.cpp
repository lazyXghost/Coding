#include<bits/stdc++.h>
using namespace std;

void leftRotateByDPlaces(int arr[], int n, int d)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}
int trappingRainWater(int arr[], int n)
{
    int lmax[n], rmax[n], res = 0;
    lmax[0] = arr[0];
    rmax[n - 1] = arr[n - 1];
    for(int i = 1;i<n;i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }
    for(int i = 0;i<n;i++)
    {
        res += min(lmax[i], rmax[i]) - arr[i];
    }
    return res;
}

// {Kadane's algorithm
int maxSubarraySum(int arr[],int n){
    int temp = arr[0],res = arr[0];
    for(int i = 1;i<n;i++){
        temp = max(arr[i],temp);
        res = max(res,temp);
    }
    return res;
}
int maxCircularSubarraySum(int arr[], int n)
{
    int res = maxSubarraySum(arr, n);
    if(res<0){
        return res;
    }
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum += arr[i];
        arr[i] = -arr[i];
    }
    int mxCircularSaSum = sum + maxSubarraySum(arr, n);
    return max(res, mxCircularSaSum);
}
// }

int majorityElement(int arr[],int n){
    int count = 1, res = 0;
    for(int i = 1;i<n;i++)
    {
        if (arr[i] != arr[res])
            count--;
        else
            count++;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for(int i = 0;i<n;i++) if (arr[i] == arr[res])
        count++;
    if (count < n / 2)
        res = -1;
    return res;
} 

// {this approach dont work if there is negative element in array
bool subarrayWithGivenSum(int arr[],int n,int rs){
    int i = 0,j=0;
    int sum = 0;
    while(i<n){
        if(sum<rs)
        {
            if(j==n)
                break;
            sum+=arr[j++];
        }
        else if(sum>rs)
            sum-=arr[i++];
        else
            return true;
    }
    return false;
}
// }

//{Function to find the smallest positive number missing from the array.
int missingNumber(int arr[], int n)
{
    // Your code here
    bool onemissing = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            onemissing = false;
        if (arr[i] < 1 || arr[i] > n)
            arr[i] = 1;
        arr[i]--;
        // making all the trash values 0 so that they dont interfere with others
    }

    for (int i = 0; i < n; i++)
        arr[arr[i] % n] += n;

    if (onemissing == true)
        arr[0] = 1;
    else
        arr[0] = n + 1;

    for (int i = 0; i < n; i++)
        if (arr[i] / n == 0)
            return i + 1;
    return n + 1;
}
// } O(1) extra space