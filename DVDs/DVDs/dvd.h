#ifndef DVD_H_INCLUDED
#define DVD_H_INCLUDED
#include <iostream>
using namespace std;
#define NULL 0

struct DVDs
{
    long dvdNumber;
    char dvdName[40];
    DVDs* Next;
};

class ListofDVDs
{
private:
    int count;

public:
    DVDs* Head;
    ListofDVDs();
    {
		count=0;
		Head=NULL;
	}
	int Getcount()
	{
	    return count;
	}
int Add(DVD *NewDVD)
{
		DVD *Sample = new DVD;
		Sample          = NewDVD;
		Sample->Next    = Head;
		Head            = Sample;
		return count++;
}
DVD *Retrieve(int myVal)
	{
		DVD *Current = Head;
		for(int i = getCount() - 1; i > myVal && Current != NULL; i--)
		{
			Current = Current->Next;
		}
		return Current;
	}
bool Delete()
	{
		if( Head == NULL )
		{
			cout << "The list is empty\n";
			return false;

		}
		else
		{
			DVD *Current;
			Current = Head->Next;
			Head->Next = Current->Next;
			count--;
			return true;
		}
	}
};



#endif // DVD_H_INCLUDED
