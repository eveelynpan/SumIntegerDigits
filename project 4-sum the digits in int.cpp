/* Author: Evelyn Pan
 Assignment Title: Sum digits in an integer
 Assignment Description: Program that sums digits of an int btwn 0 & 9999999
 Due Date: 01/28/22
 Date Created: 01/25/22
 Date Last Modified: 01/28/22
*/

#include <iostream>
using namespace std;

int main()
{
    //Data abstraction
    int sum = 0;
    int num;
    
    //Input
    cout << "Enter an integer between 0 and 9999999: ";
    cin >> num;
    cout << num << endl;
    
    //Process
    sum += num %10;
    sum += (num/10) %10;
    sum += (num/100) %10;
    sum += (num/1000) %10;
    sum += (num/10000) %10;
    sum += (num/100000) %10;
    sum += (num/1000000) %10;
    
    //Output
    cout << "The sum of the digits is " << sum << "." << endl;
    
    return 0;

    
}

