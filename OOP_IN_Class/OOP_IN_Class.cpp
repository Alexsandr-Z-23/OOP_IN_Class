#include <iostream>
using namespace std;

class Person
{	
public:
	
	/*Person(const string& p_name, const string& p_email, const string& p_password)
	{
		name = p_name;
		account = Account(p_email, p_password);
	}*/
	class Account
	{
	public:
		string email;
		string password;
		Account(const string& p_email, const string& p_password)
		{
			email = p_email;
			password = p_password;
		}
	};
	Person(const string& p_name, const Account& p_account)
	{
		name = p_name;
		account = p_account;
	}

	void print()
	{
		cout << "Name " << name << "\n" << "Email : " << account.email << "\n"
			<< "Password : " << account.password << endl;
	}
private:
	string  name;

	Account account{ "","" }; // переменная вложенного сласса 
};



int main()
{
	/*Person per{"Tom","Tom@gmail.com","asfdhuasgjiasd" };
	per.print();*/
	Person::Account per{ "Tom@gmail.com","asfdhuasgjiasd" };
	Person Tom{ "Tom",per };
	Tom.print();

}

