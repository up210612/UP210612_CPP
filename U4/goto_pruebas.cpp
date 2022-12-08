
#include <iostream>
#include "sara.h"
#include <chrono>
#include <thread>
#include <cstring>

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;

int main()
{
    string esqueleto1 ("|--------|");
    string esqueleto2 ("          ");
     int i=5;
    do
    {

        gotoxy(10, 10+i);
        cout << esqueleto1<<endl;
        sleep_for(100ms);
        gotoxy(10, 10+i);
        cout << esqueleto2<<endl;
        
        i++;
    }while(i!=20);

    return 0;
}
