#include<iostream>
using namespace std;

int main()
{
    int width,lngth,area, peri;
    cout<< "Find the Area and perimeter of a Rectangle : " <<endl;
    cout<< "---------------------------------------------" <<endl;
    cout<< "Input the length of the rectangle : "<<endl;
    cin>>lngth;
    cout<< "Input the width of the rectangle : "<<endl;
    cin>>width;
    area=(lngth*width);
    peri=2*(lngth+width);
    cout<< "The area of the rectangle is : "<< area <<endl;
    cout<< "The perimeter of the rectangle is : "<< peri <<endl;
    cout<< endl;
    return 0;

}
