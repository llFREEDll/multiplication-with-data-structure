/*
SIERRA MENDOZA ALFREDO
10 DE OCTUBRE DE 2018
PROGRAMA PARA MULTIPLICAR NUMEROS GRANDES
*/
#include<iostream>
#include<stack>
#include<string>
#include <cstdlib>
#include<queue>
using namespace std;

main()
{
	stack<int> p1,p2,p3,p4,p5,p6,p7,p8;
	queue<int> q1,q2,q3,q4;
	string s1,s2,ss1,ss2;
	int i1,i2,i3,i4,i5,i6;
	bool b1=false,b2=false;
	cout<<"::PROGRAMA PARA CALCULAR NUMEROS GRANDES DE DIOS!!!\n"<<"add the first number...!\n x1=";
	cin>>s1;
	for(int c=0;c<s1.length();c++){
	ss1=s1.substr(c,1);//extrae (posicion , cantidad de numeros que quieres extraer a partir de esa posicion)
	if(ss1=="0"||ss1=="1"||ss1=="2"||ss1=="3"||ss1=="4"||ss1=="5"||ss1=="6"||ss1=="7"||ss1=="8"||ss1=="9"){
		i1=atoi(ss1.c_str());//convierte un string a int
		p1.push(i1);
	}
	}
	cout<<"\nadd the second number...!!\n x2=";
	cin>>s2;
	for(int c=0;c<s2.length();c++){
	ss2=s2.substr(c,1);
	if(ss2=="0"||ss2=="1"||ss2=="2"||ss2=="3"||ss2=="4"||ss2=="5"||ss2=="6"||ss2=="7"||ss2=="8"||ss2=="9"){
		i2=atoi(ss2.c_str());
		p2.push(i2);
	}
	}
	cout<<"x1*x2=";
	p3=p1;
	for(;!p2.empty();){
	for(;!p1.empty();){
		i3=p2.top()*p1.top();
		if(b1==false){
			if(i3>=10){
				  q1.push(i3%10);
				  q1.push(i3/10);
				  b1=true;
			}else
			q1.push(i3);
		}else{
			if(i3>=10){
				  i3=q1.back()+i3;
				  q1.back()=i3%10;
				  q1.push(i3/10);
			}else{
				i3=q1.back()+i3;
				if(i3>=10){
					q1.back()=i3%10;
					q1.push(i3/10);
				}
				else{
					q1.back()=i3;
				b1=false;	
				}
			}	
		}
		p1.pop();
		}
		b1=false;
		for(int x=0;x<q1.size()*2;x++)
		q2.push(0);
		q3=q2;
		for(;!q2.empty();)q2.pop();
		for(;!q1.empty();){
			i5=q3.front()+q1.front();
		if(b2==false){
			if(i5>=10){
				  q2.push(i5%10);
				  q2.push(i5/10);
				  b2=true;
			}else{
				q2.push(i5);
		}
		}else{
			if(i5>=10){
				  i5=q2.back()+i5;
				  q2.back()=i5%10;
				  q2.push(i5/10);
			}else{
			i5=q2.back()+i5;
			if(i5>=10){
				q2.back()=i5%10;
				q2.push(i5/10);
			}
			else{
			q2.back()=i5;
			b2=false;
			}
		}	
		}
			q1.pop();q3.pop();
			}
			b2=false;
			p5.push(0);
			p6=p5;
		for(;!p6.empty();){
				  	q1.push(p6.top());
				  	p6.pop();
				  }	
		p1=p3;
		p2.pop();
}
for(;!q2.empty();)
{
	p8.push(q2.front());
	q2.pop();
}
for(;!p8.empty();){
	cout<<p8.top();
	p8.pop();
}
}
