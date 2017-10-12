// This file intentionally left blank
#include <STSL/RJRobot.h>
#include <string>

using namespace std;

void moveRobot(RJRobot &robot, string command) {
    int motorA,motorB;
    if(command == "forward") {
        motorA = 200;
        motorB = 200;
    } else if (command == "backward") {
        motorA = -200;
        motorB = -200;
    } else if (command == "left") {
        motorA = 200;
        motorB = -200;
    } else if (command == "right"){
        motorA = -200;
        motorB = 200;
    } else if (command == "stop") {
        motorA = 0;
        motorA = 0;
    }
        robot.SetMotor(MotorPort::A, motorA);
        robot.SetMotor(MotorPort::B, motorB);

        robot.Wait(1000ms);

        robot.StopMotors();
    }
}