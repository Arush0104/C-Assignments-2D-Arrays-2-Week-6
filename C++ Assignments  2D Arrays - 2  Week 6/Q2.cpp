#include <iostream>
#include <vector>
using namespace std;
void RevTranspose(vector<vector<int>> &v)
{
    int m=3;
    int rows = v[0].size();
    int columns = v.size();
    vector<vector<int>> tMatrix(rows, vector<int>(columns));
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            tMatrix[j][i] = v[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < m / 2; i++)
        {
            swap(tMatrix[i][j], tMatrix[m - i - 1][j]);
        }
    }
     for (int i = 0; i < columns; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                cout << tMatrix[i][j] << " ";
            }
            cout << endl;
        }
}
    int main()
    {
        vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        RevTranspose(matrix);
    }
