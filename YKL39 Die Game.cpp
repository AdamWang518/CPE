#include <iostream>
#include <string>
#include <vector>
using namespace std;
void rotate(string instruction, vector<int> &dice)
{ // 0up,1north,2west,3east,4south,5down
    vector<int> copy = dice;
    if (instruction == "north")
    {
        // 0up,1north,2west,3east,4south,5down
        dice[1] = copy[0];
        dice[0] = copy[4];
        dice[4] = copy[5];
        dice[5] = copy[1];
        // up->north
        // south->up
        // down->south
        // north->down
    }
    else if (instruction == "west")
    {
        // 0up,1north,2west,3east,4south,5down
        dice[2] = copy[0];
        dice[5] = copy[2];
        dice[0] = copy[3];
        dice[3] = copy[5];
        // up->west
        // west->down
        // east->up
        // down->east
    }
    else if (instruction == "south")
    {
        // 0up,1north,2west,3east,4south,5down
        dice[4] = copy[0];
        dice[5] = copy[4];
        dice[1] = copy[5];
        dice[0] = copy[1];
        // up->south
        // south->down
        // down->north
        // north->up
    }
    else if (instruction == "east")
    {
        // 0up,1north,2west,3east,4south,5down
        dice[3] = copy[0];
        dice[0] = copy[2];
        dice[5] = copy[3];
        dice[2] = copy[5];
        // up->east
        // west->up
        // east->down
        // down->west
    }
}
int main()
{
    string instruction;
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        vector<int> dice{1, 2, 3, 4, 5, 6};
        // 0up,1north,2west,3east,4south,5down
        for (int i = 0; i < n; i++)
        {
            cin >> instruction;
            rotate(instruction, dice);
        }
        cout << dice[0] << endl;
    }
    return 0;
}