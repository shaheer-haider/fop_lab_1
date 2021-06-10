#include<iostream>

using namespace std;

int main(){

    int num1, num2;
    
    cout<<" LET'S RELATE NUMBERS \n";

    cout<<" ENTER FIRST NUMBER \n ";
    cin>>num1;

    cout<<" ENTER SECOND NUMBER \n ";
    cin>>num2;

    if(num1 == num2)
        cout<<" BOTH NUMBERS ARE EQUAL"<<endl;
    else if(num1 > num2)
        cout<<" FIRST NUMBER IS GREATER THAN SECOND NUMBER"<<endl;
    else
        cout<<" SECOND NUMBER IS GREATER THAN FIRST NUMBER"<<endl;
        
    return 1;
}