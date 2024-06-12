#include<iostream>
overload volume;

int volume(int);
double volume(double, int);
long volume(long, double , int);

main()
{
	cout<<volume(10)<<"\n";
	cout<<volume(2.5 , 8)<<"\n";
	cout<<volume<<(100l, 75,15 )<<"\n";
}


int volume(int s) 
{
	return(s*s*s);
}
double volume( double r, int h)
{
	return(3.14519*r*r*h);
}
long volume( long l , int b, int h )
{
	return(l*b*h);
}
	