# include <iostream>//largest
using namespace std;
class E;class D;class C;class B;
class A {
 int a;
 public:
 void input1(){
  cout<<"Enter a\n";
  cin>>a;
 }
 void largest(B,C,D,E);
};
class B{
int b;
public:
void input2(){
 cout<<"Enter b\n";
 cin>>b;
}
friend void A::largest(B b1,C,D,E);
};
class C{
int c;
public:
void input3(){
 cout<<"Enter c\n";
 cin>>c;
}
friend void A::largest(B b1,C c1,D,E);
};
class D{
int d;
public:
void input4(){
 cout<<"Enter d\n";
 cin>>d;
}
friend void A::largest(B b1,C c1,D d1,E);
};
class E{
int e;
public:
void input5(){
 cout<<"Enter e\n";
 cin>>e;
}
friend void A::largest(B b1,C c1,D d1,E e1);
};

void A::largest(B b1,C c1,D d1,E e1){
if(a>b1.b && a>c1.c && a>d1.d && a>>e1.e){
  cout<<"A is largest\n";
}
else if(b1.b>a && b1.b>c1.c && b1.b>d1.d && b1.b>e1.e){
  cout<<"B is largest\n";
}
else if(c1.c>a && c1.c>b1.b && c1.c>d1.d && c1.c>e1.e){
  cout<<"c is largest\n";
}
else if(d1.d>a && d1.d>b1.b && d1.d>c1.c && d1.d>e1.e){
  cout<<"D is lrgest\n";
}
else{
  cout<<"E is largest\n";
}
}
int main() {
   A ob1;B ob2;C ob3;D ob4;E ob5;
   ob1.input1();
   ob2.input2();
   ob3.input3();
   ob4.input4();
   ob5.input5();
   ob1.largest(ob2,ob3,ob4,ob5);
  return 0;
}