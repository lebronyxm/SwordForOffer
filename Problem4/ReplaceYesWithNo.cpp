#include<iostream>
using namespace std;
//#include<cmath>  // math.h��C���÷�����Ȼ��C++��Ҳ��
// ���ַ����е�yes����no��  ˼·��ֱ����ǰ�����ƣ���󽫶�����������
void Re(char b[], int length)
{
	/* �����ж��ٸ�yes,�������Բ�����һ����������Ϊ�˶�һ�������Ժ��������
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
	*/
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
	
	for(int i=indexnew--;i<length;i++)
	{
		//cout<<b[i]<<endl;
		b[i]=NULL; //NULL
	}
	
	//cout<<b<<endl;
}
int main()
{
	char a[]="yesabcyes";
	Re(a,9);
	//for(int i=0;i<9;i++)
	cout<<a;
	return 0;

}
