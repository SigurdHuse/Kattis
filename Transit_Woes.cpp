#include <iostream> 
using namespace std; 

/*
Everyday Yraglac relies on his city’s local transit system to get to and from campus. Since this is routine for him, he’s memorized exactly what time will let him leave his house and make it in time to his first morning class. Of course transit being transit, they decided to change around the schedules for some of the routes Yraglac takes.

Yraglac leaves his house everyday at time s
to make it to his first class which starts at time t. To get there, he takes n transit routes, one after the other. When transferring from one transit route to another, going from his house to the first transit stop, and going from the last transit stop to his class, he must walk for di time. Yraglac rides the i−th bus for bi time before getting off and walking to the i+1-th bus stop. Last but not least, each bus only comes at an interval of every ci. The first one always leaving at time 0

.

Given the new schedules for the routes Yraglac takes, can you find out if he can make it to class on time?
Input

The first line contains 3
space separated integers, 0≤s≤t≤1000, and 1≤n≤20

.

The second line contains n+1
space separated integers di (0≤di≤1000) denoting the time it takes to walk from the i-th bus’ drop-off point to the i+1-th bus stop. Note that d0 is the time it takes to walk from Yraglac’s house to the first bus stop, and dn

is the time it takes to walk from the last bus’ drop-off point to his class.

The third line contains n
space separated integers bi (1≤bi≤1000) denoting the amount of time Yraglac rides the i

-th bus.

The fourth line contains n
space separated integers ci (1≤ci≤1000) denoting the intervals the i

-th bus arrives.
Output

Output “yes” if Yraglac will be able to get to class in time, and “no” otherwise.
*/

int main()
{
    int s, t,n, time = 0, tmp;
    cin >> s >> t >>n;
    int walk[n + 1];
    int bus_ride[n];
    int interval[n];

    for(int i = 0; i <= n;i++){
        cin >> tmp;
        walk[i] = tmp;;
    }
    for(int i = 0; i < n;i++){
        cin >> tmp;
        bus_ride[i] = tmp;;
    }
    for(int i = 0; i < n;i++){
        cin >> tmp;
        interval[i] = tmp;;
    }

    for(int k = 0; k < n; k++){
        s += walk[k];
        if(s % interval[k] == 0){
            ;
        }
        else{
            s += interval[k] - s % interval[k];
        } 
        s += bus_ride[k];   
    }
    s += walk[n];
    if(s <= t){
        cout << "yes";
    }else{
        cout << "no";
    }
}   