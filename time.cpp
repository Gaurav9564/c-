#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    time_t time_ptr; 
    time_ptr = time(NULL); 
  
    // Get the localtime 
    tm* tm_local = localtime(&time_ptr); 
  
    cout << "Current gaurav local time is = "
         << tm_local->tm_hour << ":"
         << tm_local->tm_min << ":"
         << tm_local->tm_sec; 
  
    return 0; 
} 
