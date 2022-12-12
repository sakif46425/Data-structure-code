#include<iostream>
using namespace std;

int main()
{

    int rad1;
    float volsp;
    cout<< "Calculate the volume of a sphere : "<<endl;
    cout<< "---------------------------------------"<<endl;
    cout<< "Input the redius of a sphere : "<<endl;
    cin>>rad1;
    volsp=(4*3.14*rad1*rad1*rad1)/3;
    cout<< "The volume of a sphere is : "<<volsp<< endl;
    cout<<endl;
    return 0;

}
