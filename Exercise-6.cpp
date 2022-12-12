#include<iostream>
using namespace std;

int main()
{
    cout<< "Check whether the primitive values crossing the limits or not : "<<endl;
    cout<< "----------------------------------------------------------------"<<endl;

    char gender = 'F';
    bool is_Employed = true;
    unsigned short numofsons = 2;
    short yearofAppt = 2009;
    unsigned int yearlyPackage = 1500000;
    double height = 79.48;
    float gpa = 4.69f;
    long totalDrawn = 12047235L;
    long long balance = 995324987LL;

    cout<< "The Gender is : "<< gender <<endl;
    cout<< "Is she Married? : "<< is_Employed <<endl;
    cout<< "Number of sons she has : "<< numofsons <<endl;
    cout<< "Salary for a year : "<< yearofAppt << endl;
    cout<< "Height is : "<< yearlyPackage << endl;
    cout<< "GPA is " << gpa << endl;
    cout<< "Salary drawn upto : "<< totalDrawn  << endl;
    cout<< "Balance till : "<< balance << endl;

    return 0;

}
