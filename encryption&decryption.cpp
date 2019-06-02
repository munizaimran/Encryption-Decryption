#include<iostream>
using namespace std;

void display(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i];
	}
}

int main()
{
	string word;
	int key;
	cout << "Enter any word: ";
	cin >> word;
	cout << "Enter a key: ";
	cin >> key;
	int len = word.length();
	int word_value[len];
	int char_value[len];
	
	int encrypt_value[len];
	int encrypt_word_value[len];
	string encrypted_word;
	
	int decrypt_value[len];
	int decrypt_word_value[len];
	string decrypted_word;
	
	int choice;
	cout << "Select from the choices given below: " << endl;
	cout << "1. Encrypt the word: " << endl;
	cout << "2. Decrypt the word: " << endl;
	cin >> choice;
	
	cout << "\nThe word is: " << word << endl;
	
	for (int i = 0; i < len; i++)
	{
		word_value[i] = static_cast<int>(word[i]);
	}
	
	for (int i = 0; i < len; i++)
	{
		char_value[i] = (word_value[i] - 97);
	}
	
	switch(choice)
	{
		case 1:
			{
				for (int i = 0; i < len; i++)
				{
					encrypt_value[i] = (char_value[i] + 2) % 26;
				}
				
				for (int i = 0; i < len; i++)
				{
					encrypt_word_value[i] = (encrypt_value[i] + 97);
				}
				
				for (int i = 0; i < len; i++)
				{
					encrypted_word[i] = static_cast<char>(encrypt_word_value[i]);
				}
				
				cout << "Encrypted word is : ";
				for (int i = 0; i < len; i++)
				{
					cout << encrypted_word[i];
				}
				cout << endl;
				break;
			}
			
		case 2:
			{
				for (int i = 0; i < len; i++)
				{
					decrypt_value[i] = (char_value[i] - 2) % 26;
				}
				
				for (int i = 0; i < len; i++)
				{
					if (decrypt_value[i] < 0)
						decrypt_word_value[i] = (decrypt_value[i] + 97) + 26;
					else
						decrypt_word_value[i] = (decrypt_value[i] + 97);
				}
				
				for (int i = 0; i < len; i++)
				{
					decrypted_word[i] = static_cast<char>(decrypt_word_value[i]);
				}
				
				cout << "Decrypted word is: ";
				for (int i = 0; i < len; i++)
				{
					cout << decrypted_word[i];
				}
				cout << endl;
				break;
			}
			
		default:
			cout << "Invalid Choice... " << endl;
		
	}
	
	return 0;
}
