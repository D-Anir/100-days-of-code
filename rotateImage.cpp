#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
            for(int j=i+1; j<matrix[i].size(); j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size()/2; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][matrix.size() - j - 1];
                matrix[i][matrix.size() - j - 1] = temp;
            }
        }
    }
};

// 1 2 3
// 4 5 6
// 7 8 9

// 1 4 7
// 2 5 8
// 3 6 9

// 7 4 1
// 8 5 2
// 9 6 3