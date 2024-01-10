#include <iostream>
#include <vector>
using namespace std;
void RevTranspose(vector<vector<int>> &v)
{

    int rows = v[0].size();
    int columns = v.size();
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = columns-1; j >= 0; j--)
            {
                cout << v[j][i];
            }
        }
        else
        {
            for (int j = 0; j < columns; j++)
            {
                cout << v[j][i];
            }
        }
    }
}
    int main()
    {
        vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        RevTranspose(matrix);
    }
