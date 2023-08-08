
#include <string>
#include <iostream>
using namespace std;
int main()
{
	cout <<"enter the number of phrases to encrypt: "<<endl;
	int num;
	cin >> num;

	for (int i = 0; i <= num; i++) {

		string str1;
		getline(cin, str1);

		//***********move three positions to the right in the ascii table if letter:*********

		for (int i = 0; i < str1.length(); i++) {

			if ((int)str1[i] >= 65 && (int)str1[i] <= 90 || (int)str1[i] >= 97 && (int)str1[i] <= 122) {
				str1[i] = str1[i] += 3;
			}
			else {
				str1[i] = str1[i];
			}
			//cout << str1[i];
		}
		//cout << "original phrase = " << str1;
		//cout << endl;
		//***************reverse the line:*******************
		string str2;
		for (int i = str1.length() - 1; i >= 0; i--) {
			//cout << str1[i];
			str2 += str1[i];
		}
		//cout << "Reversed phrase = " << str2;


		//*****divide the string in two*******

		//---------get the first half---------
		string str3;


		for (int i = 0; i < str2.length() / 2; i++) {

			str3 += str2[i];

		}
		//cout << endl;

		//cout << "the first half of the phrase is = " << str3;

		//-------------get the second half--------

		string secondHalf;

		for (int i = str2.length() / 2; i < str2.length(); i++) {

			secondHalf += str2[i] - 1;
		}
		//cout << endl;

		//cout << "the second half of the phrase is = " << secondHalf;
		//----------------------------------------------------------
		//cout << endl;
		//cout << "the complete output is = " << str3 << secondHalf << endl;
		cout << str3 + secondHalf<<endl;

	}
	return 0;
}
