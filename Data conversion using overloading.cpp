#include <iostream>
#include<math.h>
using namespace std;
class streling
{
    int pnd,sh,pen,round;
    public:
     streling()
     {pnd=0;sh=0;pen=0;}
     streling(int x,int y,int z)
     {pnd=x;sh=y;pen=z;}
     streling(double d)
     {
      int t;
      t=round((d-(int)d)*240);
      pnd=(int)d;
      sh=t/12;
      pen=t%12;
      }
      operator double ()
      {double d=0;
       d=(pnd*20*12+sh*12+pen)/240.0;
       return d;
      }
       streling operator +(streling m)
       {double a,b,c;
        streling t;
        a=streling(pnd,sh,pen);
        b=m;
        c=a+b;
        t=c;
        return t;}
        void show()
        {cout<<pnd<<"."<<sh<<"."<<pen;}
};

int main() {
 streling s(5,2,8);
 double d;    
 d=s;
 cout<<"\n streling format ";
 s.show();
 cout<<"\n equal decimal format "<<d;
 streling t;
 double e= 5.1333333;
 t=e;
 cout<<"\n decimal format "<<e;
 cout<<"\n equal streling format ";
 t.show();
 streling a(7,5,21),b(2,4,3),c;
 cout<<"\n A: ";a.show();
 cout<<"\n B: ";b.show();
 c=a+b;
 cout<<"\n summation ";
 c.show();
    return 0;
}
