
#include <iostream>
using namespace std;


float sumfun(float x,float y){
    return x+y;
}
float extfun(float x,float y){
    return x-y;
}
float multfun(float x,float y){
    return x*y;
}
float divfun(float x,float y){
    return x/y;
}



int main()
{
    float firstnum, secnum, result;
    int choice;
    string yesorno[5];

    cout<<"Welcome to Calculator"<<endl;

    do{
        cout<<endl;
        cout<<"Possible Mathematical Operations:"<<endl<<"1) Addition"<<endl<<"2) Extraction"<<endl<<"3) Multiplication"<<endl<<"4) Division"<<endl;
        cout<<endl;
        cout<<"Please select the mathematical operation as your choice == ";
        cin>>choice;

        _sleep(1000);
        system("cls");

        switch(choice){

    case 1:
        cout<<"Enter the First Number = ";
        cin>>firstnum;
        cout<<endl;
        cout<<"Enter the Second Number = ";
        cin>>secnum;
        cout<<endl;

        result=sumfun(firstnum,secnum);

        break;
    case 2:
        cout<<"Enter the First Number = ";
        cin>>firstnum;
        cout<<endl;
        cout<<"Enter the Second Number = ";
        cin>>secnum;
        cout<<endl;

        result=extfun(firstnum,secnum);

        break;
    case 3:
        cout<<"Enter the First Number = ";
        cin>>firstnum;
        cout<<endl;
        cout<<"Enter the Second Number = ";
        cin>>secnum;
        cout<<endl;

        result=multfun(firstnum,secnum);

        break;
    case 4:
        cout<<"Enter the First Number = ";
        cin>>firstnum;
        cout<<endl;
        cout<<"Enter the Second Number = ";
        cin>>secnum;
        cout<<endl;

        result=divfun(firstnum,secnum);

        break;
    default:
        cout<<"Invalid Choice"<<endl;
        result=0;
        cout<<endl;
    }

    cout<<"The Result == "<<result<<endl;
    cout<<endl;

    _sleep(1000);

    cout<<"Would You Like To Make Another Operatoin [ yes / no ] : ";
    cin>>*yesorno;
    cout<<endl;
    system("cls");

    }
    while(*yesorno== "yes");


    cout<<"Thanks for using our Calculator"<<endl;
    _sleep(2000);


    return 0;
}
