// A. Sieve of Erato67henes
// time limit per test1 second
// memory limit per test256 megabytes
// You are given n
//  positive integers a1,a2,…,an
// .

// Please determine if it is possible to select any number of elements in a
// , so that their product is 67
// .

// Note that you may not select zero elements, as the product of zero elements is not defined in this problem.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤104
// ). The description of the test cases follows.

// The first line of each test case contains a single integer n
//  (1≤n≤5
// ).

// The second line of each test case contains n
//  positive integers a1,a2,…,an
//  (1≤ai≤67
// ).

// Output
// If it is possible to select elements so that their product is 67
// , output "YES" on one line. Otherwise, output "NO" on one line.

// You can output the answer in any case. For example, the strings "yEs", "yes", and "Yes" will also be recognized as positive responses.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        bool flag = false;
        bool check = false;
        for (int i = 0; i < m; i++)
        {
            if (a[i] == 67)
            {
                flag = true;
                // break;
            }
            if(a[i] == 1)
            {
                check = true;
            }
        }
        if (flag&&check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}