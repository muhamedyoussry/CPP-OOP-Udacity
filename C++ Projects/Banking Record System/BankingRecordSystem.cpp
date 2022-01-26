#include "BankingRecordSystem.hpp"

int main()
{
    Account acc;
    int choice;
    int flag = 1;
    while (flag == 1)
    {
        choice = Account::ChooseOperation();
        if (choice == 1)
        {
            acc.WriteFileRecord();
            flag = Account::MainWindow();
            if (flag == 2)
            {
                break;
            }
        }
        else if (choice == 2)
        {
            acc.ReadFileRecord();
            flag = Account::MainWindow();
            if (flag == 2)
            {
                break;
            }
        }
        else if (choice == 3)
        {
            string accountNumber;
            acc.ReadFileRecord(accountNumber);
            flag = Account::MainWindow();
            if (flag == 2)
            {
                break;
            }
        }
    }
}