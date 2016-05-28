// PascalTriangleRows.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"


using namespace std;

vector<vector<int> > buildPascalsTriangle(int A) 
{
    vector<vector<int>> result(A);
    for (size_t i = 0; i < A; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            int n = 1;
            if ((i > 1) && (j > 0) && (j < i))
            {
                n = result[i - 1][j] + result[i - 1][j - 1];
            }

            result[i].push_back(n);
        }
    }
    return result;
}
int main()
{
    int x = 5;
    vector<vector<int>> triangle = buildPascalsTriangle(x);
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < triangle[i].size(); j++)
        {
            cout << " " << triangle[i][j];
        }
        cout << endl;
    }
    return 0;
}