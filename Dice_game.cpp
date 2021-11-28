#include <iostream> 
using namespace std; 

int main()
{
    double a1, a2, b1, b2;
    double Gunnar = 0, Emma = 0;
    cin >> a1 >> a2 >> b1 >> b2;
    Gunnar += (a2 + a1)/2.0  + (b2 + b1)/2.0;
    
    cin >> a1 >> a2 >> b1 >> b2;
    Emma += (a2 + a1)/2.0  + (b2 + b1)/2.0;
    if(Emma > Gunnar){
        cout << "Emma" << endl;
    }
    else if(Emma == Gunnar){
        cout << "Tie" << endl;
    }
    else{
        cout << "Gunnar" << endl;
    }
}