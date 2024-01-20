#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    vector<int>a1;
    vector<int>a2;
    int n, i, s = 0;
    cin >> a;
    for (i = 0; i < a.size(); i++)
    {
        s = a[i] - 97;
        a1.push_back(s);
    }
    int s1 = 0, s2 = 0, s3 = 0, sum = 0;
    s3 = abs(26 - a1[0]);
    if (s3 > 13) { s3 = abs(26 - s3); }
    for (i = 0; i < a1.size() - 1; i++)
    {
        s1 = abs(a1[i] - a1[i + 1]);
        s2 = abs(26 - s1);
        if (s2 > 13)
        {
            s2 = abs(26 - s2);
        }
        sum += s2;
    }
    cout << sum + s3;
    return 0;
}