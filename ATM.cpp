#include<iostream>
#include<conio.h>
using namespace std;

class Atm                   //creating class atm
{
private:                    //private members of class
    string name;
    string mobile_no;
    int pin;
    double balance;
    long int account_no;

public:                // mublic members/functions of class

    
    void setData(long int account_no_a, string name_a, int pin_a, double balance_a, string mobile_no_a)
    {
        account_no = account_no_a;
        name = name_a;
        pin = pin_a;
        balance = balance_a;
        mobile_no = mobile_no_a;
    }

    long int getAccountNo()
    {
        return account_no;
        getch();
    }

    string getName()
    {
        return name;
         getch();
    }

    int getPin()
    {
        return pin;
         getch();
    }

    double getBalance()
    {
        return balance;
    }

    string getMobileNo()
    {
        return mobile_no;
         getch();
    }

    void setMobile(string mob_prev, string mob_new)
    {
        if (mob_prev == mobile_no)
        {
            mobile_no = mob_new;
            cout << endl << "\t\t\t\t successfully updated mobile no.";
             getch();
        }
        else
        {
            cout << endl << "\t\t\t\t incorrect !!! Old Mobile no";
        }
    }

    void cashWithDraw(int amount_a)
    {
        if (amount_a > 0 && amount_a < balance)
        {
            balance -= amount_a;
            cout << endl << " \t\t\t\t Please Collect Your Cash";
            cout << endl << "\t\t\t\t Available Balance: " << balance;
        }
        else
        {
            cout << endl << "\t\t\t\t Invalid Input or Insufficient Balance";
        }
    }
};

int main()
{
    int choice = 0, enterPin;
    long int enterAccountNo;

    system("cls");
    
    //for checking color attribute in dev c++
    //0-9 is for background color
    //a-f is for text color
	system("color 4e");

    Atm user1;
    user1.setData(1234567, "Hyder", 1111, 45000.90, "7006106504");

    do
    {
        system("cls");
		cout <<"\n\n\n";
        cout << endl << "\t\t\t\t ***Welcome to Atm****" << endl;

        cout << endl << " \t\t\t\t Enter your account No." << endl;
        cout << "\t\t\t\t "; 
		cin >> enterAccountNo;

        cout << endl << " \t\t\t\t Enter your pin." << endl;
        cout << "\t\t\t\t "; 
		cin >> enterPin;

        if ((enterAccountNo == user1.getAccountNo()) && (enterPin == user1.getPin()))
        {
            do
            {
                int amount = 0;
                string oldMobileNo, newMobileNo;

                system("cls");

                cout << endl << "\t\t\t\t ***Welcome to Atm***" << endl;
                cout << endl << "\t\t\t\t Select Options" << endl;
                cout << endl << "\t\t\t\t 1.Check Balance" << endl;
                cout << endl << "\t\t\t\t 2.Cash Withdraw" << endl;
                cout << endl << "\t\t\t\t 3.Show User Details" << endl;
                cout << endl << "\t\t\t\t 4.Update Mobile No" << endl;
                cout << endl << "\t\t\t\t 5.Exit" << endl;
               cout << "\t\t\t\t ";
			   cin >> choice;

                switch (choice)
                {
                    case 1:
                        cout << endl << "\t\t\t\t Your Account balance is: " << user1.getBalance();
                         getch();
                        break;

                    case 2:
                        cout << endl << "\t\t\t\t Enter the amount: ";
                        cin >> amount;
                        user1.cashWithDraw(amount);
                         getch();
                        break;

                    case 3:
                        cout << endl << "\t\t\t\t ***User Details Are:***";
                        cout << endl << "\t\t\t\t -> Account no: " << user1.getAccountNo();
                        cout << endl << "\t\t\t\t -> Name: " << user1.getName();
                        cout << endl << "\t\t\t\t -> Balance: " << user1.getBalance();
                        cout << endl << "\t\t\t\t -> Mobile No.: " << user1.getMobileNo();
                         getch();
                        break;

                    case 4:
                        cout << endl << " \t\t\t\t Enter Old Mobile No.: ";
                        cin >> oldMobileNo;
                        cout << endl << "\t\t\t\t Enter New Mobile No.: ";
                        cin >> newMobileNo;
                        user1.setMobile(oldMobileNo, newMobileNo);
                         getch();
                        break;

                    case 5:
                        exit(0);

                    default:
                        cout << endl << "\t\t\t\t Enter Valid data !!!";
                }
              
            
            } while (1);
            
            
        }
         else{
               cout << "\t\t\t\t invalid details";
               getch();
            	
			}
        
			
    } while (1);

    return 0;
}

