#include <iostream>
#include <map> 
using namespace std; 

/*
Having discolored his white socks in a rather beige shade (as seen on the picture), Luktas Svettocek realised he can’t just throw all his laundry into one machine and expect it to retain its original colors. However, he is also too lazy to do his laundry in several rounds. He would much rather buy more laundry machines!

Each of Luktas’ socks have a color Di
which has a number between 0 and 109 assigned to it. After some experimentation, he found that he could wash any socks with a maximum absolute color difference of K in the same machine without any discoloring. The color difference of two socks i and j is |Di−Dj|

.

Luktas now needs to know how many washing machines he needs to wash his S
socks, given that each machine can take at most C

socks a time.
Input

The first line consists of three integers 1≤S,C≤105
and 0≤K≤109, the number of socks, the capacity of a laundry machine and the maximum color difference, respectively. Then follow one line with S integers; these are the color values Di

of every sock.
Output

Output a single integer; the number of machines Luktas needs to wash all his socks.
*/

int main()
{
    long long int S, C, K, tmp, total = 0, val;
    map<long long int, long long int> mem;
    cin >> S >> C >> K;
    for(long long int i = 0;i < S; i++){
        cin >> tmp;
        if(K == 0){
            val = tmp;
        }
        else{
            val = tmp/(2*(K+1));
            if(tmp < tmp*val + K){
                val++;
            }
        }
        
        //cout << val<<endl;
        if(mem.count(val)){
            if(mem[val] == C){
                mem[val] = 0;
                total ++;
            }
            else{
                mem[val]++;
            }
        }
        else{
            mem[val] = 1;
            total++;
        }
    }
    
    cout << total << endl;
}