
#include <stdio.h>
#include <string.h>

struct fr{
	int u,d;
};


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}


struct fr add(struct fr s1,struct fr s2){
	struct fr T;
	//T.d=s1.d*s2.d;
	T.d=s1.d*s2.d/gcd(s1.d,s2.d);
	T.u=s1.u*T.d/s1.d+s2.u*T.d/s2.d;
	return T;
}

int main (){
	//struct fr F[20]={{1,2},{1,3}},T;
	int i,n;
	struct fr F[20],SUM;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d/%d",&F[i].u,&F[i].d);
	}
	SUM= add( F[0],F[1]);
	for(i=2;i<n;i++){
		SUM=add(SUM,F[i]);
	}
	printf("%d/%d",SUM.u,SUM.d);
	return 0;
} 



/*
#include <stdio.h>
#include <math.h>
struct point {
	float x,y;
};

float distance (struct point s1,struct point s2){
	float ans;
	ans=sqrt((s1.x-s2.x)*(s1.x-s2.x)+(s1.y-s2.y)*(s1.y-s2.y));
	return ans;
}

int main(){
	struct point s1,s2;
	scanf("%f %f %f %f",&s1.x,&s1.y,&s2.x,&s2.y);
	printf("%f\n",distance(s1,s2));
	return 0;
}*/