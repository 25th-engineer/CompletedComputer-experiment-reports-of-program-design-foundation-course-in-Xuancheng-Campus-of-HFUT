#include "_set.h"

int main()    //测了几次感觉没毛病
{
    int n;
    std::cin>>n;
	_set s1(n),s2(n);
	for(int i=0;i<n;i++)
	{
		_add(s1,i);
		_add(s2,i+3);
	}
	std::cout<<"s1:\n";
	s1.display(s1);
	std::cout<<std::endl;

	std::cout<<std::endl;
	std::cout<<"s2:\n";
	s2.display(s2);

	std::cout<<"\n\n";
	_set s3=_union(s1,s2);
	s3.display(s3);

	std::cout<<"\n\n";
	_set s4=_intersection(s1,s2);
	s4.display(s4);

	std::cout<<"\n\n";
	_del(s1,8);
	s1.display(s1);

	std::cout<<"\n\n";
	_judge(s1,8);

	std::cout<<"\n";
	_judge(s2,5);

	std::cout<<"The screen will be closed in 60s."<<std::endl;
    Sleep(1000*60);
    return 0;
}
