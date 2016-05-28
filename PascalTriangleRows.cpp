// PascalTriangleRows.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"


using namespace std;

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

// function to calculate the Pascal's triangle value of an element
// 0-based row and column
int nCk(int row, int column)
{
    int numerator = factorial(row);
    int denominator = factorial(column) * factorial(row - column);
    return numerator / denominator;
}

vector<vector<int> > buildPascalsTriangle(int A) 
{
    vector<vector<int>> result(A);
    for (size_t i = 0; i < A; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            result[i].push_back(nCk(i, j));
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