//https://www.hackerrank.com/challenges/rectangle-area/problem
#include <iostream>
using namespace std;

class Rectangle{
  public:
  int width; 
  int height;
  void display(){
      cout<<width<<" "<<height<<endl;
  }
    
};
class RectangleArea:public Rectangle{
    public:
    void read_input(){
      cin>>width;
      cin>>height;
    }
    void display(){
        cout<<width*height<<endl;
    }
};

/*
 * Create classes Rectangle and RectangleArea
 */

