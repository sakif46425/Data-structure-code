#include<iostream>
using namespace std;

int main()
{
    int num = 57;
    cout << "Display the operation of pre and post increment and decrement : " <<endl;
    cout << "----------------------------------------------------------------" <<endl;
    cout << "The number is : " << num << endl;
    num++;
    cout << "After post increment by 1 the number is : "<< num << endl;
    ++num;
    cout<< "After pre increment by 1 the number is : "<< num << endl;
    num = num + 1;
    cout<< "After increasing by 1 the number is : "<< num << endl;
    num--;
    cout<< "After post decrement by 1 the number is : "<< num << endl;
    --num;
    cout<< "After pre decrement by 1 the number is "<< num << endl;
    num = num -1;
    cout<< "After decreasing by 1 the number is : "<< num << endl;
    cout<< endl;

    return 0;




}
