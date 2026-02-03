#include <iostream>
#include <string>
using namespace std;

int main () {
    //Asking for user's full name
    cout << "What is your full name?" << endl;
    string fullname;
    getline(cin,fullname);

    //Asking for user's Date of Birth
    cout << "What is your Birth Month? (Number only)" << endl;
    int month;
    cin >> month;


    cout << "What is your Birth day? (Number only)" << endl;
    int day;
    cin >> day;


    cout << "Hello " << fullname << endl;


    //If or else statements for the user's zodiac sign
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) // Between March 21 – April 19
        cout << "Your zodiac is Aries" << endl;
    else if ((month == 4 && day >= 20) || (month == 5 && day <=20)) // Between  April 20 – May 20
        cout << "Your zodiac is Taurus" << endl;
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) // Between May 21 – June 20
        cout << "Your zodiac is Gemini" << endl;
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) // Between June 21 – July 22
        cout << "Your zodiac is Cancer" << endl;
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) // Between July 23 – August 22
        cout << "Your zodiac is Leo" << endl;
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) // Between  August 23 – September 22
        cout << "Your zodiac is Virgo" << endl;
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) // Between September 23 – October 22
        cout << "Your zodiac is Libra" << endl;
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) // Between October 23 – November 21
        cout << "Your zodiac is Scorpio" << endl;
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) // Between November 22 – December 21
        cout << "Your zodiac is Sagittarius" << endl;
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) // Between December 22 – January 19
        cout << "Your zodiac is Capricorn" << endl;
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) // Between January 20 – February 18
        cout << "Your zodiac is Aquarius" << endl;
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) // Between  February 19 – March 20
        cout << "Your zodiac is Pisces" << endl;
    else //Error statement if Date of Birth is not put in correctly
        cout << "Date of Birth is invalid" << endl;

    return 0;

}