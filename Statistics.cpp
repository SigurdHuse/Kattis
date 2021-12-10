#include <iostream>
#include <string> 
using namespace std; 

/*
Research often involves dealing with large quantities of data, and those data are often too massive to examine manually. Statistical descriptions of data can help humans understand their basic properties. Consider a sample of n numbers X=(x1,x2,…,xn). Of many statistics that can be computed on X

, some of the most important are the following:

    min(X)

: the smallest value in X

max(X)
: the largest value in X

range(X)
: max(X)−min(X)

Write a program that will analyze samples of data and report these values for each sample.
Input

The input contains between 1
and 10 test cases. Each test case is described by one line of input, which begins with an integer 1≤n≤30 and is followed by n integers which make up the sample to be analyzed. Each value in the sample will be in the range −1000000 to 1000000

. Input ends at the end of file.
Output

For each case, display Case X:, where X is the case number, followed by the min, max, and range of the sample (in that order). Follow the format of the sample output.
*/

int main()
{
    std::string::size_type sz;
    string numbers, num;
    int max, min, cnt = 1, tmp, tmp_1;
    while(getline(cin,numbers)){
        max = -2e6;
        min = 2e6;
        tmp_1 = 0;
        for(auto i = numbers.begin(); i != numbers.end(); i++){
            //cout << "Number is: " << *i - '0' << " char is " << *i <<endl;
            num = "";
            while(*i != ' ' && i != numbers.end()){
                num += *i;
                i++;
            }
            if(tmp_1>0){
                tmp = stoi(num);
                if(tmp > max){
                    max = tmp;
                }
                if(tmp < min){
                    min = tmp;
                }
                if(i == numbers.end()){
                    break;
                }
            }
            tmp_1++;
        }
        cout << "Case " << cnt << ": " << min << " " << max << " " << max - min << endl;
        cnt ++;
    }
}