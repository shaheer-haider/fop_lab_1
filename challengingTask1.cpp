#include<iostream>

using namespace std;

int main() {

    int timeTaken;
    int long sallary;

    cout<<"CALCULATE INCREMENT OF WORKER\n";

    cout<<"ENTER THE TIME TAKEN BY WORKER\n";
    cin>>timeTaken;
    cout<<"ENTER THE SALLARY OF WORKER\n";
    cin>>sallary;

    if(timeTaken > 4)
        cout<<"VERY LOW EFFICIENCY!!!\n YOU'RE NOT ELIGIBLE TO DO THIS WORK, SORRY.\n";
    else if(timeTaken <= 4 && timeTaken > 3 )
        cout<<"IMPROVE YOU SPEED\n YOUR INCREMENT FOR NEXT MONTH IS 0%\n YOUR SALLARY OF NEXT MONTH IS "<<sallary<<endl;
    else
        cout<<"HIGH EFFICIENCY.\n YOUR INCREMENT FOR NEXT MONTH IS 5%\n YOUR SALLARY OF NEXT MONTH IS "<< ( sallary * 0.05 ) + 
        sallary<<endl;

    return 1;
}