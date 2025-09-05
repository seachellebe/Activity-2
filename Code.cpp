#include <iostream>
using namespace std;
int main()
{
    int hours, minutes;
    
    cout << "Expected Output: " << "\n";
    cout << "Input hours: ";
    cin >> hours;
    
    cout << "Input minutes: ";
    cin >> minutes;
    
    int total_minutes = hours * 60;
    cout << "Total: " << total_minutes << "minutes" << endl;
    
    return 0;
}
