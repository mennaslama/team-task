// FCI – Programming 1 – 2018 - Assignment 2
// Program Name:computing pi
// Last Modification Date: 27/2/2018
// Author1 and ID and Group: Mai Mostafa Abd El-Rahman & 20170303 & G12
// Author2 and ID and Group: Menna Slama Abd El-Azieam & 20170299 & G11
// Teaching Assistant:Eng.Khdega
// Purpose:computing pi
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   while (true){
    int n;
    cout<<"\nenter number of terms: ";
    cin>>n;
    float pi,sumation;
    sumation=0;
    for (int i=0 ; i<n ;i++){
        sumation+=(pow(-1,i))/(2*i + 1);

    }
    pi=4*sumation;
    cout<<"pi= "<<pi;
}

}
