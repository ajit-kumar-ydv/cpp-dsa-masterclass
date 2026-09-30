#include<iostream>
using namespace std;
class Fraction{
public:
  int num;
  int den;
  Fraction(int num,int den){
    this->num = num;
    this->den = den;
    simplify();
  }
  void add(Fraction fr){
    this->num = num * fr.den + fr.num * den;
    this->den = den * fr.den;
    simplify();
  }
  void multiply(Fraction f){
    this->num = num * f.num;
    this->den = den * f.den;
    simplify();
  }
  void divide(Fraction f){
    this->num = num * f.den;
    this->den = den * f.num;
    simplify();
  }
  void subtract(Fraction f){
    this->num = num * f.den - den * f.num;
    this->den = den * f.den;
    simplify();
  }
  void simplify(){
    int hcf = gcd(num, den);
    num /= hcf;
    den /= hcf;
  }
  int gcd(int a,int b){
    if(a==0)
      return b;
    return gcd(b % a, a);
  }
  void print(){
  cout << num << "/" << den << endl;
  }
  Fraction(){//default constructor

  }
};


int main(){
  Fraction f1;
  f1.num = 5;
  f1.den = 8;
  Fraction f2(1, 8);
  f1.print();
  f1.add(f2);
  f1.print();
}