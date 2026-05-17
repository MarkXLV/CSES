#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repr(i, a, b) for (int i = a; i >= b; i--)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define ll long long
#define vvi vector<vector<int>>
#define ok() cout << "1" << endl
#define dump() cout << "-1" << endl
#define sortv(a) sort(a.begin(), a.end())
const int N = 1e5 + 2, inf = 1e9 + 7;
 
int32_t main()
{
    ll n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        cout << n << " ";
    }
 
    return 0;
