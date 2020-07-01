
#include <iostream>
#include <string>
#include <locale>
#include <chrono>
#include <thread>
using namespace std;
using namespace this_thread;
using namespace chrono_literals;

/*
This program literally only simulates a fake installation
of a fake OS

Just for fun :)

*/

/*
Makes the dot loading indicators
int amount -> the amount of dots to display (how long)
int time -> selects the speed of the dots
*/
void dotLoading(int amount, int time)
{
    if (time == 1)
    {
        for (int i = 0; i <= amount; i++)
        {
            sleep_for(500ms);
            cout << ".";
        }
        return;
    }
    else if (time == 2)
    {
        for (int i = 0; i <= amount; i++)
        {
            sleep_for(500ms);
            cout << "..";
        }
        return;
    }
    else if (time == 3)
    {
        for (int i = 0; i <= amount; i++)
        {
            sleep_for(5ms);
            cout << ".";
        }
        return;
    }
    

    return;
}

int main(int argc, char *argv[])
{
    string name; //holder for drive name

    //outputs the fake terminal

    sleep_for(500ms);
    cout << "256kb RAM OK\n\n";
    sleep_for(1s);
    cout << "80mb Drive Detected\n\n";
    sleep_for(1s);
    cout << "Insert boot disk and press ENTER\n";
    cin.ignore();
    sleep_for(1s);
    cout << "FUTUREOS SETUP\n";
    sleep_for(250ms);
    cout << "Enter the name of the drive to install on: ";
    cin >> name;
    cout << "\nStarting FutureOS Installation on drive " + name + ":";
    dotLoading(3, 1);
    cout << "\n\nInstalling Kernal v1.5.34";
    dotLoading(5, 1);
    cout << "OK\n";
    cout << "Kernal: OK\n";
    cout << "Drivers: OK\n";
    cout << "Memory: OK\n";
    sleep_for(1s);
    cout << "\nInitializing Network";
    dotLoading(3, 2);
    cout << "Network Identified\n";
    sleep_for(500ms);
    cout << "Connected to network \"FutureLAN\"";
    cout << "\nIPv4 Address: 192.168.0.84\nSubnet Mask: 255.255.255.0";
    sleep_for(1s);
    cout << "\n\nInstalling Programs";
    dotLoading(3, 2);
    cout << "OK\n";
    cout << "\nFinishing setup";
    dotLoading(10, 2);
    cout << "Setup Complete\n\n";
    sleep_for(500ms);
    cout << "Welcome to FUTUREOS\n";
    cout << "\n\n" + name + ":\\>_";
}

