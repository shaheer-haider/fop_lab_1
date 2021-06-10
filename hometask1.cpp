#include<iostream>

using namespace std;

int main () {

    int yourRoll = 10, friendRoll = 100, greaterRoll;

    cout<<"FIND THE GREATER ROLL NUMBER\n";
    greaterRoll = (yourRoll > friendRoll) ? yourRoll : friendRoll;
    cout<<"GREATER ROLL NUMBER IS "<<greaterRoll<<endl;
}
