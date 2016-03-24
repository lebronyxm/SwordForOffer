using namespace std;
class juli {
public:
    int hammingWeight(unsigned int n) 
{
    int kk,c,s = 0;
    for (c = 0; c < 32 ;c++)
    {
        kk = n >> c;
        if (kk & 1)
            s++;
    }
    return s;
    }
};  //一定要注意类最后的那个分号不能少


class yunsuan 
{
public:
	double jia(double x,double y)
	{ 
	   x=x+y;
	   return x;
	}
	double jian(double x,double y)
	{  
	   x=x-y;
	   return x;
	}

};

int only(int x,int y){
	int s;
	s=x+2*y;
	return s;
};  //这个分号加不加好像都行。
void Re(char b[], int length)
{
	if(b==NULL || length<=0)
		return;
	int ori=0;
	int yes=0;
	int i=0;
	while(b[i]!='\o'){
		++ori; 
		//cout<<i<<endl;
		if(b[i]=='y'&&b[i+1]=='e'&&b[i+2]=='s')
		{	++yes;
		    i=i+3;
		}else{
			i++;}
	}
	int newlength=length-yes;
	int  indexori=0;
	int  indexnew=0;

	while(indexori<length)
	{
		//cout<<b[indexori]<<endl;
		if(b[indexori]=='y'&&b[indexori+1]=='e'&&b[indexori+2]=='s')
		{
			b[indexnew++]='n';
			indexori++;
			b[indexnew++]='o';
			indexori++;
			b[indexnew]=b[indexori+1];
			indexori++;
		}
		else{
			
			b[indexnew++]=b[indexori++];
		}
	}
	
	for(int i=newlength;i<length;i++)
	{
		//cout<<b[i]<<endl;
		b[i]=NULL; //NULL
	}
	
	//cout<<b<<endl;
};