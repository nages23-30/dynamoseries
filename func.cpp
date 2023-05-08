// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class cricket{
 public:
  void score(int t){
     int dhoni=50,ruturaj=34,convey=28,pathirana=4,jadeja=3;
     int theekshna=1;
       int total=t;
      cout<<"--------------------------------------------"<<endl;
      cout<<"csk scorecard"<<endl;
      cout<<"--------------------------------------------"<<endl;
      cout<<"Dhoni"<<"  "<<dhoni<<" "" "<<"22balls"<<" "" "" "" "" "" "<< endl;
      cout<<"ruturaj"<<"  "<<ruturaj<<" " " "<<"24balls"<<" "" "" "" "" "" "<<endl;
      cout<<"convey"<<"  "<<convey<<" " " "<<"9balls"<<" "" "" "" "" "" "<<endl;
      cout<<" csk total score is"<<"   "<<total<<" "<<" runs in 20 overs"<<endl;}
      void score(int,float);
      
};
 void cricket:: score(int t,float u){
     int jaiswal=67,buttler=15,jurel=8,chahal=2,bolt=3;
     int ashwin=2;
       int total=t;
       float over=u;
      cout<<"--------------------------------------------"<<endl;
      cout<<"RR scorecard"<<endl;
      cout<<"--------------------------------------------"<<endl;
      cout<<"yesyesv"<<"  "<<jaiswal<<" "" "<<"35balls"<<" "" "" "" "" "" "<< endl;
      cout<<"buttler"<<"  "<<buttler<<" " " "<<"4balls"<<" "" "" "" "" "" "<<endl;
      cout<<"jurel"<<"  "<<jurel<<" " " "<<"15balls"<<" "" "" "" "" "" "<<endl;
      cout<<" RR total score is"<<"   "<<total<<" "<<" runs in "<<u<< "overs";}
int main() {
  cout<<"Today ipl scorecard"<<endl;
  cout<<"csk vs RR"<<endl;
  cricket c;
  c.score(180);
  c.score(160,18.5);
    return 0;
}