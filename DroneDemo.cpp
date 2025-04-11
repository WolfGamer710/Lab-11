#include <iostream>
using namespace std;

#include "Drones.h"

int main() {
    Drone myDrone;
    Coordinate pt(50, 30, 5);

    pt.display();

    myDrone.forward = 100;
    myDrone.right = 100;
    pt.display();
}