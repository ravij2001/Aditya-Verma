#include <bits/stdc++.h>
using namespace std;

int maximum_area_histogram(vector<int>& arr){
     int n= arr.size();
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
    int m = *max_element(area.begin(), area.end());
    return m;
}

  int maximalRectangle(vector<vector<char>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int result = 0;
        vector<int> histogram(m, 0);   
        for(int i=0; i < n; i++){
            for(int j=0 ; j < m; j++){
                if(matrix[i][j] == '1')
                    histogram[j] += 1;
                else
                    histogram[j] = 0;
            }
            result = max(result, maximum_area_histogram(histogram));
            cout<<result<<" ";
        }
        return result;
  }


int main() {
    vector<vector<char>> mat = 
        {{'0','1','1','0'},
         {'1','1','1','1'},
         {'1','1','1','1'},
         {'1','1','0','0'}};
         
    cout << maximalRectangle(mat) << endl;
    return 0;
}  