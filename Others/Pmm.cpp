#include <iostream>

using namespace std;

class MPS{
  public:
  long int MpSpendingLmit = 100000;
};

class Ministers:public MPS{
  public:
  long int MinSpendingLmit = 1000000;
  
};

class PM: public Ministers{
  public:
  long int PMSpendingLmit = 10000000;
};

class Commisioner:public Ministers {
  public:
  void arrest(long int spend){   
    if(spend > MpSpendingLmit){
      cout<<"Arrest MPS";
    }
    else if(spend > MinSpendingLmit){
      cout<<"Arrest Ministers";
    }
    else{
      cout<<"You are save";
    }
  }
};

int main()
{
  Commisioner c;
  c.arrest(130000);
  return 0;
}