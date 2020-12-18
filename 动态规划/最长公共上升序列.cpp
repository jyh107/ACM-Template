int f[100005],ma[100005],b[100005],a[100006];
int n,ans=0; memset(f,0x3f,sizeof(f)); f[0]=0;
_fora(i,1,n) { cin>>a[i]; ma[a[i]]=i; }
_fora(i,1,n) { cin>>b[i]; }
_fora(i,1,n) {
    int l=0,r=ans;
    if(ma[b[i]]>f[ans]) f[++ans]=ma[b[i]];
    else {
        while(l<r) {
            int mid=(l+r)/2;
            if(f[mid]>ma[b[i]])r=mid;
            else l=mid+1;
        }
    }
    f[l]=min(ma[b[i]],f[l]);
}
cout<<ans;
