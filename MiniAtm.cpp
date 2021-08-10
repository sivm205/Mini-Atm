 //==============mini Atm==========================
 #include<iostream>
 #include<string>
 #include<conio.h>
 using namespace std;

 class ATM
 {  private:
        string account_no;
        string name;
        int pin;
        double balance;
        string mobile_no;
    public:
        ATM(string account_no , string name , int pin , double balance , string mobile_no)  //initializing data member
        {
            this->account_no = account_no;
            this->balance = balance;
            this->mobile_no = mobile_no;
            this->name = name;
            this ->pin = pin;

        }

        //returning all the user details through member function
        string get_account()
        {
            return account_no;
        }

        //returning account holder name
        string get_name()
        {
            return name;
        }
        
        //returning pin
        int get_pin()
        {
            return pin;
        }

        //returning balance;
        double get_balance()
        {
            return balance;
        }

        //returning mobile number
        string get_mobile()
        {
            return mobile_no;
        }

        //set new mobile number
        string set_MobileNum(string prev_num  , string new_num)
        {
            if(prev_num == mobile_no)
            {
                this-> mobile_no = new_num;
                cout<<"MOBILE NUMBER UPDATE SUCCESSFULLY"<<endl;
                
            }
            else
            {
                cout<<"INCORRECT !!! MOBILE NUMBER"<<endl;
                
            }
        }

        //withdrawing cash 
        double withdraw_cash(double Balance)
        {
            if(Balance > balance && Balance <0)
            {
                cout<<"INVALID DATA !!! OR INSUFFICIENT BALANCE"<<endl;
                getch();
            }
            else
            {
                balance -= Balance;
                cout<<"CASH WITHDRAW SUCCESSFULLY"<<endl;
                cout<<"AVAILABLE BALANCE : "<<balance<<endl;

            }
        }

 };

 int main()
 {
     //creating first user defalt 

     ATM user1( "1150008543" , "John" , 1177, 48900 ,"9755999854"  );
     
     int option , pin;
     string account_num, old_number , new_number;
     double amount;
     do
     {      system("cls"); //clearing terminal 
         
          //USER AUTHENTICATION ------->
          cout<<"**** WELCOME TO MINI ATM ****"<<endl;
          cout<<endl;

         cout<<"ENTER THE ACCOUNT NUMBER"<<endl;
         cin>>account_num;

         cout<<"ENTE THE PIN"<<endl;
         cin>>pin;

         if(account_num == user1.get_account()  && pin == user1.get_pin())
         {
            do
            {
                system("cls");
                cout<<endl;
                cout<<"*********** WELCOME *************"<<endl;
                cout<<"BELOW IS GIVEN OPTION"<<endl;
                cout<<"1.GET THE ACCOUNT NUMBER"<<endl;
                cout<<"2.GET THE USER DETAILS"<<endl;
                cout<<"3.UPDATE MOBILE NUMBER"<<endl;
                cout<<"4.WITHDRAW CASH"<<endl;
                cout<<"5.CHECK ACCOUNT BALANCE"<<endl;
                cout<<"6. TO EXIT FROM THE SYSTEM"<<endl;
                cout<<endl<<"ENTER THE CHOICE"<<" ";
                cin>>option;

                switch (option)
                {
                case 1:
                    cout<<"ACCOUNT NUMBER :"<<user1.get_account()<<endl;
                    cout<<"PRESS ANY KEY ....."<<endl;
                    getch();
                    break;

                case 2:
                    cout<<"ACCOUNT NUMBER : "<<user1.get_account()<<endl;
                    cout<<"ACCOUNT AVALABLE BALANCE : "<<user1.get_balance()<<endl;
                    cout<<"PIN NUMBER : "<<user1.get_pin()<<endl;
                    cout<<"MOBILE NUMBER : "<<user1.get_mobile()<<endl;
                    cout<<"PRESS ANY KEY ....."<<endl;
                    getch();
                    break;

                case 3:
                    cout<<"ENTER THE OLD MOBILE NUMBER "<<endl;
                    cin>>old_number;

                    cout<<"ENTER THE NEW MOBILE NUMBER"<<endl;
                    cin>>new_number;

                    user1.set_MobileNum(old_number  , new_number);
                    cout<<"PRESS ANY KEY ....."<<endl;
                    getch();
                    break;

                case 4:
                    cout<<"ENTER THE AMOUNT "<<endl;
                    cin>>amount;

                    user1.withdraw_cash(amount);
                    cout<<"PRESS ANY KEY ....."<<endl;
                    getch();
                    break;

                case 5:
                    cout<<"AVAILBLE BALANCE :"<<user1.get_balance()<<endl;
                    cout<<"PRESS ANY KEY ....."<<endl;
                    getch();
                    break;

                case 6:
                    cout<<"THANK YOU FOR USING OUR SYSTEM "<<endl;
                    exit(0);
                    break;


                
                default:
                cout<<"PLEASE INPUT CORRECT PIN"<<endl;
                    break;
                }



            } while(1);
            
         }
         else
         {
             cout<<"INCORRECT DATA !!!"<<endl;
         }
     } while (1);
     





 }