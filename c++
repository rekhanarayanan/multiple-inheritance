#include<iostream.h>
#include<conio.h>
class family
{
 char f,m,b,g;
 public:
 void getdata1()
 {
 cout<<"enter the name of father and mother"<<endl;
 cin>>f>>m;
 cout<<"enter the name of girl and boy"<<endl;
 cin>>g>>b;
 }
 };
 class iris
 {
   char c1,c2;
   public:
   void getdata2()
   {
    cout<<"enter the colour 1"<<endl;
    cin>>c1;
    cout<<:enter the colour 2"<<endl;
    cin>>c2;
    if(c1==c2)
   {
  cout<<"the child is male amd has an blue coloured iris"<<endl;
  }
  else
  {
    cout<<"The male child inherits its mother and female child inherits her father"<<endl;
    }
    };
    class total: class family, class iris
    {
       char fn,f;
       char add,c;
       void getdata3()
       {
        cout<<"enter the name of father"<<endl;
        cin>>f;
        cout<<"enter the name of child"<<endl;
        cin>>c;
        cout<<"enter the address"<<endl;
        cin>>add;
        }
        void calculate()
        {
          fn=f+c;
          cout<<"the name of child is"<<fn<<endl;
          }
          };
          int main()
          {
            totalt1;
            t1.getdata1();
            t1.getdata2();
            t1.getdata3();
            t1.calculate();
          getch();
          return (0);
          }
