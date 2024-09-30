#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
cout << "Welcome to time and date practice!" << endl;

// Get the current time
time_t now = time(0);

// Convert to my local system time.
char* pCtime = ctime(&now);
cout << "My system time is: " << pCtime << "\n" << endl;

time_t currentTime = time (0);

tm* localTime = localtime (&currentTime);

cout << "Arrival date is: " << (1900 + localTime->tm_year) << "-" << setw(2) << setfill('0') << (localTime->tm_mon + 1) << "-" << setw(2) 
<< setfill('0') << localTime->tm_mday << endl;


return 0;











}