#include <iostream>
using namespace std;
int main(){int CHOOSE_1;
double num1,num2,num3,num4,num5=1,num6,num7,x,num8,x1,num9,x2,x3,num10,num11;
while(num5 == 1){
    cout<<"Welcome to Two numbers Algebraic Calculator."<<endl;
    cout<<"For Arithmetic Operation enter 1 and For Exponetial or Trignometric enter 0: "<<endl;
    cin>>CHOOSE_1;
    if(CHOOSE_1==1){
    cout<<"Enter the Pair of numbers: (for Division the first is Dividend) "<<endl;
    cin>>num1>>num2;
    cout<<"Enter the operation: "<<endl<<"1 for addition"<<endl<<"2 for substraction"<<endl<<"3 for multiplication"<<endl<<"4 for division"<<endl;
    cin>>num3;
     if(num3==1){
        cout<<"Your result is: "<<num1 + num2<<endl;
    }
     else if(num3==2){
        cout<<"Your result is: "<<num1 - num2<<endl;
    }
     else if(num3==3){
        cout<<"Your result is: "<<num1 * num2<<endl;
    }
     else if(num3==4){
        cout<<"Your result is: "<<num1 / num2<<endl;
    }
     else{
        cout<<"Unavaliable Operator"<<endl;
        cout<<"To again use calculator press 1 for yes or 0 for no "<<endl;
        cin>>num4;
        num5 = num4;

    }
    }
    else if(CHOOSE_1==0){
        cout<<"Enter 1 for exponetial or 0 for trignometric: "<<endl;
        cin>>num6;
        if(num6==1){
            cout<<"Enter power of e: "<<endl;
            cin>>x;
            num7 = 1 + x + x*x/2 + x*x*x/6 + x*x*x*x/24 + x*x*x*x*x/120;
            cout<<"Your result is: "<<num7<<endl;



            

        }
    else if(num6==0){
            cout<<"Enter trignometric function: "<<endl<<"1 for Tan"<<endl<<"2 for sin"<<endl<<"3 for cos"<<endl;
            cin>>num8;
            if(num8==1){
                cout<<"Enter Angle in Radian:"<<endl;
                cin>>x1;
                num9 = x1 + x1*x1*x1/3 + 2*x1*x1*x1*x1*x1/15 + 17*x1*x1*x1*x1*x1*x1*x1/315;
                cout<<"The Tangent of "<<x1<<" is "<<num9<<endl;}
            else if(num8==2){
                cout<<"Enter Angle in Radian:"<<endl;
                cin>>x2;
                num9 = 1 - x2*x2/2 + x2*x2*x2*x2/24 -x2*x2*x2*x2*x2*x2/720 + x2*x2*x2*x2*x2*x2*x2*x2/40320;
                cout<<"The Sine of "<<x2<<" is "<<num10<<endl;}
            else if(num8==3){
                cout<<"Enter Angle in Radian:"<<endl;
                cin>>x3;
                num9 = x3 - x3*x3*x3/6 + x3*x3*x3*x3*x3/120 -x3*x3*x3*x3*x3*x3*x3/5040;
                cout<<"The Cosine of "<<x3<<" is "<<num11<<endl;}
            
            else{cout<<"Unavaliable Operator"<<endl;
             cout<<"To again use calculator press 1 for yes or 0 for no "<<endl;
             cin>>num4;
             num5 = num4;

            }
            
            




            


    }


    else{cout<<"Unavaliable Operator"<<endl;
        cout<<"To again use calculator press 1 for yes or 0 for no "<<endl;
        cin>>num4;
        num5 = num4;

    }  }


cout<<"Thanks for using.";



  
return 0; 
}}