#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

double high[30];
double low[30];
double snow[30];

int main()
{
  ifstream wfile;
  wfile.open("weather.txt");
  for (int i = 0; i <= 30; i++)
  {
    wfile >> high[i];
    wfile >> low[i];
    wfile >> snow[i];
  }

  //daily change in snow depth
  for (int i = 0; i <= 30; i++)
  {
    double day1 = snow[0];
    double previousday;
    if (i == 0)
    {
      cout << "day 1, + " << snow[i];
    }
    else
    {
      cout << "Snowchange: " << snow[i] - previousday << endl;
    }
    previousday = snow[i];
  }
  double topa, topb = 0;
  //highest and lowest recorded temp
  for (int i = 0; i <= 30; i++)
  {
    double a = high[i];
    double b = low[i];

    if (a > topa)
    {
      topa = a;
    }
    if (b < topb)
    {
      topb = b;
    }
  }
  cout << "Highest temp: " << topa << endl
       << "Lowest temp: " << topb << endl;

  //avg temp
  double highsum = 0;
  double lowsum = 0;
  for (int i = 0; i <= 30; i++)
  {
    highsum += high[i];
    lowsum += low[i];
  }
  cout << "Average high temp: " << highsum / 30 << endl
       << "Average low temp: " << lowsum / 30 << endl;
}
