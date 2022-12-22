# include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Please enter the ammount: "<<endl;
	cin>>a;
	if(a>2000)
	{
	int b=a/2000;	
	cout<<"2000 * "<<b<<" = "<<2000*b<<endl;
	int c=a-(2000*b);
	int d=c/500;
	cout<<"500  * "<<d<<" = "<<500*d<<endl;
	int e=c-(500*d);
	int f=e/200;
	cout<<"200  * "<<f<<" = "<<200*f<<endl;
	int g=e-(200*f);
	int h=g/100;
	cout<<"100  * "<<h<<" = "<<100*h<<endl;
	int i=g-(100*h);
	int j=i/50;
	cout<<"50   * "<<j<<" = "<<50*j<<endl;
	int k=i-(50*j);
	int l=k/20;
	cout<<"20   * "<<l<<" = "<<20*l<<endl;
	int m=k-(20*l);
	int n=m/10;
	cout<<"10   * "<<n<<" = "<<10*n<<endl;
	int o=m-(10*n);
	int p=o/5;
	cout<<"5    * "<<p<<" = "<<5*p<<endl;
	int q=o-(5*p);
	int r=q/2;
	cout<<"2    * "<<r<<" = "<<2*r<<endl;
	int s=q-(2*r);
	int t=s/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}
else if(a<2000 && a>500)
{
		int d=a/500;
	cout<<"500  * "<<d<<" = "<<500*d<<endl;
	int e=a-(500*d);
	int f=e/200;
	cout<<"200  * "<<f<<" = "<<200*f<<endl;
	int g=e-(200*f);
	int h=g/100;
	cout<<"100  * "<<h<<" = "<<100*h<<endl;
	int i=g-(100*h);
	int j=i/50;
	cout<<"50   * "<<j<<" = "<<50*j<<endl;
	int k=i-(50*j);
	int l=k/20;
	cout<<"20   * "<<l<<" = "<<20*l<<endl;
	int m=k-(20*l);
	int n=m/10;
	cout<<"10   * "<<n<<" = "<<10*n<<endl;
	int o=m-(10*n);
	int p=o/5;
	cout<<"5    * "<<p<<" = "<<5*p<<endl;
	int q=o-(5*p);
	int r=q/2;
	cout<<"2    * "<<r<<" = "<<2*r<<endl;
	int s=q-(2*r);
	int t=s/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}

else if(a<500 && a>200)
{	
	int f=a/200;
	cout<<"200  * "<<f<<" = "<<200*f<<endl;
	int g=a-(200*f);
	int h=g/100;
	cout<<"100  * "<<h<<" = "<<100*h<<endl;
	int i=g-(100*h);
	int j=i/50;
	cout<<"50   * "<<j<<" = "<<50*j<<endl;
	int k=i-(50*j);
	int l=k/20;
	cout<<"20   * "<<l<<" = "<<20*l<<endl;
	int m=k-(20*l);
	int n=m/10;
	cout<<"10   * "<<n<<" = "<<10*n<<endl;
	int o=m-(10*n);
	int p=o/5;
	cout<<"5    * "<<p<<" = "<<5*p<<endl;
	int q=o-(5*p);
	int r=q/2;
	cout<<"2    * "<<r<<" = "<<2*r<<endl;
	int s=q-(2*r);
	int t=s/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}

else if(a<200 && a>100)
{	
	int h=a/100;
	cout<<"100  * "<<h<<" = "<<100*h<<endl;
	int i=a-(100*h);
	int j=i/50;
	cout<<"50   * "<<j<<" = "<<50*j<<endl;
	int k=i-(50*j);
	int l=k/20;
	cout<<"20   * "<<l<<" = "<<20*l<<endl;
	int m=k-(20*l);
	int n=m/10;
	cout<<"10   * "<<n<<" = "<<10*n<<endl;
	int o=m-(10*n);
	int p=o/5;
	cout<<"5    * "<<p<<" = "<<5*p<<endl;
	int q=o-(5*p);
	int r=q/2;
	cout<<"2    * "<<r<<" = "<<2*r<<endl;
	int s=q-(2*r);
	int t=s/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}

else if(a<100 && a>50)
{	
	int j=a/50;
	cout<<"50   * "<<j<<" = "<<50*j<<endl;
	int k=a-(50*j);
	int l=k/20;
	cout<<"20   * "<<l<<" = "<<20*l<<endl;
	int m=k-(20*l);
	int n=m/10;
	cout<<"10   * "<<n<<" = "<<10*n<<endl;
	int o=m-(10*n);
	int p=o/5;
	cout<<"5    * "<<p<<" = "<<5*p<<endl;
	int q=o-(5*p);
	int r=q/2;
	cout<<"2    * "<<r<<" = "<<2*r<<endl;
	int s=q-(2*r);
	int t=s/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}	

else if(a<50 && a>20)
{	
	int l=a/20;
	cout<<"20   * "<<l<<" = "<<20*l<<endl;
	int m=a-(20*l);
	int n=m/10;
	cout<<"10   * "<<n<<" = "<<10*n<<endl;
	int o=m-(10*n);
	int p=o/5;
	cout<<"5    * "<<p<<" = "<<5*p<<endl;
	int q=o-(5*p);
	int r=q/2;
	cout<<"2    * "<<r<<" = "<<2*r<<endl;
	int s=q-(2*r);
	int t=s/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}		

else if(a<20 && a>10)
{
	int n=a/10;
	cout<<"10   * "<<n<<" = "<<10*n<<endl;
	int o=a-(10*n);
	int p=o/5;
	cout<<"5    * "<<p<<" = "<<5*p<<endl;
	int q=o-(5*p);
	int r=q/2;
	cout<<"2    * "<<r<<" = "<<2*r<<endl;
	int s=q-(2*r);
	int t=s/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}		

else if(a<10 && a>5)
{
	int p=a/5;
	cout<<"5    * "<<p<<" = "<<5*p<<endl;
	int q=a-(5*p);
	int r=q/2;
	cout<<"2    * "<<r<<" = "<<2*r<<endl;
	int s=q-(2*r);
	int t=s/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}	

else if(a<5 && a>2)
{
	int r=a/2;
	cout<<"2    * "<<r<<" = "<<2*r<<endl;
	int s=a-(2*r);
	int t=s/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}	

else if(a<2 && a>1)
{
	int t=a/1;
	cout<<"1    * "<<t<<" = "<<1*t<<endl;
}	

else{
	cout<<"Enter valid ammount.";
}
	
	return 0;
}