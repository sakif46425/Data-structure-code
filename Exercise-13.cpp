#include<iostream>
using namespace std;

int main()
{
    cout<< "Swap two numbers : "<<endl;
    cout<< "-------------------"<<endl;
    int num1, num2, temp;
    cout<< "Input 1st number : "<<endl;
    cin>>num1;
    cout<< "Input 2nd number : "<<endl;
    cin>>num2;

    temp=num2;

    num2=num1;

    num1=temp;

    cout<< "After Swapping the 1st number is : "<< num1 <<endl;

    cout<< "After Swapping the 2nd number is : "<< num2 <<endl;

    return 0;

}
