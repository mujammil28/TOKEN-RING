#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class token_ring
{

public:


   void device_1()
    {
        int cal;
        string m1;
        cout<<"\nENTER ANY MESSAGE TO SEND OVERALL THE NETWORK- ";
        cin>>m1;
        cout<<"\n----------------------------------------------";
        cout<<"\nYOUR MESSAGE IS- "<<m1;


            //cout<<m1.length();
            cal=m1.length()%4;
           //cout<<cal;
       // cout<<"\nMESSAGE PASSING IN ALL CONNECTED STATION...";
            if(cal==1)
            {

                  cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 4 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                cout<<"\nmessage received by device 4.";
                cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 1 AND PREDECESSOR IS 3.";
                 cout<<"\n\n--------------------------------";
                ending();
            }
            if(cal==2 || cal==0)
            {
                  cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 2 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 2.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 3 AND PREDECESSOR IS 1.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }
            if(cal==3)
            {
                  cout<<"\n\n\nWAIT...";
                  sleep(10);
                  cout<<"\n\n----------------------------";
                  cout<<"\n\nDEVICE 3 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 3.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 4 AND PREDECESSOR IS 2.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }

            if(cal==4)
            {
                    cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 4 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);  //mujammil momin(IT)
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 4.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 1 AND PREDECESSOR IS 3.";
                 cout<<"\n\n--------------------------------";
                  ending();
                              }


    }

        void device_2()
    {
        int cal;
        string m1;
        cout<<"\nENTER ANY MESSAGE TO SEND OVERALL THE NETWORK- ";
        cin>>m1;
        cout<<"\n----------------------------------------------";
        cout<<"\nYOUR MESSAGE IS- "<<m1;


            //cout<<m1.length();
            cal=m1.length()%4;
           //cout<<cal;
       // cout<<"\nMESSAGE PASSING IN ALL CONNECTED STATION...";
            if(cal==1)
            {
                  cout<<"\n\n\nWAIT...";
                    sleep(10);
                cout<<"\n\n----------------------------";
                cout<<"\n\nDEVICE 4 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                cout<<"\nmessage received by device 4.";
                cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 1 AND PREDECESSOR IS 3.";
                 cout<<"\n\n--------------------------------";
                ending();

            }
            if(cal==2 || cal==0)
            {
                  cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 1 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 1.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 2 AND PREDECESSOR IS 4.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }
            if(cal==3)
            {
                  cout<<"\n\n\nWAIT...";
                  sleep(10);
                  cout<<"\n\n----------------------------";
                  cout<<"\n\nDEVICE 3 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 3.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 4 AND PREDECESSOR IS 2.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }

            if(cal==4)
            {
                    cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 4 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 4.";  //mujammil momin(IT)
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 1 AND PREDECESSOR IS 3.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }
    }

        void device_3()
    {
        int cal;
        string m1;
        cout<<"\nENTER ANY MESSAGE TO SEND OVERALL THE NETWORK- ";
       cin>>m1;
        cout<<"\n----------------------------------------------";
        cout<<"\nYOUR MESSAGE IS- "<<m1;


            //cout<<m1.length();
            cal=m1.length()%4;
           //cout<<cal;
       // cout<<"\nMESSAGE PASSING IN ALL CONNECTED STATION...";
            if(cal==1)
            { //mujammil momin(IT)
                  cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 4 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                cout<<"\nmessage received by device 4.";
                cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 1 AND PREDECESSOR IS 3.";
                 cout<<"\n\n--------------------------------";
                ending();
            }
            if(cal==2 || cal==0)
            {
                  cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 2 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 2.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 3 AND PREDECESSOR IS 1.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }
            if(cal==3)
            {
                  cout<<"\n\n\nWAIT...";
                  sleep(10);
                  cout<<"\n\n----------------------------";
                  cout<<"\n\nDEVICE 1 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 1.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 2 AND PREDECESSOR IS 4.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }

            if(cal==4)
            {
                    cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 4 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 4.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 1 AND PREDECESSOR IS 3.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }


    }
                void device_4()
    {
        int cal;
        string m1;
        cout<<"\nENTER ANY MESSAGE TO SEND OVERALL THE NETWORK- ";
        cin>>m1;
        cout<<"\n----------------------------------------------";
        cout<<"\nYOUR MESSAGE IS- "<<m1;


            //cout<<m1.length();
            cal=m1.length()%4;
           //cout<<cal;
       // cout<<"\nMESSAGE PASSING IN ALL CONNECTED STATION...";
            if(cal==1)
            {
                  cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 1 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                cout<<"\nmessage received by device 1.";
                cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 2 AND PREDECESSOR IS 4.";
                 cout<<"\n\n--------------------------------";
                ending();
            }
            else if(cal==2 || cal==0)
            {
                  cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 3 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 3.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 4 AND PREDECESSOR IS 2.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }
           else if(cal==3)
            {
                  cout<<"\n\n\nWAIT...";
                  sleep(10);

                  cout<<"\n\n----------------------------";
                  cout<<"\n\nDEVICE 2 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 2.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 3 AND PREDECESSOR IS 1.";
                 cout<<"\n\n--------------------------------";
                  ending();
            }

            else if(cal==4)
            {
                    cout<<"\n\n\nWAIT...";
                    sleep(10);
                    cout<<"\n\n----------------------------";
                    cout<<"\n\nDEVICE 1 IS READY TO RECIVE MESSAGE!";
                    cout<<"\n\nRETRIVING TOKEN...";
                    sleep(10);
                    cout<<"\n-----------------------------------";
                  cout<<"\nmessage received by device 1.";
                  cout<<"\n\n--------------------------------";
                cout<<"\n\nWHERE THE SUCCESSOR IS 2 AND PREDECESSOR IS 4.";
                 cout<<"\n\n--------------------------------";
                  ending();

            }
            else{
                cout<<"\nmessage was corrupted!!!";
            }

       }
       void ending(){
       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
       }
};
   int main()
        {

    token_ring t1;
    int a1;
    //
    cout<<"\n***************************************";
    cout<<"\n*******WELCOME TO TOKEN RING**********";
    cout<<"\n***************************************";
    cout<<"\n-FOUR DEVICES CONNECTED IN RING TOPOLOGY-\n";
    cout<<"\n----------------------------------------";
    cout<<"\n     DEVICE 1\n";
    cout<<"\n-----------------";
    cout<<"\n     DEVICE 2\n";
    cout<<"\n-----------------";
    cout<<"\n     DEVICE 3\n";
    cout<<"\n-----------------";
    cout<<"\n     DEVICE 4\n";
    cout<<"\n-----------------";
    cout<<"\n SELECT DEVICE: ";
    cin>>a1;
    cout<<"\n-----------------";

    if(a1==1)
    {
              cout<<"\nYOU SELECTED DEVICE 1.\n";
        t1.device_1();

    }
    else if(a1==2)
    {
        cout<<"\nYOU SELECTED DEVICE 2.\n";
        t1.device_2();


    }
     else if(a1==3)
    {
                cout<<"\nYOU SELECTED DEVICE 3.\n";
        t1.device_3();

    }

     else if(a1==4)
    {
         cout<<"\nYOU SELECTED DEVICE 4.\n";

        t1.device_4();

    }

    else
    {
         cout<<"\nSELECT THE CORRECT DEVICE!!!\n\n\n";
         main();
    }



    //rand();
   // t1.random();




        }



