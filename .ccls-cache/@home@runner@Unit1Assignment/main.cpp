
#include <iostream>
#include <string> 
#include "input_validation.h"
using namespace std;

void menu()
{
    cout << "Enter 1 to calculate Velocity \n";
    cout << "Enter 2 to calculate Acceleration\n";
    cout << "Enter 3 to calculate Motion\n";
    cout << "Enter 4 to calculate Newton’s Second Law\n";
    cout << "Enter 5 to calculate Weight\n";
    cout << "Enter 6 to calculate Momentum\n";
    cout << "Enter 7 to exit\n";
}
void calculate(int enter)
{
    
    // Display the result
    switch (enter) {
    case 1: {
        int ds=0;
        int dt=0;
        string ds_unit;
        string dt_unit;
        cout << "Enter ds: ";
        cin >> ds;
        cout << "Enter unit: ";
        cin >> ds_unit;
        cout << "Enter dt: ";
        cin >> dt;
        cout << "Enter unit: ";
        cin >> dt_unit;
        cout << "Velocity is: " << (ds / dt) << " "<< ds_unit << "/" << dt_unit << "\n";
        break;
    }
    case 2: {
        int dv=0;
        int dt=0;
        string dv_unit,dt_unit;
        cout << "Enter dv: ";
        cin >> dv;
        cout << "Enter unit: ";
        cin >> dv_unit;
        cout << "Enter dt";
        cin >> dt;
        cout << "Enter unit: ";
        cin >> dt_unit;
        cout << "Acceleration is " << (dv / dt) << " "<< dv_unit << "/" << dt_unit<< "\n";
        break;
    }
    case 3: {
        int select;
        cout << "Select an option for motion \n1) solve for v \n2) solve for s \n3) solve for v^s \n4) solve for v\n";
        cin >> select;
        if(select==1){
          int v0;
          int at;
          cout << "Enter v0: ";
          cin >> v0;
          cout << "Enter at: ";
          cin >> at;
          cout << "Motion v is:  " << ( v0 + at) << "\n";
        }
        if(select==2){
          int s0,v0,t,a;
          cout << "Enter s0: ";
          cin >> s0;
          cout << "Enter v0: ";
          cin >> v0;
          cout << "Enter t: ";
          cin >> t;
          cout << "Enter a: ";
          cin >> a;
          cout << "Motion s is:  " << ((s0) + (v0*t) + (.5*a*(t*t))) << "\n";
        }
        if(select==3){
          int v0,a,s,s0;
          cout << "Enter v0: ";
          cin >> v0;
          cout << "Enter a: ";
          cin >> a;
          cout << "Enter s: ";
          cin >> s;
          cout << "Enter s0: ";
          cin >> s0;
          cout << "Motion v^2 is:  " << ((s0)+((2*a)*(s-s0))) << "\n";
        }
        if(select==4){
          int v,v0;
          cout << "Enter v: ";
          cin >> v;
          cout << "Enter v0: ";
          cin >> v0;
          cout << "Motion v is:  " << (.5*(v+v0)) << "\n";
        }
        break;
    }
    case 4: {
        int m,a;
        cout << "Enter m: ";
        cin >> m;
        cout << "Enter a: ";
        cin >> a;
        cout << "Newton’s Second Law F is:  " << (m*a) << "\n";
        break;
    }
    case 5: {
        int m,g;
        cout << "Enter m: ";
        cin >> m;
        cout << "Enter g: ";
        cin >> g;
        cout << "Weight is:  " << (m*g) << "\n";
        break;
    }
    case 6: {
        int m,v;
        cout << "Enter m: ";
        cin >> m;
        cout << "Enter v: ";
        cin >> v;
        cout << "Momentum is:  " << (m*v) << "\n";
        break;
    }
    case 7: {
        cout << "Exiting\n";
        break;
    }
    default:
        printf("Wrong Input\n");
    }
}

int main()
{
    int enter;
    menu();
    while(enter!=7){
 
      cout << "Enter your choice: \n";
      cin >> enter;
      cout << "Choice is:  " << enter << endl;
 
      calculate(enter);
      menu();
    }
 
    return 0;
}