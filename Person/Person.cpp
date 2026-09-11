// Person.cpp 
/*
* Class Person
*
* Properities:
* ID		(Read Only)
* FirstName (Read And Write)
* LastName  (Read And Write)
* FullName  (Read And Write)
* Email		(Read And Write)
* Phone		(Read And Write)
*
* Methods:
* GetID()
* SetFirstName(FirstName)
* GetFirstName()
* SetLastName(LastName)
* GetLastName()
* GetFullName()
* SetEmail(Email)
* GetEmail()
* SetPhone(Phone)
* GetPhone()
* SendEmail(Subject, Body)
* SendSMS(Message)
* Print()
*
* Rules:
* If the developer wants to create an object he will use only Constructor
*/

#include <iostream>
using namespace std;

class clPerson {

private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:

	clPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	int GetID() {
		return _ID;
	}

	void SetFirstName(string FirstName) {
		_FirstName = FirstName;
	}

	string GetFirstName() {
		return _FirstName;
	}

	void SetLastName(string LastName) {
		_LastName = LastName;
	}

	string GetLastName() {
		return _LastName;
	}

	string GetFullName() {
		return _FirstName + " " + _LastName;
	}

	void SetEmail(string Email) {
		_Email = Email;
	}

	string GetEmail() {
		return _Email;
	}

	void SetPhone(string Phone) {
		_Phone = Phone;
	}

	string GetPhone() {
		return _Phone;
	}

	void SendEmail(string Subject, string Body) {
		cout << "The following message sent successfully to email: "
			<< _Email << endl;
		cout << "Subject: " << Subject << "\nBody: " << Body << endl;
	}

	void SendSMS(string TextMessage) {
		cout << "\nThe following SMS sent successfully to phone: "
			<< _Phone << endl;
		cout << TextMessage << endl;
	}

	void Print() {
		cout << "\nInfo:\n";
		cout << "_________________\n";
		cout << "ID        : " << _ID << endl;
		cout << "FirstName : " << _FirstName << endl;
		cout << "LastName  : " << _LastName << endl;
		cout << "FullName  : " << GetFullName() << endl;
		cout << "Email     : " << _Email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "_________________\n\n";
	}
};

int main() {

	clPerson Person1(10, "Mohammed", "Abu-Hadhoud", "my@gmail.com", "098342343");
	Person1.Print();
	Person1.SendEmail("Hi", "How are you?");
	Person1.SendSMS("How are you?");

	clPerson Person2(10, "Abdulrahman", "Al-Haritani", "abdulrahamanharitani@gmail.com", "0995717078");
	Person2.Print();
	Person2.SendEmail("She", "How is she?");
	Person2.SendSMS("How is she?");

	cout << endl;
	system("pause");
}
