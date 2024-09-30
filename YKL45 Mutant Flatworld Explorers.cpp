#include <iostream>
#include <set>
#include <tuple>
using namespace std;
int setDir(char dir)
{
    if (dir == 'N')
    {
        return 0;
    }
    else if (dir == 'W')
    {
        return 1;
    }
    else if (dir == 'S')
    {
        return 2;
    }
    else if (dir == 'E')
    {
        return 3;
    }
}
char getDir(int dir)
{
    if (dir == 0)
    {
        return 'N';
    }
    else if (dir == 1)
    {
        return 'W';
    }
    else if (dir == 2)
    {
        return 'S';
    }
    else if (dir == 3)
    {
        return 'E';
    }
}
pair<int, int> moveFoward(int x, int y, int dir)
{
    if (dir == 0)
    {
        y++;
    }
    else if (dir == 1)
    {
        x--;
    }
    else if (dir == 2)
    {
        y--;
    }
    else if (dir == 3)
    {
        x++;
    }
    return {x, y};
}
int main()
{
    int x_c, y_c;
    cin >> x_c >> y_c;
    int x, y, dir;
    char char_dir;
    set<pair<int, int>> s;
    while (cin >> x >> y >> char_dir)
    {
        bool notDrop = true;
        cin.ignore();
        dir = setDir(char_dir);
        string move;
        getline(cin, move);
        for (char c : move)
        {
            int nextX = x, nextY = y;
            if (c == 'F')
            {
                tie(nextX, nextY) = moveFoward(x, y, dir);
            }
            else if (c == 'R')
            {
                dir = (dir + 3) % 4;
            }
            else if (c == 'L')
            {
                dir = (dir + 1) % 4;
            }
            if (nextX > x_c || nextY > y_c || nextX < 0 || nextY < 0)
            {
                if (s.find({nextX, nextY}) == s.end())
                {
                    cout << x << " " << y << " " << getDir(dir) << " " << "LOST" << endl;
                    s.insert({nextX, nextY});
                    notDrop = false;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                x = nextX;
                y = nextY;
            }
        }
        if (notDrop)
        {
            cout << x << " " << y << " " << getDir(dir) << endl;
        }
    }
    return 0;
}