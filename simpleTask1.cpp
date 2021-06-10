#include<iostream>

using namespace std;

// SIMPLE TASK 1
int main(){

    int number;
    cout<<"\nPROGRAM TO IDENTIFY EVEN OR ODD";
    cout<<"\n\nENTER THE NUMBER OF YOUR CHOICE\n";
    cin>>number;

    if(number%2 == 0)
        cout<<"\nGIVEN NUMBER IS EVEN\n";
    else
        cout<<"\nGIVEN NUMBER IS ODD\n";

    return 1;
}