#include<iostream>

using namespace std;

int main() {

    int age;
    char gender, martialStatus;

    cout<<"THE DEPARTMENT OF DEFENSE | ELIGIBLITY TEST\n";

    cout<<"ENTER YOUR GENDER ('X' for male and 'Y' for female)"<<endl;
    cin>>gender;
    
    cout<<"ENTER YOUR MARTIAL STATUS ('M' for married and 'S' for single)"<<endl;
    cin>>martialStatus;

    cout<<"ENTER YOUR AGE"<<endl;
    cin>>age;

    if(gender == 'x' || 'X' && martialStatus == 'S' || 's' && age < 27 && age > 17)
        cout<<"\nCONGRATULATIONS!!! YOU'RE ELIGIBLE FOR THIS JOB."<<endl;

    return 1;
}
