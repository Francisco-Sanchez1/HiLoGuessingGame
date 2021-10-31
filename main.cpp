
#include <iostream>
#include <string>
using namespace std; 


int main() 
{
  int n;
  
  cout << "Let’s play a Number Guessing Game!  What is the highest possible value of a number you might pick? (Choose n) "; 
  cin >> n;
  cin.ignore();
  cout <<"\nCool, you picked " << n <<". Now please think of a number from 1 to " << n << " and write it down, then press ENTER and we’ll play.\n\n";
  cin.get();
  
  int l = 1;
  int r = n;
  string ans;
  int counter = 1; 
  bool done = false;

  
  while(!done)
  {
    int m = l + (r-l) / 2;
    cout << "Is you number " << m << "? ";
    getline(cin, ans);  

    if(ans == "Too low" || ans == "too low")
    {
     l = m + 1;
     counter++;
     
     
    }
    if(ans == "Too high"|| ans == "too high")
    {
      r = m - 1;
      counter++;
    }
    if(ans == "Yes" || ans =="yes")
    {
      cout << "Awesome, I got the answer in " <<counter<<" guesses.  I’m a super smart program.";
      done = true;
    }
  }

cout << "hey frontera devs" << endl;
}
