#include <iostream>
#include <STSL/RJRobot.h>
#include "starter_helpers.h"
#include <string>
using namespace std;



int main() {
    RJRobot robot;
    moveRobot(robot,"forward");
    robot.Wait(500ms);
    moveRobot(robot,"backward");


    return 0;
}
