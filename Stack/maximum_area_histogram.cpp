// stock span problem is a variation of nearest greater to left problem

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7] = {6, 2, 5, 4, 5, 1, 6};
    int n = 7;
    stack<pair<int, int>> s1, s2;
    vector<int> left, width, area, right;
    int pseudo_index_left = -1;
    int pseudo_index_right = n;

    for (int i = 0; i < n; i++)
    { 
        if (s1.size() == 0)
        {
            left.push_back(pseudo_index_left);
        }
        else if (s1.size() > 0 && s1.top().first < arr[i])
        {
            left.push_back(s1.top().second);
        }
        else if (s1.size() > 0 && s1.top().first >= arr[i])
        {
            while (s1.size() > 0 && s1.top().first >= arr[i])
            {
                s1.pop();
            }
            if (s1.size() == 0)
            {
                left.push_back(pseudo_index_left);
            }
            else
            {
                left.push_back(s1.top().second);
            }
        }
        s1.push({arr[i], i});
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (s2.size() == 0)
        {
            right.push_back(pseudo_index_right);
        }
        else if (s2.size() > 0 && s2.top().first < arr[i])
        {
            right.push_back(s2.top().second);
        }
        else if (s2.size() > 0 && s2.top().first >= arr[i])
        {
            while (s2.size() > 0 && s2.top().first >= arr[i])
            {
                s2.pop();
            }
            if (s2.size() == 0)
            {
                right.push_back(pseudo_index_right);
            }
            else
            {
                right.push_back(s2.top().second);
            }
        }
        s2.push({arr[i], i});
    }
    reverse(right.begin(), right.end());
    
    for (int i = 0; i < n; i++)
    {
        width[i] = (right[i] - left[i] - 1); // taking max after finding area
    }
    for (int i = 0; i < n; i++)
    {
        area[i] = (width[i] * arr[i]); // taking max after finding area
    }

    // cout << "Max Element = " << *max_element(area.begin(), area.end());
    return 0;
}