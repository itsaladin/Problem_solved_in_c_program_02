#include <graphics.h>
   #include <conio.h>
   #include <stdio.h>
   #define    MAX   20


   struct Queue
   {
      int st[MAX];
   };

   void Insert(struct Queue *My,int val);
   void Delete(struct Queue *My);
   void DISPLAY(struct Queue My);
   void main()
   {
      char ch;
      int num,tot,i;

      struct Queue MyQ;
      MyQ.st[0]=2;
      MyQ.st[1]=2;

      Menu:
         clrscr();
         printf("



		***********************
");
         printf("			 MENU QU
");
         printf("		************************
");
         printf("
		 1. Insert");
         printf("
		 2. Delete");
         printf("
		 3. Display");
         printf("
		 4. Exit");
         printf("

		 Choose Your Destiny:-  ");

         ch=getche();

      switch(ch)
      {
         case '1':
            printf("
	 How Many Element To Insert:- ");
            scanf("%d",&tot);
            for(i=0;i<tot;i++)
            {
               printf(" Enter the number to Insert:- ");
               scanf("%d",&num);
               Insert(&MyQ,num);
            }
            printf("
	 Inserted . . .");
            getch();
            goto Menu;
         case '2':
            printf("
	 How Many Element To Delete:- ");
            scanf("%d",&tot);
            for(i=0;i<tot;i++)
            {
               Delete(&MyQ);
            }
            getch();
            goto Menu;
         case '3':
            DISPLAY(MyQ);
            goto Menu;
         case '4':
            printf("

	 Exiting . . .");
            getch();
            break;
      }
      closegraph();
   }

   /*******************************************
   Function:      PUSH
   Discription:   Insert an Element in Stack
   *******************************************/

   void Insert(struct Queue *My,int val)
   {
      if(My->st[1]>=MAX+1)
      {
         printf("

	 Already Full:-");
         getch();
         return;
      }

      My->st[My->st[1]]=val;
      My->st[1]=My->st[1]+1;
   }

   /*******************************************
   Function:      POP
   Discription:   POP an Element in Stack
   *******************************************/



   void Delete(struct Queue *My)
   {
      if(My->st[0]==My->st[1])
      {
         printf("

	 U SUCK:- Nothing To Delete:-");
         getch();
         return;
      }
      My->st[0]=My->st[0]+1;
      printf("
 One Element Deleted . . .");
   }

   void DISPLAY(struct Queue My)
   {
      int g=DETECT,d,i;
      int j=400;
      char str[10];

      if(My.st[0]>=My.st[1])
      {
         printf("

		 Hey Wicked, Atleast PUSH One Item");
         getch();
         return;
      }

      initgraph(&g,&d,"c:\tc\bgi");

      setbkcolor(BLUE);
      outtextxy(10,10," Press Any Key...");
      getch();

      setfillstyle(11,12);
      for(i=2;i<20;i++)
      {
         setcolor(RED);
         bar(200,j,400,j-20);
         rectangle(200,j,400,j-20);
         j=j-20;
      }
      j=400;
      for(i=2;i<My.st[0];i++)
      {
         setcolor(RED);
         rectangle(200,j,400,j-20);
         j=j-20;
      }
      setfillstyle(1,CYAN);
      for (i=My.st[0];i<My.st[1];i++)
      {
         setcolor(GREEN);
         delay(200);
         bar(200,j,400,j-20);
         rectangle(200,j,400,j-20);
         sprintf(str,"%d",My.st[i]);
         setcolor(RED);
         outtextxy(280,j-10,str);
         j=j-20;
      }
      j=390;
      for(i=2;i<My.st[0];i++)
         j=j-20;
      outtextxy(410,j," <- Rear Pointer");

      j=390;
      for(i=2;i<My.st[1];i++)
         j=j-20;
      outtextxy(410,j," <- Front Pointer");

      getch();
      restorecrtmode();
   }
