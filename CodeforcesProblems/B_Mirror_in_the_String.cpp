#include <bits/stdc++.h>
using namespace std;

// typedef is used to give datatype a newname
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

// define is used to give things an alias
#define FASTIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define fill(start, end, val) fill(start, end, val)

#define tests(t) \
    int t;       \
    cin >> t;    \
    while (t--)
#define loop(i, a, b) for (int i = a; i <= b; i++)
#define loopreverse(i, a, b) for (int i = a; i >= b; i--)
#define iteratorloop(v, i) for (auto i = v.begin(); i != v.end(); i++)
#define iteratorloopreverse(v, i) for (auto i = v.end() - 1; i != v.begin() - 1; i--)
#define printArray(arr, n, i)   \
    for (int i = 0; i < n; i++) \
    {                           \
        print(arr[i]);          \
        space;                  \
    }                           \
    newline;
#define inputArray(arr, n, i)   \
    for (int i = 0; i < n; i++) \
    {                           \
        input(arr[i])           \
    }
#define printVector(v, i)                       \
    for (auto i = v.begin(); i != v.end(); i++) \
    {                                           \
        print(val(i));                          \
        space;                                  \
    }                                           \
    newline;
#define inputVector(v, n, i)    \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        input(x);               \
        v.push_back(x);         \
    }
#define val(x) (*(x))

#define print(x) cout << x;
#define input(x) cin >> x;
#define space cout << " ";
#define newline cout << "\n";

const ll MOD = 1e9 + 7;

bool comparator(pii a, pii b)
{
    return (a.first < b.first);
}

// fill funtion can be used to fill anything with a value
// fill(arr, arr+n, {FILLING VALUE})
// fill(v.begin(),v.end(),{FILLING VALUE})
// vector<int> v({SIZE OF VECTOR}, {FILLING VALUE})
// vector<int> v({SIZE OF VECTOR})

int main()
{
    FASTIO;
    tests(t)
    {
        int n;
        input(n);
        string s;
        input(s);
        if (s[0] == s[1])
        {
            print(s[0]);
            print(s[0]);
            newline;
        }
        else
        {
            string res = "";
            res += s[0];
            loop(i, 1, n - 1)
            {
                if (s[i] <= s[i - 1])
                {
                    res += s[i];
                }
                else
                {
                    break;
                }
            }
            print(res);
            reverse(res.begin(), res.end());
            print(res);
            newline;
        }
    }
    return 0;
}