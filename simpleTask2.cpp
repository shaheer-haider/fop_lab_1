#include<iostream>

using namespace std;

int main(){

    int age;
    cout<<"\n LET'S FIND YOUR AGE CATEGORY";
    cout<<"\n\n ENTER YOUR AGE \n";
    cin>>age;
    
    if( age == 100 )
        cout<<"\n YOU'RE OLD"<<endl;
    else if( age < 100)
        cout<<"\n YOU'RE YOUNG"<<endl;
    else
        cout<<"\n YOU'RE TOO OLD"<<endl;

    return 1;
}