#include <iostream>
#include <cstdio>
#include <windows.h>

using namespace std;

class exp3
{
public:
	exp3(int);
	exp3(const exp3&){++obj_num;};
	~exp3();
	static int get_obj_num();
	int get_number();
private:
	static int obj_num;
	int number;
};

int exp3::obj_num =0;         //这里的int不能少

exp3::exp3(int n)
{
	number=n;
	++obj_num;
}

exp3::~exp3()
{
    --obj_num;
    cout<<"The destructor has been called."<<endl;
}

int exp3::get_number()
{
	return number;
}

int exp3::get_obj_num()
{
   return obj_num;
}

int main()
{
    freopen("x1.out","w",stdout);
	exp3 obj1(3);
	cout<<"obj1.number = "<<obj1.get_number()<<endl;
	cout<<"Now obj_num = "<<exp3::get_obj_num()<<endl;
	cout<<endl;

	exp3 obj2(obj1);
	cout<<"obj2.number = "<<obj2.get_number()<<endl;
	cout<<"Now obj_num = "<<exp3::get_obj_num() <<endl;
	cout<<endl;

	exp3 obj3=obj1;
	cout<<"obj3.number = "<<obj3.get_number()<<endl;
	cout<<"Now obj_num = "<<exp3::get_obj_num()<<endl;
	cout<<endl;

	exp3 *obj4=new exp3(6);
	cout<<"obj4.number = "<<(*obj4).get_number()<<endl;
	cout<<"Now obj_num = "<<exp3::get_obj_num()<<endl;
	cout<<endl;

	delete obj4;
	cout<<"Now obj_num = "<<exp3::get_obj_num()<<endl;
    printf("***********************************************************\n");

	for(int i=0;i<20;i++)
 	{
 	    exp3 obj5(i+19);
	 	printf("obj%d.number = %d\n",i+5,i+19);
 		printf("Now obj_num = %d\n",exp3::get_obj_num());
 		printf("\n");
    }
    printf("***********************************************************\n");

    exp3 *obj6;
    for(int i=0;i<20;i++)
 	{
 	    obj6=new exp3(i+19);
	 	printf("obj%d.number = %d\n",i+25,i+26);
 		printf("Now obj_num = %d\n",exp3::get_obj_num());
 		printf("\n");
    }
    printf("***********************************************************\n");

    for(int i=0;i<20;i++)
 	{
 	    exp3 *obj7=new exp3(i+19);
	 	printf("obj%d.number = %d\n",i+45,i+29);
	 	delete obj7;
 		printf("Now obj_num = %d\n",exp3::get_obj_num());
 		printf("\n");
    }
    cout<<"The screen will be closed in 60 seconds.\n";
    Sleep(1000*60);
	return 0;
}
