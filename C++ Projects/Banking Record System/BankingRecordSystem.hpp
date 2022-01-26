#include <bits/stdc++.h>

using namespace std;

class Account
{
private:
    string accountNumber;
    string firstName;
    string lastName;
    double balance;

public:
    Account();
    Account(string accountNumber_, string firstName_, string lastName_, double balance_);
    void ReadData();
    void ShowData();
    void ReadFileRecord();
    void ReadFileRecord(string accountNumber);
    void WriteFileRecord();
    void DeleteRecord();
    void UpdateRecord();
    void SearchRecord();
    static int MainWindow();
    static int ChooseOperation();
};

Account::Account()
{
    accountNumber = "-";
    firstName = "-";
    lastName = "-";
    balance = 0;
}
Account::Account(string accountNumber, string firstName, string lastName, double balance)
{
    this->accountNumber = accountNumber;
    this->firstName = firstName;
    this->lastName = lastName;
    this->balance = balance;
}
void Account::ReadData()
{
    cout << endl;
    cout << "\t\t\t\t\t\t\t------ Fill the Information Form ------" << endl
         << endl
         << endl;
    cout << "Enter your Account Number: ";
    cin >> accountNumber;
    cout << "Enter your First Name: ";
    cin >> firstName;
    cout << "Enter your Last Name: ";
    cin >> lastName;
    cout << "Enter your Balance: ";
    cin >> balance;
    cout << endl;
}
void Account::WriteFileRecord()
{
    fstream recordsFile;
    recordsFile.open("BankRecords.csv", ios::out | ios::app); // ios::app is to start writing from the end of the file
    ReadData();
    recordsFile << accountNumber << ", " << firstName << ", " << lastName << ", " << balance << endl;
    recordsFile.close();
}
void Account::ReadFileRecord()
{
    fstream recordsFile;
    recordsFile.open("BankRecords.csv", ios::in);
    string line, word;
    vector<string> row;
    cout << endl;
    while (getline(recordsFile, line))
    {
        stringstream s(line);
        while (getline(s, word, ','))
        {
            row.push_back(word);
        }
        cout << left << setw(20) << row[0] << "|" << setw(20) << row[1] << "|" << setw(20) << row[2] << "|" << setw(20) << row[3] << endl;
        row.clear();
    }
}
void Account::ReadFileRecord(string accountNumber)
{
    cout << "\nInsert the Account Number you search for: ";
    cin >> accountNumber;
    fstream recordsFile;
    recordsFile.open("BankRecords.csv", ios::in);
    string line, word;
    vector<string> row;
    cout << endl;
    cout << left << setw(20) << "Account Number"
         << "|" << setw(20) << "First Name"
         << "|" << setw(20) << "Last Name"
         << "|" << setw(20) << "Balance" << endl;
    while (getline(recordsFile, line))
    {
        stringstream s(line);
        while (getline(s, word, ','))
        {
            row.push_back(word);
        }
        if (row[0] == accountNumber)
        {
            cout << left << setw(20) << row[0] << "|" << setw(20) << row[1] << "|" << setw(20) << row[2] << "|" << setw(20) << row[3] << endl;
        }
        row.clear();
    }
}

void Account::DeleteRecord()
{
}
void Account::SearchRecord()
{
}
void Account::UpdateRecord()
{
}
int Account::MainWindow()
{
    int flag;
    cout << "\n\t\t-- Choose Operation Number: " << endl
         << "1. Show the Main window again" << endl
         << "2. Exit Programs" << endl;
    cout << "Your choice: ";
    cin >> flag;
    return flag;
}
int Account::ChooseOperation()
{
    int choice;
    cout << "\n\n\t\t\t\t\t\t\t*** Account Information System***\t\t\t\t\t\t\t" << endl;
    cout << "\t\t-- Choose Operation Number: " << endl
         << "1. Add a New record" << endl
         << "2. Show all records" << endl
         << "3. Search for record" << endl
         << "4. Delete a record" << endl
         << "5. Update a record" << endl;
    cout << "Your choice: ";
    cin >> choice;
    return choice;
}