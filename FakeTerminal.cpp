
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
    cout << "Starting FutureOS\n";
    sleep_for(1s);
    cout << "Installing Kernal v1.5.34";
    dotLoading(5, 1);
    cout << "OK\n";
    sleep_for(1s);
    cout << "Initializing Network";
    dotLoading(3, 2);
    cout << "Network Identified\n";
    sleep_for(1s);
    cout << "Checking Programs";
    dotLoading(3, 2);
    cout << "OK\n";
    sleep_for(500ms);
    cout << "Enter the name of this PC\n";
    cin >> name;
    cout << "Finishing setup";
    dotLoading(10, 2);
    cout << "Setup Complete\n\n";
    sleep_for(500ms);
    cout << "Welcome to FUTUREOS\n";
}

