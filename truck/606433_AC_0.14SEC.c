main(){int a[3],i;for(i=0;i<3;i++)scanf("%d",&a[i]);for(i=0;i<3;i++){if(a[i]<169){printf("CRASH %d",a[i]);break;}if(i==2)printf("NO CRASH");}}