const int mod=1e9+7;
ll a[105][105],b,n;
ll ans[105][105]={0};
inline void jzcf1(){  //快速幂里的第一个乘法式子子ans=ans*a
	ll c[105][105]={0};//新矩阵放临时结果
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				c[i][j]=(c[i][j]+ans[i][k]*a[k][j])%mod; //注意膜1e9+7
			}
		}
	}	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ans[i][j]=c[i][j];
		}
	}
}
inline void jzcf2(){//快速幂里的第而个乘法式子子a=a*a
	ll c[105][105]={0};
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				c[i][j]=(c[i][j]+a[i][k]*a[k][j])%mod;
			}
		}
	}	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=c[i][j];
		}
	}
}
int main(){
    cin>>n>>b;   
    for(register int i=1;i<=n;i++)
	  	for(register int j=1;j<=n;j++)
		    cin>>a[i][j];
	for(register int i=1;i<=n;i++)ans[i][i]=1; //把ans初始化成单位矩阵
	while(b){  
		if(b&1) jzcf1();//矩阵乘法
		   jzcf2();
		   b>>=1;
	}
}
