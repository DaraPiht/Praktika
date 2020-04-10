#include <iostream>
using namespace std;

bool map[6][6] = {
  // А Б В Г Д Е
    0,1,1,0,0,0,// A
    0,0,0,1,0,0,// Б
    0,0,0,1,1,1,// В
    0,0,0,0,1,0,// Г
    0,0,0,0,0,0,// Д
    0,0,0,0,1,0,// Е
};

int calcPath(int from, int to) {
  if(from==to)
      return 1;
    int sum=0;
    for(int i=0;i<6;i++)
    {
        if(map[from][i])
            sum+=calcPath(i,to);
    }
    return sum;
}

int main()
{
  cout<< calcPath(0,3);

}
