#include <iostream>
#include <vector>
using namespace std;
void oddPrint(vector<vector<int>> &v)
{
    int m = v.size();
    int rows = v[0].size();
    int columns = v.size();
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if ((i + j == m - 1) || (i == j))
                cout << v[i][j];
            else
                cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    oddPrint(matrix);
}
