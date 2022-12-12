#include<iostream>
using namespace std;

int main()
{
    int rad1,hgt;
    float volcy;
    cout<< "Calculate the volume of a cylinder : "<<endl;
    cout<< "--------------------------------------------"<<endl;
    cout<< "Input the radius of the cylinder : "<<endl;
    cin>>rad1;
    cout<< "Input the height of the cylinder of the cylinder : "<<endl;
    cin>>hgt;
    volcy=(3.14*rad1*hgt);
    cout<< "The volume of a cylinder is : "<< volcy << endl;
    cout<< endl;
    return 0;

}
