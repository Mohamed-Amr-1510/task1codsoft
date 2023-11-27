#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int  x=rand()%100,num;
    cout<<"I choose a random number between 0 and 100\n";
    cout<<"Try to guess it.\n";

    for(int i=0;;i++){
        cin>>num;
        if(num>x)
            cout<<"It is higher than the random number.Try another number"<<endl;
        if(num<x)
            cout<<"It is lower than the random number.Try another number"<<endl;
            if(x==num){
        cout<<"Congratulations!!!You catch the random number.";
        break;
        }
    }



    return 0;
}
