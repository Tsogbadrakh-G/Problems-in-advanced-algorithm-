// Online C++ compiler to run C++ program online

#include <bits/stdc++.h>
using namespace std;
int identifier(vector<int> &a)
{
    int n = a.size();
    if (n % 2 == 0)
    {
        return 0;
    }
    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        if (mid == i)
            continue;
        if (a[mid] >= a[i])
        {

            return 0;
        }
    }

    return 1;
}
int main()
{
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    cout << "result" << identifier(a);

    return 0;
}
