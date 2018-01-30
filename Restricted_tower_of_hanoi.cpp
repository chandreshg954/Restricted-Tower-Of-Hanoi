#include <iostream>
using namespace std;
void tower(int a,char source,char des,char aux)
{
    if(a>0)
    {
        tower(a-1,source,des,aux);
        cout << "\nMove disk " << a << " from " << source << " to " << aux << "\n";
        tower(a-1,des,source,aux);
        cout << "\nMove disk " << a << " from " << aux << " to " << des << "\n";
        tower(a-1,source,des,aux);
        return;
    }
}
int main()
{
    int n;
  cout << "\n Enter the no. of disks:";
  cin >> n;
  if(n<=0)
  {
      cout << "\n Enter sufficient disks to move";
  }
  else
  {
  cout << "\nSequence of moves:\n";
  tower(n,'A','C','B');
  }
  return 0;
}
