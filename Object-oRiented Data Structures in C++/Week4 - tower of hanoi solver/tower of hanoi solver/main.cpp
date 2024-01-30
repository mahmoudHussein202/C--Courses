/*************** Tower of Hanoi Game*******************
 * ---------------------------------------------------
 *  this game have only two rules:
 *  [1] you can move one cube at a time
 *  [2] you can't place a bigger cube on a smaller cube
 *  now the cubes are in stack 1 , we need to move all of them to stack 3 with the order of hanoi
 *    which means an assending order starting form the top
*/

#include "iostream"
#include "game.hpp"
#include "polygons.hpp"
using namespace std;
int main()
{
    Tower_of_hanoi_game game_1;
    cout<<game_1<<endl;
    return 0;
}