#include <iostream> 
using namespace std; 

/*
Your school has provided you with a laptop computer! However, they insist on putting a laptop sticker with their logo on your new computer. That sticker might be very large, and it can’t be rotated! Will it fit, with one centimeter to spare on all sides?
Input

The single line of input contains four integers wc
, hc, ws and hs (1≤wc,hc,ws,hs≤1000), where wc is the width of your new laptop computer, hc is the height of your new laptop computer, ws is the width of the laptop sticker, and hs

is the height of the laptop sticker. All measurements are in centimeters.
Output

Output a single integer, which is 1
if the laptop sticker will fit on your new laptop computer, without rotating, but with one centimeter space on all sides, and 0 if the laptop sticker won’t fit.
*/

int main()
{
    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;
    if(wc - 2 < ws|| hc -2 < hs){
        cout << 0;
    }
    else{
        cout << 1;
    }
}