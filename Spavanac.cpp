#include <iostream> 
#include <string>
using namespace std; 

string converter(int hours, int minutes){
    string output = "";

    minutes += 15;
    if(minutes < 60){
        if(hours == 0){
            output += "23";
            output += " ";
        }
        else if(hours <= 10){
            //output += "0";
            output += to_string(hours-1);
            output += " ";
        }
        else{
            output += to_string(hours - 1);
            output += " ";
        }
    }
    else{
        if(hours <= 10){
            //output += "0";
            output += to_string(hours);
            output += " ";
        }else{
            output += to_string(hours); 
            output += " ";
        }
    }
    minutes = minutes % 60;
    if(minutes < 10){
        output += "0";
        output += to_string(minutes);
    }else{
        output += to_string(minutes);
    }
    return output;
}


int main()
{
    
    int hours, minutes;
    
    for(int hours = 0; hours < 12; ++hours){
        for(int minutes = 0; minutes < 60; ++ minutes){
            cout << hours <<"  " << minutes << "  " << converter(hours, minutes) << endl;
        }
    }

   //int hours, minutes;
   //cin >> hours >> minutes;
   //cout << converter(hours, minutes);
}