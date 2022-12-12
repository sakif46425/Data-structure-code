#include<iostream>
#define PI 3.14159
using namespace std;

int main()
{
    float radius, area, circum;
    cout<< "Find the area and circumference of any circle : "<<endl;
    cout<< "================================================"<<endl;
    cout<< "Input the radius(1/2 of diameter) of a circle : "<<endl;
    cin>>radius;

    circum = 2*PI*radius;
    area = PI*(radius*radius);
    cout<< "The circumference of the circle is : "<< circum << endl;

    cout<< endl;

    return 0;
}
