#include<iostream>

using namespace std;

int main () {
    string username, password;

    cout<<"LOGIN\n";
    cout<<"ENTER YOUR USERNAME\n";
    cin>>username;
    cout<<"EMTER YOUR PASSWORD\n";
    cin>>password;

    if(username == "a"){
        if(password == "true")
            cout<<"LOGIN SUCCESSFULL"<<endl;
        else
            cout<<"PASSWORD IS INCORRECT"<<endl;
    }
    else
        cout<<"CAN'T FIND THE USERNAME"<<endl;
    return 1;
}
