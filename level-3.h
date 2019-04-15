  struct stu{
    int score;
    char name[10];
    char sc[10];
    stu()
    {

    }


};
int n;

typedef struct stu era1;
//era1 et[4];
 // struct stu a1[6];
void bsort(struct stu bir[])
{   era1 t;
	//int l,m;
	for(int i=0;i<n;i++)
	{

		for(int j=i+1;j<n;j++)
		{
			if(bir[i].score<bir[j].score)
			{
				t=bir[i];
				bir[i]=bir[j];
				bir[j]=t;

			}
		}
	}
}
/*int main()
{
    char esob[10];
    int y12;
 FILE *ptr1 = fopen("ice567.txt","a");
      scanf("%s %d",&esob,&y12);
      fprintf(ptr1,"%s %d\n",esob,y12);
          fclose(ptr1);
    // fprintf(ptr1,"%d\n",n);
    //fclose(ptr1);

    FILE *ptr = fopen("taxy.txt","r");
    fscanf(ptr,"%d\n",&n);
    n++;
    printf("%d\n",n);
    fclose(ptr);
   // *ptr = fopen("taxy,txt","w");
 FILE *ptr2 = fopen("taxy.txt","w");
     fprintf(ptr2,"%d\n",n);
     fclose(ptr2);

FILE *ptr4=fopen("ice567.txt","r");
  for(int i=0;i<n;i++)
  {
//printf("hejkfhdkgh");
 fscanf(ptr1,"%s %d\n",&a1[i].name,&a1[i].score);
 // printf("%s %d\n",a1[i].name,a1[i].score);
}
  bsort(a1);
for(int i=0;i<n;i++)
{
printf("%s %d\n",a1[i].name,a1[i].score);

}
// fprintf(ptr1,"%d\n",n+1);
fclose(ptr4);
    fclose(ptr1);
 //fclose(ptr);

*/