
#include "std_lib_facilities.h"

int main()
{
	//1

	cout << "Enter the name of the person you want to write to:\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n";

    //2

    cout << "How are you?\nI am fine.\nI miss you.";
    cout << "Where have you been?\nWhen can we meet in person?\n";

    //3
    cout << "Please add the name of the other friend!\n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";

    //4
    char friend_sex=0;
    cout << "Is this person male or female? (m/f)";
    cin >> friend_sex;

    if(friend_sex=='m')
    	cout << "If you see " << friend_name << " please ask him to call me.\n";
    else if (friend_sex=='f')
    	cout << "If you see " << friend_name << " please ask her to call me.\n";

    //5
    int age;
    cout << "Please enter the age of the recipient!\n";
    cin >> age;
    if(age<0 || age==0 || age==110 || age>110)
    	simple_error("you're kidding!");
    else
    	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    //6
    if(age<12)
    	cout << "Next year you will be " << age+1 << ".\n";
    else if(age==17)
    	cout << "Next year you wil be able to vote.\n";
    else if(age>70)
    	cout << "I hope you are enjoying retirement.\n";

    //7
    cout << "Yours sincerely," << endl << endl;
    string your_name;
    cin >> your_name;

    return 0;
}