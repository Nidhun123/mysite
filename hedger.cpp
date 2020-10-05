

#include <iostream> 
#include <iterator> 
#include <algorithm> 
#include <map> 
#include <cmath>  
using namespace std; 
  
int main() 
{ 
  
    int N,K,i,m,j,b;
    float  A,pr[100],p[100],c[100],d,e,profit=0;
   
    
  
   
  scanf("%d %d %f",&N,&K,&A);
  for(i=0;i<N;i++){
     scanf("%f",&p[i]);
     
  }
  for(j=0;j<N;j++){
     scanf("%f",&pr[j]);
     c[j]=pr[j];
     
  }
  sort(c, c+N);
  
    for(j=N-1;j>0;j--){
    
     int elem = c[j];

	auto itr = find(pr, pr + N, elem);

	b=distance(pr, itr);
	e=pr[b];
	d=p[b];
    for(m=1;m<=K;m++){
        if(A>0){
            A=A-d;

            profit=profit+((d*e)/100) ;

        }
        else
            break;
    }
    if(A<=0)
        break;
     
  }
  cout << llround(profit) ;
 

}