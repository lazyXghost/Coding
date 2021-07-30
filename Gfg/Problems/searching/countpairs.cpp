#include <bits/stdc++.h>
#define vi vector<int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x,count=0;
    cin >> x;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] + a[j] == x)
        {
            i++;j--;
            count++;
        }
        while (a[i] + a[j] < x & i<j)
        {
            i++;
        }
        while (a[i] + a[j] > x & i<j)
        {
            j--;
        }
    }
    if (count == 0)
        cout << "-1"<< endl;
    else
    cout<<count<<endl;
    return 0;
}