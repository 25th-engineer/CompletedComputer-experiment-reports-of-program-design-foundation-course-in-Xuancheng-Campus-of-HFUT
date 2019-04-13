// _set.cpp: implementation of the _set class.
//
//////////////////////////////////////////////////////////////////////

#include "_set.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

_set::_set()
{

}

_add(_set &s,int n)
{
	s.p[s._size++]=n;
}

_del(_set &s,int n)
{
    printf("After deleted %d,the elements of the operated set include:\n",n);
	int index;
	for(int i=0;i<s._size;i++)
		if(s.p[i]==n)
			index=i;
	for(int j=index;j<s._size;j++)
	{
		s.p[j]=s.p[j+1];
	}
	s._size--;
}

bool _judge(_set &s,int n)
{
	for(int i=0;i<s._size;i++)
		if(s.p[i]==n)
        {
            printf("%d is in the operated set.\n",n);
			return true;
        }
    printf("%d is not in the operated set.\n",n);
	return false;
}

_set _union(_set &s1,_set &s2)//求并集
//_set _union(_set &s1,_set &s2)//求并集
{
	_set s3(s1._size+s2._size);
	for(int i=0;i<s1._size;i++)
		s3.p[s3._size++]=s1.p[i];
	for(int j=0;j<s2._size;j++)
	{
	    int index=0;
	    for(;index<s2._size;index++)
            if(s3.p[index]==s2.p[j])
			//continue;
                break;
        if(index==s1._size)
        {
            s3.p[s3._size++]=s2.p[j];
        }
	}
	std::cout<<"The union of sets:"<<std::endl;
	return s3;
}

_set _intersection(_set &s1,_set &s2)
//_set _intersection(_set &s1,_set &s2)
{
	_set s3(s1._size+s2._size);
	int bigger;
	if(s1._size>s2._size)
		bigger=s1._size;
	else
		bigger=s2._size;
	for(int i=0;i<bigger;i++)
	{
		for(int j=0;j<bigger;j++)
		{
			if(s1.p[i]==s2.p[j])
				s3.p[s3._size++]=s1.p[i];
		}
	}
	std::cout<<"The intersection of sets:"<<std::endl;
	return s3;
}

_set::~_set()
{
	delete []p;
	std::cout<<"The destruction has been called"<<std::endl;
}

_set::_set(int n)
{
	p=new int[n];
	_size=0;
}

_set::display(_set &s)
{
    for(int i=0;i<s._size;i++)
    {
        std::cout<<s.p[i]<<" ";
        if((i+1)%4==0)
            std::cout<<std::endl;
    }
}
