#include <iostream> 
#include <algorithm>
#include <bitset>
#include <string>
using namespace std; 

int main()
{
    long long int N;
    cin >> N;
    string binary = bitset<64>(N).to_string();
    //cout << binary << endl;
    string new_string = binary.substr(binary.find('1'));
    //cout << new_string << endl;
    reverse(new_string.begin(), new_string.end());
    //cout << new_string << endl;
    cout << stoi(new_string, 0,2) << endl;
}