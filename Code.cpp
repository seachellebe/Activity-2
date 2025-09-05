#include <iostream>
#include <string>
using namespace std;
int main()
{
    string full_name, course_year_section, birthday, motto;
    
    cout << "Enter your Full пame: ";
    getline (cin, full_name);
    
    cout << "Enter your Course, Yr. & Sec.: ";
    getline (cin, course_year_section);
    
    cout << "Enter your Birthday: ";
    getline (cin, birthday);
    
    cout << "Enter your Motto/Motivation in Life: ";
    getline (cin, motto);
    
    cout << endl;
    cout << "Hi! I'm " << full_name << " of " << course_year_section << ". Welcome to Data Structures and Algorithms" << endl;
    cout << "My Birthday is on " << birthday << ". And my motto/motivation in life is " << motto << endl;
    
    return 0;
    
} 
