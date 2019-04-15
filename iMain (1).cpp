# include "iGraphics.h"
#include "level-3.h"
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
//  FILE *ptr = fopen("fle.txt","r");
   era1 a1[4];
   
  char sera[10];
		
  char filestring[10];

  int bgx=0,bgy=0,kopal=0,sp=5,sp1=5,fla=0,  to=200, p1=0,  gini=0;                                    ///background pic

 int speedoffirex=0,speedoffirey=0,countghotona=0;

 int len=5,i=0,count1=0, count2=0,gl=1,bsc1,aj[100],fga=1,fgb=1,stop11=0,stop2=0,stop3=0;

 int mode=0,fg=0;
 char sr1[10];
 char ab[10],bc[100],ef[100],gh[100],ij[10];

 int logo,menu,bg1,bg2,bg3,bg4,play,instruction;

 int nagashi[16],naga_x=240,naga_y=200-30,wiz,ex;

 int  tma, tma_x=920, tma_y=170-30, tmb, tmb_x=1400, tmb_y=180+30, dead1=1, dead2=1,tma2,tma3,tma4,tma5,tma6,tma7,tma8, a11[9],en=0,a12[9],tma_x1,tmb_x1;                  ///enemy variable

  int fire1,fr1_x,fr1_y=naga_y +130,y11=0 , firemove[7],nagav=0;            /********************* hero varible *****************************/

 int stb=100,chr=0,fr1=5,fr2=5,fulcopy,fmspeed=5,fm1speed=5,fm=tma_x+80,herocount=0,herodead=1,fm1 = tmb_x+80,j=0,fr2_x,fr3_x,fr2_y,fire2,  yfire=0,  fr , fr3=1,fr3_y=naga_y,fr4=1,fr4_x,fr4_y;

 int rd_x=1400,rd_y=590+10,gd_x,gd_y,rd[6],gd[5],rdindex=0,rdflag=0,bgx2=bgx+2000,bgy2=bgy,rdfirex=rd_x,rdfirey=rd_y,countrd=0,counthero=0;
	
 int skel[10],sklhnd[5],bd[11],sklx=1028,skly=10,sklindex=0,naga_x1=180,naga_y1=10,stop1=0,countrd1=0,hu=0,xchng=100,enemy1=1,tmaflag=0,tmbflag=0;
 
 int random_integer = rand();

 int indexd=1,dflag,dindex=1,flagd=0;

 int al_a[8],al_b[12],al_c[7],al_d[6],al_ax=900,al_ay=100,al_bx=1300,al_by=100,al_cx=1200,al_cy=100,al_dx=1050,al_dy=100, al_aflag, al_bflag, al_cflag,  al_dflag,   al_aindex=0 ,  al_bindex=0 , al_cindex=0 ,  al_dindex=0,al_acnt,al_bcnt,al_ccnt,al_dcnt;

 int al_adead=1,al_bdead=1,al_cdead=1,al_ddead=1,countrds1=0 ,piri=0,piri2=7,s1=0,current,flagspace2=1,spind2=4;

 int space[6],flagspace=1,spind=0 ,wizard,wix=1400,wiy=250,wiflag,wiind,wifirex=wix+30,wifirey=wiy-30+180,wicnt=0;

 int bird[5],birdx1=800,birdy1=naga_y-10,birdx2=950,birdy2=naga_y-10,birdind=0,flagd1=0,p12=0,to1,er1=1,logo1,logo2,pump,saint;
//struct stu a1[6];
  char str[100], str2[100],er[100]; 
  void wifire()
  {   if(stb==6)
  {
	  wifirex-=10;
	  if(wifirex<0||naga_x>wifirex)
	  {

		  wifirex=wix;
		  counthero++;

	  }

	birdx1-=15;
	birdx2-=15;
	if(birdx1<0||naga_x>birdx1)
	{
		birdx1=790;
		birdx2=900-30;
		counthero++;

	}
	


	birdind++;
	if(birdind>4)
	{
		birdind=0;


	}







  }

  }



 void firing()
 {
	 if(countghotona<4)
	 {

	 fm1=fm1-90;
	 fm-=90;
	 if(fm<naga_x)
	 {
		 fm=tma_x+10;
		 if(kopal%7==0)
		 counthero++;


	 }
	  if(fm1<naga_x)
	 {
		 fm1=tmb_x+10;
		  if(kopal%7==0)
		 counthero++;

		//  counthero++;


	 }


	 }
 }
 void drawTextBox()
{
	iShowImage(0,0,1600,1000,bsc1);
	iSetColor(150, 150, 150);
	iRectangle(50, 250, 250, 30);

}
 void dboxcng()
 {   /*if(flagd1==1)
	 {if(naga_x>1200&&stb==1)
	{
	//	drawTextBox();
		 
		dindex++;
		if(dindex==9)
		{
			
			//stb==4;

		}
	//	dindex++;

	}*/
 

 if(flagspace==1&&stb==5)
 { 

	 spind++;
	 if(spind>5)
	 {

		 flagspace=0;
	 }
 }

 if(stb==6)
 {
	 wix-=10;
	 if(naga_x+400>wix)
	 {
		 wix+=20;

	 }



 }
 if(flagspace2==1&&stb==6)
 {
  spind2--;
	 if(spind2<0)
	 {

		 flagspace2=0;
	 }


 }




 }
 void enemy()
 {  
	 	 if(stb==0)
	 {  if(tmaflag<10)
		 en++;
		 if(en>6)
		 {

			 en=0;
		 }
		 if(tmaflag>9&&tmbflag>9&&kopal%random_integer==0&&countghotona<3)
		 {
			 countghotona++;
			 en=0;
			 ex=0;
			
				 tmaflag=0;
				 tmbflag=0;
				 tma_x=920;
				 tmb_x=1400;
			 
		 }
		
         if(naga_x+200<tma_x)
			 tma_x-=10;
	  }

	 if(stb==0)
	 {
		 ex++;
		 if(ex>6)
		 {

			 ex=0;
		 }
         if(naga_x+200<tmb_x)
			 tmb_x-=10;
	  }
	 
	 
	 
	 if(stb==1)/***************** 1***************************/
 {
	 if(sklindex<9&&countrd1<14)
	 {
	 sklindex++;    /*:::::::::::::::::::::::::::::::::::: skleton :::::::::::::::::::::::::::::::::::::::::::::*/
	 if(sklindex>7)
	 {
		 sklindex=0;
	 }
	 
	 if(sklx-naga_x>10)
	 {
	 sklx-=10;
	
	
	 }
	 else if(naga_x-sklx>10)
	 {

		 sklx+=10;

	 }
	 else 
	 {    hu++;
	     if(hu%23==0)
		  counthero++;

	 }

	 }
	 else
	 {
	 if(countrd1>11)
	 {

		 sklindex=8;
		// countrd++;
		 sklindex++;
	 }

	 }
	 } /************************* 2********************/

	 if(countrd1>14)
	 {

		 countrd1++;
	 }

	 

	 if(stb==5)
 
	 {
	 if(al_acnt<4)/****************** al er morar ********************/
	 {
	 al_aindex++;    /*:::::::::::::::::::::::::::::::::::: alien 1 :::::::::::::::::::::::::::::::::::::::::::::*/
	 if(al_aindex>7)
	 {
		 al_aindex=0;
	 }
	 
	 if(al_ax-naga_x>10)
	 {
	 al_ax-=10;
	
	
	 }
	 else if(naga_x-al_ax>10)
	 {

		 al_ax+=10;

	 }
	 else 
	 {    
		  counthero++;

	 }
	 }

	 
	 if(al_bcnt<6)/****************** al er morar ********************/
	 {
	 al_bindex++;    /*:::::::::::::::::::::::::::::::::::: alien 2 :::::::::::::::::::::::::::::::::::::::::::::*/
	 if(al_bindex>10)
	 {
		 al_bindex=0;
	 }
	 
	 if(al_bx-naga_x>10)
	 {
	 al_bx-=10;
	
	
	 }
	 else if(naga_x-al_bx>10)
	 {

		 al_bx+=10;

	 }
	 else 
	 {    
		  counthero++;
	 }

	


	 }


	  if(al_ccnt<7)/****************** al er morar ********************/
	  {
	 al_cindex++;    /*:::::::::::::::::::::::::::::::::::: alien 3 :::::::::::::::::::::::::::::::::::::::::::::*/
	 if(al_cindex>6)
	 {
		 al_cindex=0;
	 }
	 
	 if(al_cx-naga_x>10)
	 {
	 al_cx-=10;
	
	
	 }
	 else if(naga_x-al_cx>10)
	 {

		 al_cx+=10;

	 }
	 else 
	 {    
		  counthero++;

	 }
	 }



	 }

	 
 



 }

 void mov()
 {
	
	 if(flagd1==1&&stb==1)
	 {if(naga_x>1200&&stb==1)
	{
	//	drawTextBox();
		 
		dindex++;
		if(dindex==9)
		{
			
			stb==5;

		}
	//	dindex++;

	}
 }


 }








 void rdf()
 {
	 rdindex++;          /*:::::::::::::::::::::::::::  dragon function ::::::::::::::::::::::::::::::::::::::*/
	 
	 if(rdindex>4)
	 {
		 rdindex=0;
	 }
	

	 if(rdflag==0)
	 rd_y = rd_y -10;

	 
	 if(rd_y<300&&rdflag==0)
	 {
		// rd_y=590;
		 rdflag=1;
	 }
	 if(rdflag==1)
	 {
		 rd_y=rd_y+10;
		 if(rd_y>590+10)
		 {

			 rdflag=0;
		 }

	 }
	 rdfirex-=80;
	 rdfirey-=30;
	 if(rdfirey<200)
	 {

		 rdfirex=rd_x;
		 rdfirey=rd_y;
	 }

	/* if(flagspace==1&&stb==5)
 {

	 spind++;
	 if(spind>5)
	 {

		 flagspace=0;
	 }
 }
 */



 }
 void file1(char q[10])
 {
   
	 if(gini<1)    /**::::::::::::::::::::::::::::::::::: file ::::::::::::::::::::::::::::::::: */
	 {
//    char esob[10];
    int y12;
	FILE *ptr12 = fopen("wer1.txt","w");

 FILE *ptr1 = fopen("ice567.txt","a");
     // scanf("%s %d",&esob,&y12);
      fprintf(ptr1,"%s %d\n",q,kopal);
          fclose(ptr1);
    FILE *ptr = fopen("taxy.txt","r");
    fscanf(ptr,"%d\n",&n);
    n++;
    printf("%d\n",n);
    fclose(ptr);
 FILE *ptr2 = fopen("taxy.txt","w");
     fprintf(ptr2,"%d\n",n);
     fclose(ptr2);
FILE *ptr4=fopen("ice567.txt","r");
  for(int i=0;i<n;i++)
  { fscanf(ptr1,"%s %d\n",&a1[i].name,&a1[i].score);
}
  bsort(a1);
for(int i=0;i<n;i++)
{
 fprintf(ptr12,"%s %d\n",a1[i].name,a1[i].score);
// fclose(ptr12);
}
 FILE *ptr13 = fopen("wer1.txt","r");
 for(int i=0;i<n;i++)
 {
 fscanf(ptr13,"%s %d\n",&a1[i].name,&a1[i].score);
// fclose(ptr13)
  sprintf(er,"%s %d\n",a1[i].name,a1[i].score);
 // sprintf(er,"%s %d\n",er,aj[12]);

	//iText(800,800-(i+1)*100,er,GLUT_BITMAP_TIMES_ROMAN_24);

  	/*if(i==0)
	iText(800,800,er,GLUT_BITMAP_TIMES_ROMAN_24);

			


    	if(i==1)
	iText(800,700,er,GLUT_BITMAP_TIMES_ROMAN_24);

			if(i==2)
	iText(800,600,er,GLUT_BITMAP_TIMES_ROMAN_24);

				if(i==3)
	iText(800,500,er,GLUT_BITMAP_TIMES_ROMAN_24);


					if(i==4)
	iText(800,400,er,GLUT_BITMAP_TIMES_ROMAN_24);*/
 }
 


fclose(ptr4);
    fclose(ptr1);
	fclose(ptr13);
	fclose(ptr12);
	gini++;
	 }

 
 }
 void jog()
 {

 if(fr1==0)
 {
	 fr1_x+=36;
	 if(fr1_x>1400)
	 {

		fr1_x=naga_x+80;
		 fr1=5;
	 }
	}
 if(fr2==0)

 {
	 fr2_x+=36;
	 if(fr2_x>1400)
	 {

		fr2_x=naga_x+80;
		 fr2=5;
	 }
	

 }



 if(fr3==0)
 {
	 fr3_x+=36;
	 if(fr3_x>1400)
	 {

		fr3_x=naga_x+80;
		 fr3=5;
	 }
	

 }
 if(fr4==0)
 {
	 fr4_x+=36;
	 if(fr4_x>1400+200)
	 {

		fr4_x=naga_x+80;
		 fr4=5;
	 }
	}
 

 if(stb==0)
 {
 if(naga_y>200)
	{
		naga_y = naga_y-15;


	}
 }

 if(stb==1)

 {

	 if(naga_y>10)
	{
		naga_y = naga_y-15;


	}


 }

 if(stb==5)

 {
	 if(naga_y>100)
	{
		naga_y = naga_y-15;
	}

 }

 }
void tup()
{
	if(stb==1&&stop11==0)
	{
		naga_x=200;
		naga_y=10+10;
		stop11=1;

	}

	if(stb==0&&stop2==0)
	{
		naga_x=200;
		naga_y=10+10;
		stop2=1;

	}

   if(stb==5&&stop3==0)
	{
		naga_x=200;
		naga_y=100;
		stop3=1;
		

	}
	
	
	
}
void iDraw()
{



	kopal++;	
	iClear();


	if(stb==100)
	{

		iShowImage(0,0,1600,1000,logo);
		if(logo2==1)
		{

			iShowImage(1000,40,550,400,pump);
		}



	}


	/*if(stb==0||stb==1||stb==5||stb==6)
	{


		iSetColor(250,250,250);
		iFilledRectangle(200-5,700,10,200);
		iSetColor(250,0,0);
		if(200-counthero>=0)
		iFilledRectangle(200-5,700,10,200-counthero);}/*********************** counther0 ****************************/
	      


	



	if(stb==10)
	{
		FILE *ptr7 = fopen("wer1.txt","r");
		FILE *ptr8=fopen("taxy.txt","r");
		fscanf(ptr8,"%d",&n);
       fclose(ptr8);	
	//	bsort(a1);
	   iShowImage(bgx,bgy,1600,1000,to1);
		for(int i=0;i<n;i++)
		{

			fscanf(ptr7,"%s %d",&a1[i].name,&a1[i].score);
			sprintf(er,"%s                                                                                                                                          %d",a1[i].name,a1[i].score);

		if(i==0)
	iText(260,600,er,GLUT_BITMAP_TIMES_ROMAN_24);

    	if(i==1)
	iText(260,383,er,GLUT_BITMAP_TIMES_ROMAN_24);

			if(i==2)
	iText(260,240,er,GLUT_BITMAP_TIMES_ROMAN_24);

				if(i==3)
	iText(260,90,er,GLUT_BITMAP_TIMES_ROMAN_24);


					if(i==4)
//	iText(150,400,er,GLUT_BITMAP_TIMES_ROMAN_24);
		

			if(i==5)
	//iText(800,500,er,GLUT_BITMAP_TIMES_ROMAN_24);

				if(i==6)
	//iText(800,400,er,GLUT_BITMAP_TIMES_ROMAN_24);

					if(i==90)
	iText(800,300,er,GLUT_BITMAP_TIMES_ROMAN_24);

		}
		fclose(ptr7);
		fclose(ptr8);

	}	

 if(stb==4)/******************************* highscore ***************************************/
 {
	drawTextBox();
	if(mode == 1)
	{
		iSetColor(255, 255, 255);
		iText(55, 260, str);
	}

	iText(10, 10, "ENTER YOUR NAME.");
 }

 
	if(stb==0) /*##############################################  stage 1 ###################################################*/
	{




		/*if(stop11==0)
		{
			countrd=0;
			countrd1=0;
			stop11=1;

		}*/
	//	countrd=0;


	
	iShowImage(0,0,1600,1000-100,bg1);
	iShowImage(naga_x,naga_y,180-20,200-40,nagashi[i]);
	
	
	if(fr1==0)/********************** base case for dragom   111  *********************/
	{
		iShowImage(fr1_x,fr1_y,40,45,fire1);
	}

	if(fr2==0)
	{
		iShowImage(fr2_x,fr2_y,40,45,fire1);
	}

	if(fr3==0)
	{
		iShowImage(fr3_x,fr3_y,40,45,fire1);
	}
		if(fr4==0)
	{
		iShowImage(fr4_x,fr4_y,40,45,fire1);
	}
		if(countghotona==3)/*::::::::::::::::::::::: dragom ::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
		{
				 iSetColor(255,0,0);
				 iFilledRectangle(rd_x+100,rd_y+320,100,9);
				 			 iSetColor(255,255,255);
				 iFilledRectangle(rd_x+100,rd_y+320,(countrd+1)*25,9);




     	iRotate(rd_x,rd_y,30);
		iShowImage(rd_x+100,rd_y,300,400,rd[rdindex]);
	   iUnRotate();
	   iShowImage(rdfirex,rdfirey,60,70,fire1);
	 if(fr1_x>rd_x && fr1_x<rd_x+100&& fr1_y>rd_y &&  fr1_y<rd_y+100&&fr1==0)
	{  
		countrd++;
		printf("%d\n",countrd);
		fr1=5;
	}

	 if(fr2_x>rd_x && fr2_x<rd_x+300 && fr2_y>rd_y &&  fr2_y<rd_y+280&&fr2==0)
	{ 
		countrd++;
	fr2=5;
	}
	if(fr3_x>rd_x && fr3_x<rd_x+300 && fr3_y>rd_y &&  fr3_y<rd_y+300&&fr3==0)
	{   countrd++;
		fr3=5;
	}
	if(fr4_x>rd_x && fr4_x<rd_x+300 && fr4_y>rd_y &&  fr4_y<rd_y+300&&fr4==0)
	{   countrd++;
		fr4=5;
		
	}
	if(rdfirex<naga_x)
		{
			rdfirex=rd_x;
			rdfirey = rd_y;
			if(hu%17)
			counthero++;
		}
	
	if(countrd>3)
	{

		countghotona++;

	}	

		}
	/********************************** 2222 **************************************/
    // sprintf(sr1,"%d  %d %d ",countrd,bgx,counthero);
	 		iSetColor(255,0,0);
	//	iText(200,900,sr1,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(250,250,250);
		iFilledRectangle(200-5,700,10,200);
		iSetColor(250,0,0);
		if(200-counthero>0)
		iFilledRectangle(200-5,700,10,200-counthero);

		/*::::::::::::::::::::::::::::: enemy1 :::::::::::::::::::::::::::::::::::*/
		if(tmaflag<10)
		{
							 iSetColor(255,0,0);
				 iFilledRectangle(tma_x,tma_y+280,90,9);
				 			 iSetColor(255,255,255);
				 iFilledRectangle(tma_x,tma_y+280,(tmaflag+1)*10,9);






		iShowImage(tma_x,tma_y,260,380,a11[en]);
        
		iShowImage(fm,tma_y+100,30,80/2,fulcopy);

	//	col(tma_x,tma_y);
   if(fr1_x>tma_x && fr1_x<tma_x+50&& fr1_y<=naga_y+230&&fr1==0&&tmaflag<10)
	{  
		tmaflag++;
		printf("%d\n",countrd);
		fr1=5;
	}
        if(fr2_x>tma_x && fr2_x<tma_x+50&& fr2_y<=naga_y+230&&fr2==0&&tmaflag<10)
	{  
		tmaflag++;
		
		printf("%d\n",countrd);
		fr2=5;
	}
        if(fr3_x>tma_x && fr3_x<tma_x+50&& fr3_y<=naga_y+230&&fr3==0&&tmaflag<10)
	{  
		tmaflag++;
		
		printf("%d\n",countrd);
		fr3=5;
	}
        if(fr4_x>tma_x && fr4_x<tma_x+50&& fr4_y<=naga_y+230&&fr4==0&&tmaflag<10)
	{  
		tmaflag++;
		
		printf("%d\n",countrd);
		fr4=5;
	}
		}
       /*:::::::::::::::::::::::::: enemy 2 ::::::::::::::::::::::::::*/
		
		if(tmbflag<11)
		{
			
						 iSetColor(255,0,0);
				 iFilledRectangle(tmb_x,tmb_y+280,100-10,9);
				 			 iSetColor(255,255,255);
				 iFilledRectangle(tmb_x,tmb_y+280,(tmbflag+1)*10,9);






		iShowImage(tmb_x,tma_y,260,380,a12[ex]);
        
		iShowImage(fm1,tma_y+50,30,80/2,fulcopy);

	//	col(tma_x,tma_y);
   if(fr1_x>tmb_x && fr1_x<tmb_x+50&& fr1_y<=naga_y+230&&fr1==0)
	{  
		tmbflag++;
		
	//	countrd++;

		
		printf("%d\n",countrd);
		fr1=5;
	}
        if(fr2_x>tmb_x && fr2_x<tmb_x+50&& fr2_y<=naga_y+230&&fr2==0)
	{  
		tmbflag++;
		
	//	countrd++;

		
		printf("%d\n",countrd);
		fr2=5;
	}
        if(fr3_x>tmb_x && fr3_x<tmb_x+50&& fr3_y<=naga_y+230&&fr3==0)
	{  
		tmbflag++;
		
	//	countrd++;

		
		printf("%d\n",countrd);
		fr3=5;
	}
        if(fr4_x>tmb_x && fr4_x<tmb_x+50&& fr4_y<=naga_y+230&&fr4==0)
	{  
		tmbflag++;

	//	countrd++;

		printf("%d\n",countrd);
		fr4=5;
		}

		}


	/*	sprintf(ab,"----%d %d %d",tmaflag,fm,countghotona);
		iText(300,600,ab,GLUT_BITMAP_TIMES_ROMAN_24);*/

		if(naga_x>1400&&stb==0)
		{

			
			



		}









	}


	/*############################################################ stage 2 ###########################################################################**/


                   	if(stb==1)
					{
       iShowImage(bgx,bgy,2000,1000,bg2);
		/*if(stop2==0)
		{
			countrd1=0;
			countrd=0;
			stop2=1;

		}*/

		iShowImage(naga_x,naga_y,200,300,nagashi[i]);
		if(countrd1<130)
		iShowImage(sklx,skly,400,500,skel[sklindex]);
		
	
	if(fr1==0)
	{
		iShowImage(fr1_x,fr1_y,40,45,fire1);
	}

	if(fr2==0)
	{
		iShowImage(fr2_x,fr2_y,40,45,fire1);
	}

	if(fr3==0)
	{
		iShowImage(fr3_x,fr3_y,40,45,fire1);
	}
		if(fr4==0)
	{
		iShowImage(fr4_x,fr4_y,40,45,fire1);
	}

if(fr4==0)
	{
		iShowImage(fr4_x,fr4_y,40,45,fire1);
	}/*****:::::::::::::::::::::: dragon 2 :::::::::::::::::::::::****/

         
       if(countrds1<5)
	   {
		   			 iSetColor(255,0,0);
				 iFilledRectangle(rd_x+100,rd_y+420,100,9);
				 			 iSetColor(255,255,255);
				 iFilledRectangle(rd_x+100,rd_y+420,countrds1*25,9);




     	iRotate(rd_x,rd_y,30);
		iShowImage(rd_x+100,rd_y,300,400,gd[rdindex]);
	   iUnRotate();
	   iShowImage(rdfirex,rdfirey,60,70,fire1);
	 if(fr1_x>rd_x && fr1_x<rd_x+100&& fr1_y>rd_y &&  fr1_y<rd_y+100&&fr1==0)
	{  
		countrds1++;
		printf("%d\n",countrd);
		fr1=5;
	}

	  if(fr2_x>rd_x && fr2_x<rd_x+300 && fr2_y>rd_y &&  fr2_y<rd_y+280&&fr2==0)
	{ 
		countrds1++;
	fr2=5;
	}
	if(fr3_x>rd_x && fr3_x<rd_x+300 && fr3_y>rd_y &&  fr3_y<rd_y+300&&fr3==0)
	{   countrds1++;
		fr3=5;
	}
	if(fr4_x>rd_x && fr4_x<rd_x+300 && fr4_y>rd_y &&  fr4_y<rd_y+300&&fr4==0)
	{   countrds1++;
		fr4=5;
		
	}
	   }
	/////*************************   :::::::::::::::::::::::::::::::            ::::::::::::::::::::::::::::::::::  ***************************/////
	 
	
	   
	   if(fr1_x-sklx>3 && fr1_y==135&&fr1==0)/*************************** fire col *****************************/
	{   
		if(fr1_x-sklx<100)
		countrd1++;
		printf("%d\n",countrd);
		fr1=5;
	}

	
	 if(fr2_x-sklx>3 && fr2_y==135&&fr2==0)
	{   
		if(fr2_x-sklx<100)
		countrd1++;
		printf("%d\n",countrd);
		fr2=5;
	}


	  if(fr3_x-sklx>3 && fr3_y==135&&fr3==0)
	{   
		if(fr3_x-sklx<100)
		countrd1++;
		printf("%d\n",countrd);
		fr3=5;
	}


	   if(fr4_x-sklx>3 && fr4_y==135&&fr4==0)
	{   
		if(fr4_x-sklx<100)
		countrd1++;
		printf("%d\n",countrd);
		fr4=5;
	} /************************************** fire col 2 *******************************/

	   if(countrds1<11)
	   {
	   
	if(rdfirex<naga_x)
		{
			rdfirex=rd_x;
			rdfirey = rd_y;
			counthero++;/*********************** counther0+++ ****************************/
		
		}

	   }
   //  sprintf(sr1,"dragon : %d enemy :%d counthero :%d  i: %d",countrds1,countrd1,counthero,i);
	 	iSetColor(255,0,0);
	//	iText(200,400,sr1,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(250,250,250);
		iFilledRectangle(200-5,700,10,200);
		iSetColor(250,0,0);
		if(200-counthero>=0)
		iFilledRectangle(200-5,700,10,200-counthero);/*********************** counther0 ****************************/
	      if(countrds1>=4&&p1==0)
		  {

			  p1=counthero;

		  }

		   if(countrds1>=4&&p1!=0)
		  {

			  counthero=p1;

		  }


		   iSetColor(255,0,0);
		iText(200,400,sr1,GLUT_BITMAP_TIMES_ROMAN_24);
		/*iSetColor(250,250,250);
		iFilledRectangle(200-5,700,10,200);
		iSetColor(250,0,0);
		if(200-counthero>=0)
		iFilledRectangle(200-5,700,10,200-counthero);/*********************** counther0 ****************************/
	      





            	}
		




	 if(naga_x>1300&&stb==1&&countrds1>4)
	 {   


		 iShowImage(1400,20,200,400,saint);

		 iShowImage(200,20,900,300,aj[dindex]);/******************* dialouge box er code *****************/
		 flagd1=1;

	 }

	 /*########################################### stage 3 ###############################################################*/

	 if(stb==5)
	 {   

		 if(flagspace==1)
		 {

			 
		  iShowImage(bgx,bgy,1600,1000,space[spind]);	/*-------->>>>>>>>>>>>>>>>>>>>*/


		 }
		 
		 
		 else
		 {

			 if(p1>0)
			 {
				 counthero=p1;
				 p1=0;

			 }

		  iShowImage(bgx,bgy,1600,1000,bg3);	

		 iShowImage(naga_x,naga_y,160,200,nagashi[i]);	

		  if(fr1==0)
	{
		iShowImage(fr1_x,fr1_y,40,45,fire1);
	}

	if(fr2==0)
	{
		iShowImage(fr2_x,fr2_y,40,45,fire1);
	}
	if(fr3==0)              /********************************* alien firing part **********************************/
	{
		iShowImage(fr3_x,fr3_y,40,45,fire1);
	}
	if(fr4==0)
	{
		iShowImage(fr4_x,fr4_y,40,45,fire1);
	}
		 if(al_adead==1||al_bdead==1)/*********  al_adead == 1 or al_bdead ==1 hoile eita cholbe *///////
		 {
			 iSetColor(255,0,0);
				 iFilledRectangle(al_ax,al_ay+220,100,9);    /************** enemy health *****************/
				 			 iSetColor(255,255,255);
				 iFilledRectangle(al_ax,al_ay+220,al_acnt*25,9);


				 			 iSetColor(255,0,0);
				 iFilledRectangle(al_bx,al_by+220,100,9);
				 			 iSetColor(255,255,255);
				 iFilledRectangle(al_bx,al_by+220,al_bcnt*20,9);





		 iShowImage(al_ax,al_ay,160,200,al_a[al_aindex]);/******************* alien move  er code *****************/	  
	   if(fr1_x-al_ax>3 && fr1_y==naga_y+130&&fr1==0&&al_acnt<4)/*************************** fire col *****************************/
	{   
		if(fr1_x-al_ax<10)
		al_acnt++;
		fr1=5;
	}

	
	 if(fr2_x-al_ax>3 && fr2_y==naga_y+130&&fr2==0&&al_acnt<4)
	{   
		if(fr2_x-al_ax<10)
		al_acnt++;
		fr2=5;
	}

	  if(fr3_x-al_ax>3 && fr3_y==naga_y+130&&fr3==0&&al_acnt<4)
	{   
		if(fr3_x-al_ax<10)
		al_acnt++;
	
		fr3=5;
	}
	   if(fr4_x-al_ax>3 && fr4_y==130+naga_y&&fr4==0&&al_acnt<4)
	{   
		if(fr4_x-al_ax<100)
			al_acnt++;
			fr4=5;
	} /************************************** fire col 2 *******************************/
/******************************** ALIEN 2 *************************************************************************/	 
		 iShowImage(al_bx,al_by,160,200,al_b[al_bindex]);/******************* alien move  er code *****************/
		 if(fr1_x-al_bx>3 && fr1_y==naga_y+130&&fr1==0)/*************************** fire col *****************************/
	{   
		if(fr1_x-al_bx<10)
		al_bcnt++;
	//iText(200,500,sera,GLUT_BITMAP_TIMES_ROMAN_24);
		fr1=5;
	}

	
	 if(fr2_x-al_bx>3 && fr2_y==naga_y+130&&fr2==0)
	{   
		if(fr2_x-al_bx<10)
		al_bcnt++;
		fr2=5;
	}


	  if(fr3_x-al_bx>3 && fr3_y==naga_y+130&&fr3==0)
	{   
		if(fr3_x-al_bx<10)
		al_bcnt++;
	
		fr3=5;
	}


	   if(fr4_x-al_bx>3 && fr4_y==130+naga_y&&fr4==0)
	{   
		if(fr4_x-al_bx<100)
			fr4=5;
	} /***al_bcnt++;
			*********************************** fire col 2 *******************************/
		 
 
	 
	 if(al_acnt >=4 && al_bcnt>=4)
	 {	 al_adead=0;
		 al_bdead=0;/********************** alien gula more gese **********************/
	 }/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& alien 3 && alien 4 ************************************/
		 }

		 if(al_cdead==1&&al_adead==0)/*********  al_cdead == 1 or al_ddead ==1 hoile eita cholbe *///////
		 {

			 			 iSetColor(255,0,0);
				 iFilledRectangle(al_cx,al_cy+220,120,9);
				 			 iSetColor(255,255,255);
				 iFilledRectangle(al_cx,al_cy+220,al_ccnt*20,9);




		 iShowImage(al_cx,al_cy,160,200,al_c[al_cindex]);/******************* alien move  er code *****************/
	   if(fr1_x-al_cx>3 && fr1_y==naga_y+130&&fr1==0)/*************************** fire col *****************************/
	{   
		if(fr1_x-al_cx<10)
		al_ccnt++;
		fr1=5;
	}
	 if(fr2_x-al_cx>3 && fr2_y==naga_y+130&&fr2==0)
	{   
		if(fr2_x-al_bx<10)
		al_ccnt++;
		fr2=5;
	}
	  if(fr3_x-al_cx>3 && fr3_y==naga_y+130&&fr3==0)
	{   
		if(fr3_x-al_cx<10)
		al_ccnt++;
	
		fr3=5;
	}
	   if(fr4_x-al_cx>3 && fr4_y==130+naga_y&&fr4==0)
	{   
		if(fr4_x-al_cx<100)
			al_ccnt++;
			fr4=5;
	   }
		 if(al_ccnt >=4)
		 {
			 al_cdead=0;
		 }

		 }


		 }








		 iSetColor(250,250,250);
		iFilledRectangle(200-5,700,10,200);
		iSetColor(250,0,0);
		if(200-counthero>=0)
		iFilledRectangle(200-5,700,10,200-counthero);/*********************** counther0 ****************************/
	      



		 }

/*############################################# stage 4 ####################################################################*/


    if(stb==6)
	{
		///if(s1==1)


		 if(flagspace2==1)
		 {

			 
		  iShowImage(bgx,bgy,1600,1000,space[spind2]);	/*-------->>>>>>>>>>>>>>>>>>>>*/


		 }
		 
		 else
		 {


			 if(stb==6&&er1==1)
			 {
				 naga_x=300;
				 naga_y=400-200;
				 er1=0;


			 }


		iShowImage(bgx,bgy,1600,1000,bg4);
		iShowImage(naga_x+133,naga_y+100,180,200,wiz);
		//else
		//iShowImage(naga_x,naga_y,160,200,nagashi[i]);

			if(fr1==0)
	{
		iShowImage(fr1_x+133,fr1_y+100,40,55,fire2);
	}

	if(fr2==0)
	{
		iShowImage(fr2_x+133,fr2_y+100,40,55,fire2);
	}

	if(fr3==0)
	{
		iShowImage(fr3_x+133,fr3_y+100,40,55,fire2);
	}
		if(fr4==0)
	{
		iShowImage(fr4_x+133,fr4_y+100,40,55,fire2);
	}
		if(wicnt<3)
		{
		iShowImage(wix,wiy+100,180,200,wizard);
		iShowImage(wifirex,wifirey+100,70,100,current);
			iShowImage(birdx1,birdy1,120,100,bird[birdind]);
					iShowImage(birdx2,birdy2,90,100,bird[birdind]);
		


		 if(fr1_x>wix && fr1_x<wix+100&&fr1==0)
	{  
		//countrd++;
		wicnt++;
		printf("%d\n",countrd);
		fr1=5;
	}
		 
		 if(fr2_x>wix && fr2_x<wix+100&&fr2==0)
	{  
		wicnt++;
		printf("%d\n",countrd);
		fr2=5;
	}

		  if(fr3_x>wix && fr3_x<wix+100&&fr3==0)
	{  
		wicnt++;
		printf("%d\n",countrd);
		fr3=5;
	}

		   if(fr4_x>wix && fr4_x<wix+100&&fr4==0)
	{  
		wicnt++;
		printf("%d\n",countrd);
		fr4=5;
	}

		}
	

		  if(wicnt>=2&&p12==0)
		  {

			  p12=counthero;

		  }

		   if(wicnt>=2&&p12!=0)
		  {

			  counthero=p12;

		  }


		
        

	}

		 iSetColor(250,250,250);
		iFilledRectangle(200-5,700,10,200);
		iSetColor(250,0,0);
		if(200-counthero>=0)
		iFilledRectangle(200-5,700,10,200-counthero);/*********************** counther0 ****************************/
	      





	}

/*######################################### stage fil1 30 ##############################################*/

	   






     	   
















sprintf(sera,"%d %d %d",al_acnt,al_bcnt,al_ccnt);
	//iText(200,500,sera,GLUT_BITMAP_TIMES_ROMAN_24);
/*>>>>>>>>>>>>>>>>>>>>>>>
												   >>>>>>>>>>>>>>*/
	

}
void iMouseMove(int mx, int my)
{
	//place your codes here
}
void iPassiveMouse(int mx, int my)
{
	//place your codes here
}
void iMouse(int button, int state, int mx, int my)
{
	
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mode=1;
		//place your codes here
		if(mx >= 255 && mx <= 390 && my >= 280 && my <= 416 && mode == 0)
		{
			mode = 1;
		}

		if(mx >= 0 && mx <= 1600 && my >= 0 && my <= 1000 && stb == 100)
		{
			logo2=1;
		}

     if(mx >= 1154 && mx <= 1234 && my >= 215 && my <= 261 && stb==100)
		{
			stb=0;
		}
	 
     if(mx >= 1321 && mx <= 1365 && my >= 250&& my <= 290&& stb==100)
		{
			exit(0);
		}
      
	  
     if(mx >= 1257 && mx <= 1340 && my >= 140&& my <= 190&& stb==100)
		{
			stb=10;
		}
      



	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}







	printf("%d %d \n",mx,my);
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		
		if (stb==0 && mx >960&&mx<1040 && my >340 && my<397+3 )
		{

			stb = 1;//play
			
		}

		if (stb == 1 && mx > 103 && mx<395 && my>810 && my<880)
		{
			stb = 3;//menu
			
		}
			if (stb == 1 && mx > 99 && mx<397 && my>590 && my<660)
		{
			stb = 7;//sscore
			
		}

		if (stb == 1 && mx > 100 && mx<400 && my>700 && my<770)
		{
			stb = 2;//ins
			
		}
		if (stb == 1 && mx > 126 && mx<373 && my>482 && my<555)
		{
			exit(0);
			
		}

		

	


	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
void iKeyboard(unsigned char key)
{
	//printf("%d %d %d\n",fr1_x,fr2_x,fr);
	
	int i;
	if(mode == 1)
	{
        if(key == '\r')
		{
			mode = 0;
			strcpy(str2, str);
			printf("%s\n", str2);
			file1(str2);
			for(i = 0; i < len; i++)
				str[i] = 0;
			len = 0;
			stb=10;
		}
		else
		{
			str[len] = key;
			len++;
		}
		//fg=1;
		//stb=4;
		
	}
	
	if(stb!=4)
	{
	if(key =='a')
	{
		stb = 0;
		countrd=0;
	}
	if(key =='b')
	{
stb = 1;
countrd=0;
	}
	if(key =='d')
	{
		stb = 5;
	}
		if(key =='w')
	{
		stb = 100;
	}
	if(key =='c')
	{
		stb = 6;
	}

	if(key =='s')
	{
		chr = 1;       
		s1=1;
		
		/************************* for woman   ************************************/
		fr=5;
	}
	if(key =='t')
	{
		stb=6;


	}
	if(key =='f')
	{
		yfire++;
		if(yfire%2==0)	
		{
			fr1=0;
		fr1_x = naga_x+10;
		fr1_y=naga_y+130;
		}
		if(yfire%3==0)
		{
			fr2=0;
			fr2_x = naga_x+10;
		fr2_y=naga_y+130;

		}
		 
		if(yfire%4==0)
		{
			fr3=0;
			fr3_x = naga_x+10;
		fr3_y=naga_y+130;

		}
		if(yfire%5==0)	
		{
			fr4=0;
		fr4_x = naga_x+10;
		fr4_y=naga_y+130;
		}





		if(yfire==5)
		{

			//fr1=5;
			//fr2=5;
		}
		
		//dead1=0;                 // firing variable
	}
	if(key =='g')
	{
		stb = 4;
	}
    if(key =='q')
	{
		exit(0);
	}

	}
		//exit(0);
	
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_RIGHT)
	{   //i=0;
	  /*  if(piri==0)
		{
		i=piri;//++;
		piri=10;
		piri2=7;

		}
		i++;
//		i+=piri;*/

		if(i>=11)
		{

			i=i-10;
		}
		i++;

		if(i>6)
		i=0;
		naga_x=naga_x+50;
		if(bgx*(-1)<400)
      bgx-=10+5+7;
		
	
	nagav=0;
	
	}

	if(key == GLUT_KEY_LEFT)
	{   
		/*i=13;
	    if(piri2==7)
		{
		i=piri2;
		piri2=100;
		piri=0;
		}
		i++;*/
		if(i<10)
		{
			i = i+9;
		}

		i++;

		if(i>15)
			i=11;


	    if(bgx<0)
		bgx+=10+5;
		naga_x=naga_x-30;
		
		nagav=1;



	}
	if(key == GLUT_KEY_UP)
	{ if(naga_y<900)
	{
		naga_y = naga_y +30;
		naga_x = naga_x + 10;
		
	}

	}




	//place your codes for other keys here
}

int main()
{

	iSetTimer(100/2,jog);
	iSetTimer(100,rdf);
	iSetTimer(100/2,enemy);
	iSetTimer(60,firing);
	iSetTimer(750,dboxcng);
	iSetTimer(100/4,wifire);
	iSetTimer(900,mov);
//	iSetTimer(1400/2,mov);
	
	
	
	//place your own initialization codes here.
	
	
	len = 0;
	mode = 0;
	str[0]= 0;
	iInitialize(1600, 1000, "Demo");
	/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::: dragon rd :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
     
	  rd[0]= iLoadImage("images\\rd1.png");
	 rd[1]=iLoadImage("images\\rd2.png");
		 rd[2]= iLoadImage("images\\rd3.png");
	 rd[3]=iLoadImage("images\\rd4.png");
		 rd[4] = iLoadImage("images\\rd5.png");
		 rd[5] = iLoadImage("images\\rd6.png");
	gd[0]=iLoadImage("images\\gd1.png");
		gd[1]=iLoadImage("images\\gd2.png");
		gd[2]=iLoadImage("images\\gd3.png");
		gd[3]=iLoadImage("images\\gd4.png");
		gd[4]=iLoadImage("images\\gd5.png");

		pump=iLoadImage("images\\pump_menu.png");
	//	gd[5]=iLoadImage("images\\gd6.png");

		logo1=iLoadImage("images\\logo.png");
		
		saint=iLoadImage("images\\saint.png");

	   /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: dragon gd ^^^||||^^^^^^*//////


	logo= iLoadImage("images\\logo.png");
	menu=iLoadImage("images\\menu.png");
	bg1=iLoadImage("images\\stage1_bg.png");
	bg2=iLoadImage("images\\stage2_bg.png");
	bg3=iLoadImage("images\\st3.png");
	bg4=iLoadImage("images\\stage4_bg.jpg");
	play=iLoadImage("images\\play.png");
	a11[0]=iLoadImage("images\\tma1.png");
	current=iLoadImage("images\\current.png");
	//a12[0]=iLoadImage("images\\tmb1.png");
	/*********************************************** dead enemy 1 **************************************************************/
	a11[1]=iLoadImage("images\\tma2.png");
		a11[2]=iLoadImage("images\\tma3.png");
		a11[3]	=iLoadImage("images\\tma4.png");
				a11[4]=iLoadImage("images\\tma5.png");
				a11[5]=iLoadImage("images\\tma6.png");
						a11[6]=iLoadImage("images\\tma7.png");
							a11[7]=iLoadImage("images\\tma8.png");
/******************************************************** dead enemy 2 *********************************************************/
								a12[0]=iLoadImage("images\\tmb1.png");
									a12[1]=iLoadImage("images\\tmb2.png");
										a12[2]=iLoadImage("images\\tmb3.png");
											a12[3]=iLoadImage("images\\tmb4.png");
												a12[4]=iLoadImage("images\\tmb5.png");
													a12[5]=iLoadImage("images\\tmb6.png");
														a12[6]=iLoadImage("images\\tmb7.png");
														  a12[7]=iLoadImage("images\\tmb7.png");
														    a12[8]=iLoadImage("images\\tmb8.png");

	instruction=iLoadImage("images\\ins.jpg");
															  fulcopy=iLoadImage("images\\leaf_ball.png");
															   bsc1=iLoadImage("images\\bsc.jpg");

	/********************************************* nagashi rendaring ************************************************/
	nagashi[0]=iLoadImage("images\\naga1.png");
	nagashi[1]=iLoadImage("images\\naga2.png");
	nagashi[2]=iLoadImage("images\\naga3.png"); 
	nagashi[3]=iLoadImage("images\\naga4.png");
	nagashi[4]=iLoadImage("images\\naga5.png");
	nagashi[5]=iLoadImage("images\\naga6.png");
	nagashi[6]=iLoadImage("images\\naga7.png");
	nagashi[7]=iLoadImage("images\\naga8`.png");
	wiz=iLoadImage("images\\wiz.png");
	wizard=iLoadImage("images\\witch.png");
	fire1=iLoadImage("images\\fire1.png");
	fire2=iLoadImage("images\\fire2.png");
	nagashi[8]=iLoadImage("images\\naga11.png");
	nagashi[9]=iLoadImage("images\\naga12.png");
	nagashi[10]=iLoadImage("images\\naga13.png");
	nagashi[11]=iLoadImage("images\\naga14.png");
	nagashi[12]=iLoadImage("images\\naga15.png");
	nagashi[13]=iLoadImage("images\\naga16.png");
	nagashi[14]=iLoadImage("images\\naga17.png");
	nagashi[15]=iLoadImage("images\\naga18.png");
	
	
	/************************************************ skeleton *************************************************/
	skel[0]=iLoadImage("images\\skel1.png");
	skel[1]=iLoadImage("images\\skel2.png");
	skel[2]=iLoadImage("images\\skel3.png");
	skel[3]=iLoadImage("images\\skel4.png");
	skel[4]=iLoadImage("images\\skel5.png");
	skel[5]=iLoadImage("images\\skel6.png");
	skel[6]=iLoadImage("images\\skel7.png");
	skel[7]=iLoadImage("images\\skel8.png");
	skel[8]=iLoadImage("images\\skel9.png");
	skel[9]=iLoadImage("images\\skel10.png");
	 
	 aj[0]= iLoadImage("images\\saint.png");
	 /******************************** dialouge ***********************************/
	 aj[1]=iLoadImage("images\\d1.png");
	 aj[2]=iLoadImage("images\\d2.png");
	 aj[3]=iLoadImage("images\\d3.png");/* 1- 9 */
	 aj[4]=iLoadImage("images\\d4.png");
	 aj[5]=iLoadImage("images\\d5.png");
	 aj[6]=iLoadImage("images\\d6.png");
	 aj[7]=iLoadImage("images\\d7.png");
	 aj[8]=iLoadImage("images\\d8.png");
	 aj[9]=iLoadImage("images\\d9.png");
	 /************************************ aliens ****************************************/
	     al_a[0]=iLoadImage("images\\al_a1.png");
	     al_a[1]=iLoadImage("images\\al_a2.png");
		 al_a[2]=iLoadImage("images\\al_a3.png");
		 al_a[3]=iLoadImage("images\\al_a4.png");
		 al_a[4]=iLoadImage("images\\al_a5.png");
		 al_a[5]=iLoadImage("images\\al_a6.png");
		 al_a[6]=iLoadImage("images\\al_a7.png");
		 al_a[7]=iLoadImage("images\\al_a8.png");
	


		  al_b[0]=iLoadImage("images\\al_b1.png");
	     al_b[1]=iLoadImage("images\\al_b2.png");
		 al_b[2]=iLoadImage("images\\al_b3.png");
		 al_b[3]=iLoadImage("images\\al_b4.png");
		 al_b[4]=iLoadImage("images\\al_b5.png");
		 al_b[5]=iLoadImage("images\\al_b6.png");
		 al_b[6]=iLoadImage("images\\al_b7.png");
		 al_b[7]=iLoadImage("images\\al_b8.png");
		   al_b[8]=iLoadImage("images\\al_b9.png");
	     al_b[9]=iLoadImage("images\\al_b10.png");
		 al_b[10]=iLoadImage("images\\al_b11.png");
		   al_b[11]=iLoadImage("images\\al_b12.png");




		    al_c[0]=iLoadImage("images\\al_c1.png");
	     al_c[1]=iLoadImage("images\\al_c2.png");
		 al_c[2]=iLoadImage("images\\al_c3.png");
		 al_c[3]=iLoadImage("images\\al_c4.png");
		 al_c[4]=iLoadImage("images\\al_c5.png");
		 al_c[5]=iLoadImage("images\\al_c6.png");
		 al_c[6]=iLoadImage("images\\al_c7.png");
		// al_c[7]=iLoadImage("images\\al_c8.png");



		  al_d[0]=iLoadImage("images\\al_d1.png");
	     al_d[1]=iLoadImage("images\\al_d2.png");
		 al_d[2]=iLoadImage("images\\al_d3.png");
		 al_d[3]=iLoadImage("images\\al_d4.png");
		 al_d[4]=iLoadImage("images\\al_d5.png");
		 al_d[5]=iLoadImage("images\\al_d6.png");
	

	/************************************** space ****************************************/


		 		 space[0]=iLoadImage("images\\sky1.png");
    
		 		 space[1]=iLoadImage("images\\sky2.png");
		 
		 		 space[2]=iLoadImage("images\\sky3.png");
		 
		 		 space[3]=iLoadImage("images\\sky4.png");
		 
		 		 space[4]=iLoadImage("images\\sky5.png");
		 
		 		 space[5]=iLoadImage("images\\sky6.png");
				 to1=iLoadImage("images\\scr1.png");
		 		 
		 		// space[0]=iLoadImage("images\\space1.png");
		 
	/************************************ bird ************************************/
				 bird[0]=iLoadImage("images\\bird1.png");
				  bird[1]=iLoadImage("images\\bird2.png");
                  bird[2]=iLoadImage("images\\bird3.png");
                 bird[3]=iLoadImage("images\\bird4.png");
       bird[4]=iLoadImage("images\\bird5.png");










	
	 
	
int i,j,k,n;
char se[10];
/**/
iStart();
	
}