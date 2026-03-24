#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, begin, end, sum = 0;
    cout << "Enter begin and end values: ";
    cin >> begin >> end;
    while(begin > end){
        cin >> begin >> end;
    }
    for (i = begin; i <= end; i++){
        if (i %2 ==0){
            sum +=i;
        }
    }
    cout << "The sum of even values is:" << sum << endl;
    // TODO: prompt user for begin and end values
    // TODO: loop from begin to end and accumulate sum of even values
}
