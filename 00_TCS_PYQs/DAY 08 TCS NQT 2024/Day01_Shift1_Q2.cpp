/*
Question 2:

Given a grid of size m * n, let us assume you are starting at (1, 1) and your goal is to reach (m, n). At any instance, if you are on (x, y), you can either go to (x, y + 1) or (x + 1, y).
Now consider if some obstacles are added to the grids. How many unique paths would there be?
An obstacle and space are marked as 1 and 0 respectively in the grid.

Input: 
[[0, 0, 0],
[0, 1, 0],
[0, 0, 0]]

Output:
2
*/ 
#include <iostream>
#include <vector>
using namespace std;

int count_ways(int i, int j, vector<vector<int>>grid, int n, int m){    
    if(i == m || j == n){
        return 0;
    }
    if(grid[i][j] == 1){
        return 0;
    }
    if(i == m-1 && j == n-1){
        cout << "1" << " ";
        return 1;
    }
    return count_ways(i+1, j, grid, m, n) + count_ways(i, j+1, grid, m, n);
}

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>>grid;
    for(int i = 0; i < m; i++){
        vector<int>temp;
        for(int j = 0; j < n; j++){
            int value;
            cin >> value;
            temp.push_back(value);
        }
        grid.push_back(temp);
    }

    int i = 0, j = 0;
    cout << count_ways(i, j, grid, m, n);
    return 0;
}