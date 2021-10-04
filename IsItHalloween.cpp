#include <iostream>
#include <string> 
using namespace std; 

/*
HiQ recently got an assignment from a client to create a clone of the immensely popular website https://IsItHalloween.com. The website is a very simple one. People will visit the site occasionally to see if it is Halloween. Whenever it is, the website should print out yup, otherwise it should print out nope on the screen.

Since HiQ is such a popular firm, they don’t have time to complete this assignment right now. Their frontend engineers have already programmed the frontend of the website that prints out yup or nope, but not the backend microservice that determines whether it is indeed Halloween or not. Do you have time to help them?

The behaviour of the server should be as follows: it gets as input the current date in the format FEB 9, where FEB is the month given in three letters (JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC) and 9 is the day of the month starting at 1. It should then determine if this date represents October 31 or December 25 (since 318=2510

).
Input

The input consists of a single line containing a date of the format FEB 9, with the month and date separated by a single space.
Output

If the date is October 31 or December 25, output yup. Otherwise, output nope.
*/

int main()
{
    string date;
    int num;
    cin >> date >> num;
    if(date[0] == 'O' && date[1] == 'C' && date[2] == 'T'){
        if(num == 31){
            cout << "yup";
            return 0;
        }
    }
    else if(date[0] == 'D' && date[1] == 'E' && date[2] == 'C'){
        if(num == 25){
            cout << "yup";
            return 0;
        }
    }
    cout << "nope";
}