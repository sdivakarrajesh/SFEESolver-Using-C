#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int choice,x;
  float const g=9.81;
  float h1,v1,z1,q,h2,v2,z2,w;
  printf("\nEnter where you want to implement SFEE\n1.Simple System\n2.Nozzle\n3.Turbine\n4.Compressor\n5.Air Cooler");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  {
  printf("\nYou've Selected Simple System");
  printf("\n\nWhat is the number of the variable you would like to find?\n1.h1\t2.v1\t3.z1\t4.q\t5.h2\t6.v2\t7.z2\t8.w\n");
  scanf("%d",&x);
  if(x==1)
  {
  printf("Enter the values of v1,z1,q,h2,v2,z2,w");
  scanf("%f%f%f%f%f%f%f",&v1,&z1,&q,&h2,&v2,&z2,&w);
  h1=h2+((v2*v2)/2)+(g*z2)+w-((v1*v1)/2)-(g*z1)-q;
  printf("Hence the value of h1 is :%f",h1);
  }
  if(x==2)
  {
  printf("Enter the values of h1,z1,q,h2,v2,z2,w");
  scanf("%f%f%f%f%f%f%f",&h1,&z1,&q,&h2,&v2,&z2,&w);
  v1=sqrt((h2+((v2*v2)/2)+(g*z2)+w-h1-(g*z1)-q)*2);
  printf("Hence the value of v1 is :%f",v1);
  }
  if(x==3)
  {
  printf("Enter the values of h1,v1,q,h2,v2,z2,w");
  scanf("%f%f%f%f%f%f%f",&h1,&v1,&q,&h2,&v2,&z2,&w);
  z1=(h2+((v2*v2)/2)+(g*z2)+w-h2-((v1*v1)/2)-q)/g;
  printf("Hence the value of z1 is :%f",z1);
  }
  if(x==4)
  {
  printf("Enter the values of h1,v1,z1,h2,v2,z2,w");
  scanf("%f%f%f%f%f%f%f",&h1,&v1,&z1,&h2,&v2,&z2,&w);
  q=h2+((v2*v2)/2)-(g*z2)-w-h1-(v1*v1)/2+(g*z1);
  printf("Hence the value of q is :%f",q);
  }
  if(x==5)
  {
  printf("Enter the values of h1,v1,z1,q,v2,z2,w");
  scanf("%f%f%f%f%f%f%f",&h1,&v1,&z1,&q,&v2,&z2,&w);
  h2=h1+((v1*v1)/2)+(g*z1)+q-((v2*v2)/2)-(g*z2)-w;
  printf("Hence the value of h2 is :%f",h2);
  }
  if(x==6)
  {
  printf("Enter the values of h1,v1,z1,q,h2,z2,w");
  scanf("%f%f%f%f%f%f%f",&h1,&v1,&z1,&q,&h2,&z2,&w);
  v2=sqrt((h1+((v1*v1)/2)+(g*z1)+q-h2-(g*z2)-w)*2);
  printf("Hence the value of v2 is :%f",v2);
  }
  if(x==7)
  {
  printf("Enter the values of h1,v1,z1,q,h2,v2,w");
  scanf("%f%f%f%f%f%f%f",&h1,&v1,&z1,&q,&h2,&v2,&w);
  z2=(h1+((v1*v1)/2)+(g*z1)+q-h1-((v2*v2)/2)-w)/g;
  printf("Hence the value of z2 is :%f",z2);
  }
  if(x==8)
  {
  printf("Enter the values of h1,v1,z1,q,h2,v2,z2");
  scanf("%f%f%f%f%f%f%f",&h1,&v1,&z1,&q,&h2,&v2,&z2);
  w=h1+((v1*v1)/2)-(g*z1)-q-h2-(v2*v2)/2+(g*z2);
  printf("Hence the value of w is :%f",w);
  }
  break;
  }
  case 2:
  {
  printf("You've Selected Nozzle\n In nozzle \n=>we have no heat transfer so q=0)\n=>no work done so w=0\n=>z1~z2");
  printf("\n\nEnter the variable number you would like to find\n1.h1\t2.v1\t3.h2\t4.v2");
  scanf("%d",&x);
  if(x==1)
  {
  printf("Enter the values of v1,h2,v2");
  scanf("%f%f%f",&v1,&h2,&v2);
  h1=h2+((v2*v2)/2)-((v1*v1)/2);
  printf("The value of h1 is:%f",h1);
  }
  if(x==2)
  {
  printf("Enter the values of h1,h2,v2");
  scanf("%f%f%f",&h1,&h2,&v2);
  v1=sqrt(h2+((v2*v2)/2)-h1);
  printf("The value of v1 is:%f",v1);
  }
  if(x==3)
  {
  printf("Enter the values of h1,v1,v2");
  scanf("%f%f%f",&h1,&v1,&v2);
  h1=h2+((v2*v2)/2)-((v1*v1)/2);
  printf("The value of h2 is:%f",h2);
  }
  if(x==4)
  {
  printf("Enter the values of h1,v1,h2");
  scanf("%f%f%f",&h1,&v1,&h2);
  v2=sqrt(h1+((v1*v1)/2)-h2);
  printf("The value of v2 is:%f",v2);
  }
  break;
  }
  case 3:
  {
  printf("You've Selected Turbine");
  printf("\nIn Turbine we have \n=>no heat transfer so q=0\n=>z1~z2\n\nNow Enter the variable number you want to find\n1.h1\t2.v1\t3.h2\t4.v2\t5.w");
  scanf("%d",&x);
  if(x==1)
  {
  printf("Enter the values of h1,v1,h2,v2,w");
  scanf("%f%f%f%f",&h1,&v1,&h2,&v2,&w);
  h1=h2+w+((v2*v2)/2)-((v1*v1)/2);
  printf("The value of h1 is:%f",h1);
  }
  if(x==2)
  {
  printf("Enter the values of h1,h2,v2,w");
  scanf("%f%f%f%f",&h1,&h2,&v2,&w);
  v1=sqrt((h2+w-((v2*v2)/2)-h1)*2);
  printf("The value of v1 is:%f",v1);
  }
  if(x==3)
  {
  printf("Enter the values of h1,v1,v2,w");
  scanf("%f%f%f%f",&h1,&v1,&v2,&w);
  h2=h1+((v1*v1)/2)-w-((v2*v2)/2);
  printf("The value of h2 is:%f",h2);
  }
  if(x==4)
  {
  printf("Enter the values of h1,v1,h2,w");
  scanf("%f%f%f%f",&h1,&v1,&h2,&w);
  v2=sqrt(h1+((v1*v1)/2)-h2-w);
  printf("The value of v2 is:%f",v2);
  }
  if(x==5)
  {
  printf("Enter the values of h1,v1,h2,v2");
  scanf("%f%f%f%f",&h1,&v1,&h2,&v2);
  w=h1+((v1*v1)/2)-h2-((v1*v1)/2);
  printf("The value of w is:%f",w);
  }
  break;
  }
  case 4:
  {
  printf("You've selected Compressor\nIn compressor we have\n=>No heat transfer so Q=0\n=>Change in Kinetic Energy is negligible\n=>z1~z2;");
  printf("\n\nEnter the variable number you want to find\n1.h1\t2.h2\t3.w");
  scanf("%d",&x);
  if(x==1)
  {
  printf("Enter the values of h2,w");
  scanf("%f%f",&h2,&w);
  h1=h2+w;
  printf("The value of h1 is:%f",h1);
  }
  if(x==2)
  {
  printf("Enter the values of h1,w");
  scanf("%f%f",&h2,&w);
  h2=h1-w;
  printf("The value of h2 is:%f",h2);
  }
  if(x==3)
  {
  printf("Enter the values of h1,h2");
  scanf("%f%f",&h1,&h2);
  w=h1-h2;
  printf("The value of w is:%f",w);
  }
  break;
  }
  case 5:
  {
  printf("You've selected Air cooler\nIn Air cooler we have \n=>Change in Kinetic Energy in negligible\n=>z1~z2\n=>There is no Workdone so w=0");
  printf("\n\nEnter the variable number you want to find\n1.h1\t2.q\t3.h2");
  scanf("%d",&x);
  if(x==1)
  {
  printf("Enter the value of q,h2");
  scanf("%f%f",&q,&h2);
  h1=h2-q;
  printf("The value of h1 is:%f",h1);
  }
  if(x==2)
  {
  printf("Enter the value of h1,h2");
  scanf("%f%f",&h1,&h2);
  q=h2-h1;
  printf("The value of q is:%f",q);
  }
  if(x==3)
  {
  printf("Enter the value of h1,q");
  scanf("%f%f",&h1,&q);
  h2=h1+q;
  printf("The value of q is:%f",q);
  }
  break;
  }
  default: printf("Thank you");
  }
getch();
}
