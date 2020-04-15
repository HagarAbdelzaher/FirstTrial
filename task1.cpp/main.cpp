// Name: Hagar Muhammad Abdelzaher  ID:20180324
// Name: Samaa Muhammad Mahmoud     ID:20180124

#include <iostream>
using namespace std;
int main()
{ float value;
  int choice;
     cout<<"Welcome to unit converter!!"<<endl;
     cout<<"Choose one of options:"<<endl;
     cout<<"1- temperature in celsius"<<endl;
     cout<<"2-Mass in kg"<< endl;
     cout<<"3-length in meter"<<endl;
     cin>>choice;
     if(choice==1){
            cout<<"enter value of temperature"<<endl;
            cin>>value;
            cout<<" temperature in Fahrenheit= "<< (value*9/5)+32<< endl;
            cout<<"temperature in Kelvin= "<< value+273.15<<endl;
     }
    else if(choice==2){
        cout<<"enter value of mass:"<<endl;
        cin>>value;
        cout<<" Mass in gram = "<< value*1000<<endl;
        cout<<" Mass in pound ="<< value*2.205<<endl;
        cout<<" Value in ton =" << value * 0.001<<endl;
    }
    else{
        cout<<"enter value of length :"<<endl;
        cin>>value;
        cout<< "Length in cm = "<< value*100<<endl;
        cout<<"Length in Km = "<< value*0.001<<endl;
        cout<<"Length in foot = " << value*3.281<<endl;
        cout<<" Length in yard = " << value*1.094 << endl;
    }
}
