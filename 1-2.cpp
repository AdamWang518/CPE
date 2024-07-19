#include <iostream>
#include <set>
#include <string>
using namespace std;
// 0=N,1=E,2=S,3=W
int setRobotDir(char dir)
{
    if (dir == 'N')
    {
        return 0;
    }
    else if (dir == 'E')
    {
        return 1;
    }
    else if (dir == 'S')
    {
        return 2;
    }
    else if (dir == 'W')
    {
        return 3;
    }
}
char getRobotDir(int dir)
{
    if (dir == 0)
    {
        return 'N';
    }
    else if (dir == 1)
    {
        return 'E';
    }
    else if (dir == 2)
    {
        return 'S';
    }
    else if (dir == 3)
    {
        return 'W';
    }
}
int main()
{
    int x, y;
    cin >> x >> y;
    set<pair<int, int>> dropSet;
    int robotPosX, robotPosY, robotDirInt;
    char robotDirChar;
    string robotMove;
    while (cin >> robotPosX >> robotPosY >> robotDirChar)
    {
        robotDirInt = setRobotDir(robotDirChar);
        cin >> robotMove;
        int nextPosX, nextPosY;
        for (char c : robotMove)
        {
            if (c == 'R')
            {
                robotDirInt = (robotDirInt + 1) % 4;
            }
            else if (c == 'L')
            {
                robotDirInt = (robotDirInt + 3) % 4;
            }
            else
            {
                if (robotDirInt == 0)
                {
                    nextPosX = robotPosX;
                    nextPosY = robotPosY + 1;
                }
                else if (robotDirInt == 1)
                {
                    nextPosX = robotPosX + 1;
                    nextPosY = robotPosY;
                }
                else if (robotDirInt == 2)
                {
                    nextPosX = robotPosX;
                    nextPosY = robotPosY - 1;
                }
                else if (robotDirInt == 3)
                {
                    nextPosX = robotPosX - 1;
                    nextPosY = robotPosY;
                }
                if (nextPosX < 0 || nextPosY < 0 || nextPosX > x | nextPosY > y)
                {
                    if (dropSet.find({nextPosX, nextPosY}) == dropSet.end())
                    {
                        // 如果当前点没有被记录过掉落
                        dropSet.insert({nextPosX, nextPosY});
                        cout << robotPosX << " " << robotPosY << " " << getRobotDir(robotDirInt) << " " << "LOST" << endl;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    robotPosX = nextPosX;
                    robotPosY = nextPosY;
                }
            }
        }
        cout << robotPosX << " " << robotPosY << " " << getRobotDir(robotDirInt) << endl;
    }
    return 0;
}