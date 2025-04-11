/*
Part 1 - Define the Drone class
For this task, you will define the Drone class. Your Drone should have the following attributes:
1. Battery level (max is 100%, minimum is 0%)
2. A home position x, y and height (or z) coordinates
3. Current position coordinates to indicate where the drone is currently located (x, y and height)
*Note: Think about the way a user will interact with the drone - should any of these attributes be directly available to them? 
Go through each example and decide whether they should be public or private. 
For example, does it make sense for a user to be able to set your drone's battery to whatever level they choose?

Part 2 - Drone Functionality (Methods!)
For this task, you will define several functions for the user to interact with and control your drone. Your drone should have the following capabilities:
1. Check the battery level (so that the user knows how much juice is left!)
2. Check the current position of the drone
3. Move the drone in any one of the following directions at a time (you can implement this as one function or separate functions!):
    Forward (+y)
    Backward (-y)
    Right (+x)
    Left (-x)
    Up (increase height)
    Down (decrease height) <- your minimum height should be zero!
        Note: Moving the drone should affect the battery level somehow! (Example: move forward -> battery goes down by 2 percent
4. Land the drone - use a call to your Up/Down or moving functions to do this, don't copy your movement code here! Your aim is to bring your drone's height back down to zero.
At this point you should declare your Drone in main() and demonstrate a call to each of the methods outlined in this section.

Part 3 - Drone Constructor
For this task, we will write a simple constructor for our drone that will set the following:
    Set the battery to 100%
    Set the home coordinates to x=0, y=0, and z=0
    Set the current location coordinates to the same values as home (0, 0, 0)
Don't worry too much about the constructor for now! We will practice this a lot in the next lessons.

Part 4 (Challenge!) - Other functionality
For this section, you will add some new functions to your Drone! Start with the following additions/modifications to your existing methods:
    1. Monitor Battery - as your drone performs movements, keep track of the battery level. If the battery drops below 20%, display a warning to the user. This should run automatically every time an action is performed, not called manually like the "battery level check" function!
        Additionally, if the battery reaches some critically low level, modify your functions so that the actions cannot be performed, an error message is displayed, and the landDrone() function is called to land the drone safely!
    2. Add one more function and attribute of your choice to your drone, and demonstrate it in you main() program!

*/ 
class Coordinate {
    public:
        int x, y, z;

        Coordinate(int inX = 0, int inY = 0, int inZ = 0) {
            x = inX;
            y = inY;
            z = inZ;
        }

        void display() {
            cout << "Coordinate " <<"(" << x << ", " << y << ", " << z << ")" << endl;
        }
};

// class Height {
//     public:
//         int z;

//         Height(int inZ) {
//             z = inZ;
//         }
// };

class Drone {
    private:
        float battery;
    public:
        int forward, backward, left, right, up, down;

        bool checkBatteryLevel() {
            cout << "Drone has " << battery*100 << "% battery level remaining!" << endl;
            return (battery > 0.0);
        }

        Drone(int f = 0, int b = 0, int l = 0, int r = 0, int u = 0, int d = 0){
            forward = f;
            backward = b;
            left = l;
            right = r;
            up = u;
            down = d;

            if(0 > f >= 500 || 500 < b <= 0 || 500 <= l <= 0 || 0 > r <= 500 || 0 > u <= 500 || 0 <= d <= 500) {
                
            }

            battery = 1.0;
            checkBatteryLevel();
            
        }
};