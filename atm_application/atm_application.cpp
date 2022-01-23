// Example program
#include <iostream>
#include <string>

using namespace std;

void printstar(char ch , int n){
for(int i=1;i<=n;i++){
    cout<< ch;
}
    cout<<"\n";
}

void showMenu() {
    printstar('*',20);
    printstar('*',20);
    cout << "********MENU********"<< endl;
    printstar(' ',20);
    cout << "1. Check balance" << endl;
    printstar(' ',20);
    cout << "2. Deposit" << endl;
    printstar(' ',20);
    cout << "3. Withdraw" << endl;
    printstar(' ',20);
    cout << "4. Exit" << endl;
    printstar(' ',20);
    printstar('*',20);
    printstar('*',20);

}       

int main()
{   // check balance, deposit, withdraw, show menu
    
    int option;
    double balance = 500;
    
    do{
    showMenu();
    cout << "Option: ";
    cin >> option ;
    system("cls");
    
    switch (option) {
    case 1: cout << "Balance is: " << balance << " $" << endl; break;
    case 2: cout << "Deposit amount:";
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
        break;   
    case 3: cout << "Withdraw amount:";
        double withdrawAmount;
        cin >> withdrawAmount;
        if (withdrawAmount <= balance)
            balance -= withdrawAmount;
        else
            cout << "Not enough money" << endl;
        break;
    }
    
    } while (option!=4);
  
}
