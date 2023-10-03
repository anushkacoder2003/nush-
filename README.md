#include<iostream>
using namespace std;
class Cuboid{
double l=3.9;
double b=4.4;
double h=4.66;
public:
double volume(){
 double vol=l*b*h;
return vol;
}
};
int main(){
 Cuboid c;
  cout<<c.volume();
  return 0;
}

