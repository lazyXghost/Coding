#include <bits/stdc++.h>
using namespace std;

// typedef is used to give datatype a newname
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
#define v(a) vector<a>
#define vv(a) vector<vector<a>>
#define um(a, b) unordered_map<a, b>
#define us(a) unordered_set<a>

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

void findAnswer(int n, int k)
{
    if (k <= (n + 1) / 2)
    {

        loop(i, 0, n - 1)
        {
            loop(j, 0, n - 1)
            {
                if (i%2==0 && j==i && k>0)
                {
                    print("R");
                    k--;
                }
                else
                {
                    print(".");
                }
            }
            newline;
        }
    }
    else
    {
        print("-1");
        newline;
    }
}

int main()
{
    FASTIO;
    tests(t)
    {
        int n, k;
        input(n);
        input(k);
        findAnswer(n, k);
    }
    return 0;
}