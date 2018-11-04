#include<iostream>
using namespace std;

class OPerator
{
    public:
       int num;
       OPerator();
       OPerator(int);

       OPerator operator-(OPerator);

};

	OPerator::OPerator()
	{}
	OPerator::OPerator(int a)
	{
    	num = a;
	}
	OPerator OPerator::operator-(OPerator op)
	{
    	OPerator bp;
    	bp.num = num - op.num;
    	return (bp);
	}

int main()
{
   OPerator p(34);
   OPerator s(21);
   OPerator c;

   c = p-s;
   cout << c.num << endl;
   
   return 0;

}

