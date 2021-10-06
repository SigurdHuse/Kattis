#include <iostream>
#include <string>
#include <algorithm> 
using namespace std; 

/*
You are given a five-card hand drawn from a standard 52-card deck. The strength of your hand is the maximum value k such that there are k

cards in your hand that have the same rank.

Compute the strength of your hand.
Input

The input will consist of a single line, with five two-character strings separated by spaces.

The first character in each string will be the rank of the card, and will be one of A23456789TJQK. The second character in the string will be the suit of the card, and will be one of CDHS.

You may assume all the strings are distinct.
Output

Output, on a single line, the strength of your hand.
*/

int main()
{
    string hand;
    
    int mem[14] = {};
    for(int i = 0; i < 5; i++){
        cin >> hand;
        if(hand[0] == 'T'){
            mem[9] += 1;
        }
        else if(hand[0] == 'J'){
            mem[10] += 1;
        }
        else if(hand[0] == 'Q'){
            mem[11] += 1;
        }
        else if(hand[0] == 'K'){
            mem[12] += 1;
        }
        else if(hand[0] == 'A'){
            mem[13] += 1;
        }
        else{
            mem[(int)hand[0] - 48] += 1;
        }
        
    }
    cout << *max_element(mem, mem+14);
}