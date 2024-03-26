#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(0));

  // I put quotes I know to this shit array of quotes.
  const string quotes[4] = { "Inspiration comes from within yourself, one has to be positive. When your positive, good things happen.", "To love and to be loved is to feel the sun from both sides.", "Love understands love; it needs no talk.", "Happiness is not by chance, but by choice" };

  // Randomize the quotes and print it to the console (if compiled)
  string word = quotes[rand() % 4];
  cout << word << endl;
  
  return 0;
}
