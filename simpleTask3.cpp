#include<iostream>

using namespace std;

int main(){

    int y, x;
    cout<<" WHAT'S THE VALUE OF Y? \n ";
    cin>>y;

    x = (y < 10) ? 10 : 50;

    cout<<" VALUE OF X IS "<<x<<endl;
    
    return 1;
}