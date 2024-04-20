//Final Task : Password manager
#include<bits/stdc++.h>
using namespace std;
//This system firstly adds passwords to particular username and   
class PasswordManager{
private:
    static const int MAXACCOUNTS=100; 
    string usernames[MAXACCOUNTS];//Array to store usernames
    string passwords[MAXACCOUNTS];//Array to store passwords
    int acc_count;//Current count of accounts
public:
    PasswordManager(){
        acc_count=0;
    }
   //To add a new password
    void addPassword(string username,string password){
        if(acc_count<MAXACCOUNTS){
            usernames[acc_count]=username;
            passwords[acc_count]=password;
            acc_count++;
        }else{
            cout<<"Password storage full Cannot add more passwords."<<endl;
        }
    }
 //Function to rebuild a password
    string getPassword(string username){
        for (int i=0;i<acc_count;i++) {
            if(usernames[i]==username){
                return passwords[i];
            }
        }
        return "Password not found";
    }
};

int main() {
    PasswordManager manager;
    string username,password;
    char choice;
    do {
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter password: ";
        cin>>password;
        manager.addPassword(username,password);
        cout<<"Do you want to add another password for another username further? (y/n): ";
        cin>>choice;
    } while(choice=='y'||choice=='Y');
    cout<<"Enter username to find your password in our system: ";
    cin>>username;
    string retrievedPassword=manager.getPassword(username);
    cout<<"Password for "<<username<<": "<<retrievedPassword<<endl;
    return 0;
}
