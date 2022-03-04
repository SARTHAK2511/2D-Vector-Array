#include <iostream>

#include <vector>

#include <string>

using namespace std;

int main()
{ // creating a vector which will store vectors
    vector<vector<int>> Arr2D =
     {
        {3, 4, 5},
        {5, 6, 9, 5, 1},
        {1,2,3,4,5,6}
    };
    for (int i = 0; i < Arr2D.size(); i++)
    {
        for (int number : Arr2D[i])
        {
            cout << number << " ";
        }
        cout << endl;
    }

    return 0;
}