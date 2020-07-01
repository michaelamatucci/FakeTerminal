
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace this_thread;
using namespace chrono_literals;

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
    string name;

    sleep_for(500ms);
    cout << "256kb RAM OK\n\n";
    sleep_for(1s);
    cout << "80mb Drive Detected\n\n";
    sleep_for(1s);
    cout << "Enter the name of the drive to install on: ";
    cin >> name;
    cout << "\nStarting FutureOS Installation";
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
    cout << "\n\nC:\\>_";
}

