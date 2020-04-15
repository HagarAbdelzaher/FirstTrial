// Name: Samaa Muhammad Mahmoud ID:20180124
// Name: Hagar Muhammad Abdelzaher ID:20180324
#include <iostream>
float pizzaFunction (float S, float M, float L);
using namespace std;
float total=0.0;
int main()
{
    int choice;
   string anotherItem ="yes";
while (anotherItem== "yes" || anotherItem== "Yes"){ // check if the customer need more than one item
cout << "Welcome to our Pizza restaurant!!!\n Please select one of items:\n 1- SUPER SUPREME - S=50 /M=75.5/ L=100\n 2- CHICKEN SUPREME - S=45/ M=73.88/ L=97.99\n 3- MARGHERITA - S=35/ M=70/ L=95\n 4- CHEESE LOVERS - S=60.96/ M=87.75/ L=113.16\n 5- SEA FOOD LOVERS - S= 64.47/ M=94.30/ L=123.25\n";
    cin>>choice;
    switch (choice) // determine which pizza the user needs
{
case 1:
    cout<<"You selected SUPER SUPREME.\n";
     pizzaFunction(50.0,75.50,100.0);
    break;
case 2:
    cout<<"You selected CHICKEN SUPREME.\n";
     pizzaFunction(45.0,73.88,97.99);
    break;
case 3:
      cout<<"You selected MARGHERITA.\n";
      pizzaFunction(35.0,70.0,95.0);
      break;
case 4:
     cout<<"You selected CHEESE LOVERS.\n";
      pizzaFunction(60.96, 87.75,113.16);
     break;
case 5:
     cout<<"You selected SEA FOOD LOVERS.\n";
      pizzaFunction(64.47,94.30,123.25);
      break;
}
cout<<"Do you want another item?\n";
cin>>anotherItem;
}
cout<<"Thank you for using our application your bill = "<< total << " pounds.\n"; // displays the bill to the user
}
float pizzaFunction(float S, float M , float L){
    int q;
string extratopp,topp;
    string pizzasize;
cout<<"Enter your quantity.\n";
cin>>q;
cout<<"Enter size: \n";
cin>>pizzasize;
(pizzasize=="s" || pizzasize=="S")? total+=S*q : (pizzasize=="m" || pizzasize == "M") ? total+=M*q : total +=L*q;
cout<<"Do you want extra topping? \n";
cin>>extratopp;
if (extratopp=="yes" || extratopp== "Yes")
{
    cout<< "Please select one ( mushroom=10, onion =5, sausage=10) \n";
    cin>>topp;
    (topp == "mushroom")? total+=q*10.0 : (topp=="onion")? total+=q*5.0 : total+=10.0;
}
return total;
}
