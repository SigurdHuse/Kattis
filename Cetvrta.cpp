#include <iostream> 
#include <tuple>
using namespace std; 

/*
Mirko needs to choose four points in the plane so that they form a rectangle with sides parallel to the axes. He has already chosen three points and is confident that he hasn’t made a mistake, but is having trouble locating the last point. Help him.
Input

Each of the three points already chosen will be given on a separate line. All coordinates will be integers between 1
and 1000

.
Output

Output the coordinates of the fourth vertex of the rectangle.
*/

int main()
{
    tuple<int,int> one, two, three;
    int tpm_1, tmp_2;
    cin >> tpm_1 >>tmp_2;
    one = make_tuple(tpm_1, tmp_2);
    cin >> tpm_1 >> tmp_2;
    two = make_tuple(tpm_1, tmp_2);
    cin >> tpm_1 >> tmp_2;
    three = make_tuple(tpm_1, tmp_2);

    // tpm_1 is x-coordinate, tpm_2 is y-coordinate
    if(get<0>(one) == get<0>(two)){
        tpm_1 = get<0>(three);
    }
    else if(get<0>(two) == get<0>(three)){
        tpm_1 = get<0>(one);
    }
    else{
        tpm_1 = get<0>(two);
    }
    if(get<1>(one) == get<1>(two)){
        tmp_2 = get<1>(three);
    }else if(get<1>(two) == get<1>(three)){
        tmp_2 = get<1>(one);
    }
    else{
        tmp_2 = get<1>(two);
    }
    cout << tpm_1 << " "<<tmp_2;
}