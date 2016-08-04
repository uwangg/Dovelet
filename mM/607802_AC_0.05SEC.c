main(){
	int a[9],i;
	for(i=0;i<7;i++)
		scanf("%d",&a[i]);
	for(i=1;i<7;i++){
		if(a[i]<=a[i-1]){
			a[7]=a[i];
			a[i]=a[i-1];
			a[i-1]=a[7];}
	}
	printf("%d ",a[6]);
		for(i=1;i<7;i++){
		if(a[i]>=a[i-1]){
			a[7]=a[i];
			a[i]=a[i-1];
			a[i-1]=a[7];}
	}printf("%d",a[6]);
}