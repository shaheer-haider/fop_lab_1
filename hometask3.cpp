#include<iostream>

using namespace std;

int main () {

    int short  totalSubjects = 10, 
               numOf_Failed_Subjects, classOfStudent;
    int graceMarks;
    cout<<"CALCULATE GRACE MARKS OF STUDENT\n\n";
    cout<<"Number of failed subjects ?\n";
    cin>>numOf_Failed_Subjects;
    cout<<"Class of student ?\n";
    cin>>classOfStudent;

    graceMarks = 5 * (totalSubjects - numOf_Failed_Subjects);

    switch (classOfStudent)
    {
    case 1:
        if(numOf_Failed_Subjects > 3)
            graceMarks = 0;
        break;

    case 2:
        if(numOf_Failed_Subjects > 2)
            graceMarks = 0;
        break;

    case 3:
        if(numOf_Failed_Subjects != 1)
            graceMarks = 0;
        break;

    default:
        cout<<"Only avaiable for class 1 - 3";
        graceMarks = 0;
        break;
    }

    cout<<" GRACE MARKS OF CLASS "<<classOfStudent<<
            " STUDENT IS "<<graceMarks<<endl;
}
