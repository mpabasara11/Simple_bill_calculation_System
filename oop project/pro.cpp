#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

class bill
{
protected:
    int total=0;
    string name;

public:
    virtual void calculate()=0;
    int getTotal();
    string getName();
};



int bill::getTotal()
{
    return total;
}

string bill::getName()
{
    return name;
}


class mainDish:public bill
{protected:

   int choise;
   int Q;
   int M;

public:
    void calculate();
};

void mainDish::calculate()
{
                cout<<"\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  Main Dishes  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  ";
                cout<<"\n\n   \xdb\xdb\xdb\xdb ITEM NO \xdb\xdb\xdb\xdb\ ITEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\   PRICE \xdb\xdb\xdb\xdb";
				cout<<"\n\n\t 1         BIRIYANI         Rs 280.00\n\n";
				cout<<"\t 2         FRIED RICE       Rs 250.00\n\n";
				cout<<"\t 3         KOTTU            Rs 180.00\n\n";
                cout<<"\t 4         NOODLES          Rs 150.00\n\n";
				cout<<"\t 5         PASTA            Rs 300.00\n\n";

				 cout<<"\n\n \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\ ";

                while(M!=1)
                {
                  cout<<"\n\n   PLEASE ENTER CUSTOMER NAME ";
                  cin>>name;
                  cout<<"\n   SELECT DISH  - ";
                  cin>>choise;
                  cout<<"   SELECT QUANTITY - ";
                  cin>>Q;
                  cout<<"\n PRESS 1 TO PROCESS THE BILL OR PRESS ANY TO CONTINUE ";
                  cin>>M;


                   if(choise==1)
                            {
                                total=total+(280*Q);
                            }
                    else if(choise==2)
                            {
                                total=total+(250*Q);
                            }
                    else if(choise==3)
                            {
                                total=total+(180*Q);
                            }
                    else if(choise==4)
                            {
                                total=total+(150*Q);
                            }
                    else if(choise==5)
                            {
                                total=total+(300*Q);
                            }
                    else
                            {
                                cout<<"INVALID";
                            }
                }



                  cout<<"\n\n\n    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
     cout<<"\n\n    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\ TOTAL IS  \xdb\xdb\xdb\xdb\xdb\xdb\xdb RS."<<total;
     cout<<"\n            thanks you !!!";
     cout<<"\n";

}

class drinks:public bill
{
protected:

    int x;
    int y;
    int e;

public:
    void calculate();
};
void drinks::calculate()
{

     cout<<"\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  Drinks Menu  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  ";
     cout<<"\n\n   \xdb\xdb\xdb\xdb ITEM NO \xdb\xdb\xdb\xdb\ ITEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\ PRICE \xdb\xdb\xdb\xdb";
     cout<<"\n\n         1        Coca Cola       RS.120.00";
     cout<<"\n         2        Fanta Orange    RS.180.00";
     cout<<"\n         3        Sprite          RS.200.00";
     cout<<"\n         4        Soda Water      RS.100.00";
     cout<<"\n         5        Tonic water     RS.150.00";
     cout<<"\n         6        Nescafe         RS.140.00";
     cout<<"\n         7        Nestea          RS.130.00";
     cout<<"\n         8        Pepsi           RS.105.00";
     cout<<"\n         9        Ginger Beer     RS.175.00";
     cout<<"\n        10        Tea             RS.50.00";

     cout<<"\n\n \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\ ";


     while(e!=1)
     {
        cout<<"\n\n   PLEASE ENTER CUSTOMER NAME ";
        cin>>name;
        cout<<"\n   PLEASE ENTER THE ITEM NO - ";
        cin>>x;
        cout<<"   PLEASE ENTER THE QUENTITY - ";
        cin>>y;
        cout<<"\nPRESS 1 TO PROCESS THE BILL OR PRESS ANY TO CONTINUE ";
        cin>>e;

     switch(x)
     {
        case 1:total=total+(120*y);break;
        case 2:total=total+(180*y);break;
        case 3:total=total+(200*y);break;
        case 4:total=total+(100*y);break;
        case 5:total=total+(150*y);break;
        case 6:total=total+(140*y);break;
        case 7:total=total+(130*y);break;
        case 8:total=total+(105*y);break;
        case 9:total=total+(175*y);break;
        case 10:total=total+(50*y);break;
     }

     }
     cout<<"\n\n\n    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
     cout<<"\n\n    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\ TOTAL IS  \xdb\xdb\xdb\xdb\xdb\xdb\xdb RS."<<total;
     cout<<"\n            thanks you !!!";
     cout<<"\n";
}

int main()
{int service;
 string name;
 int paid=0;

  fstream x;
  x.open("log.txt",ios::app|ios::in);


       cout<<"\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  Main Menu  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\  ";
       cout<<"\n\n   1) MAIN DISHES";
       cout<<"\n   2) DRINKS";
       cout<<"\n   3) SERVICE LOG";
       cout<<"\n\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
       cout<<"\n\n   PLEASE SELECT THE SERVICE ";
       cin>>service;

       switch(service)
       {
           case 1:
                {

                     mainDish A;
                     A.calculate();

                     x<<setw(5)<<A.getName()<<setw(8)<<A.getTotal()<<endl;
                     x.close();
                     break;

                }

           case 2:
                {
                     drinks A;
                     A.calculate();
                     x<<setw(5)<<A.getName()<<setw(8)<<A.getTotal()<<endl;
                     x.close();
                     break;

                }

           case 3:
               {

                 while(x>>name>>paid)
                   {

                       cout<<"\nNAME :"<<name<<"\t"<<"BILL - RS."<<paid<<endl;

                   }
                   break;



               }

       }

       return 0;

}
