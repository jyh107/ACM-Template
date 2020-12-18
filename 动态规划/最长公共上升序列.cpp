
int f[100005],ma[100005],b[100005],a[100006];
{
  int n;
  cin>>n;
  f[0]=0; int len=0;
  frr(i,1,n){cin>>a[i]; ma[a[i]]=i;}
  frr(i,1,n){cin>>b[i]; f[i]=-100;}
     frr(i,1,n)
     {
         int l=0,r=len,mid;
         if(ma[b[i]]>f[len]) f[++len]=ma[b[i]];
         else 
         {
             while(l<r)
             {
                 mid=(l+r)/2;
                 if (f[mid]>ma[b[i]])r=mid;
                 else l=mid+1;
             } 
         }
         f[l]=min(ma[b[i]],f[l]);
     }         
cout<<len;
}
