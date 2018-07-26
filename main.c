#include <stdio.h>
#include <stdlib.h>
#include<string.h>

// ÖMER BULUT --> 05160000909   &&  BURAK ÖZÇELİK --> 05160000905

int main()
{
    int x,z,y=0,t=0;
    int uzunluk,uzunluk2,sonSayiUzunluk;
    int i;
    char sayi[100],sayi2[100],sayi3[101],sayi4[100],sayi6[100];

   printf("1.Sayinizi giriniz: " );
   gets(sayi);
   printf("2.Sayinizi giriniz: " );
   gets(sayi2);
   //printf("sayilar= %s %s ",sayi,sayi2);

  // printf("uzunluk:%d",sayi[uzunluk-1]);
   uzunluk=strlen(sayi);
   uzunluk2=strlen(sayi2);


// SAYI 1 BÜYÜK ISEEEEEEEEE
if(uzunluk>uzunluk2 )
{
     z=uzunluk-uzunluk2;

                for(i=0;i<uzunluk;i++)
                            {
                                    sayi4[i]=48;

                            }

                for(i=z;i<uzunluk;i++)
                            {
                                    sayi4[i]=sayi2[t];
                                    t++;
                            }


            sayi4[uzunluk]=0;

for(i=uzunluk;i>=0;i--)
            {
                      if(sayi[i]+sayi4[i]<=105)
                      {
                               x =(sayi[i]-'0')+(sayi4[i]-'0');
                                sayi3[i]= x+'0';
                      }

                    else if(sayi[i]+sayi4[i]>105)
                      {

                                x=(sayi[i]-'0')+(sayi4[i]-'0');
                                y=x%10;
                                sayi3[i]= y +'0';
                                sayi[i-1]=sayi[i-1]+1;  // sayi yi sayi 4 yaptın

                      }
              }

                       sayi3[uzunluk+1]=0;
                                                                       //sayi3[uzunluk2+2]=0;

}

// SAYI 2 BÜYÜK ISEEEEEEE
    else if(uzunluk<uzunluk2)
{

                        z=uzunluk2-uzunluk;
                        t=0;

                                            for(i=0;i<uzunluk2;i++)
                                                    {
                                                            sayi4[i]=48;
                                                    }
                                            for(i=z;i<uzunluk2;i++)
                                                    {
                                                    sayi4[i]=sayi[t];
                                                    t++;
                                                    }

                                                  sayi4[uzunluk2]=0;


            for(i=uzunluk2;i>=0;i--)
            {

                                if(sayi2[i]+sayi4[i]<=105)
                                     {

                                            x =(sayi2[i]-'0')+(sayi4[i]-'0');
                                            sayi3[i]= x+'0';
                                        }

                                else if(sayi2[i]+sayi4[i]>105)
                                        {
                                            x=(sayi2[i]-'0')+(sayi4[i]-'0');
                                            y=x%10;
                                            sayi3[i]= y +'0';
                                        sayi2[i-1]=sayi2[i-1]+1;

                                    }
            }
                        sayi3[uzunluk2+1]=0;
                                   // sayi3[uzunluk2+2]=0;



}

// BÜYÜKLÜKLERİ ESİT ISE
else
{
    for(i=uzunluk;i>=0;i--)
            {

                                if(sayi2[i]+sayi[i]<=105)
                                     {

                                            x =(sayi2[i]-'0')+(sayi[i]-'0');
                                            sayi3[i]= x+'0';
                                        }

                                else if(sayi2[i]+sayi[i]>105)
                                        {
                                            x=(sayi2[i]-'0')+(sayi[i]-'0');
                                            y=x%10;
                                            sayi3[i]= y +'0';
                                        sayi2[i-1]=sayi2[i-1]+1;

                                    }
            }
                        sayi3[uzunluk2+1]=0;



}




sonSayiUzunluk=strlen(sayi3);


if(sayi[0]+sayi4[0]>105  )
   {
                            x=(sayi[0]-'0')+(sayi4[0]-'0');
                            y=x%10;
                            sayi3[sonSayiUzunluk+1]=0;

                            for(i=0;i<=sonSayiUzunluk;i++)
                                                    {

                                                    sayi6[i]=48;

                                                    }
                                            for(i=1;i<=sonSayiUzunluk+1;i++)
                                                    {

                                                     sayi6[i+1]=sayi3[i];

                                                    }
                                    sayi6[1]=y+'0';
                                    sayi6[0]=49;

                                  sayi6[sonSayiUzunluk]=0;

                                                printf("Girmis oldugunuz sayilarin toplami=%s",sayi6);


           }
else if (sayi2[0]+sayi4[0]>105)
{



            x=(sayi2[0]-'0')+(sayi4[0]-'0');
            y=x%10;
            sayi3[sonSayiUzunluk+1]=0;

                     for(i=0;i<=sonSayiUzunluk;i++)
                                                    {

                                                    sayi6[i]=48;

                                                    }
                                            for(i=1;i<=sonSayiUzunluk+1;i++)
                                                    {

                                                    sayi6[i+1]=sayi3[i];

                                                    }
                                    sayi6[1]=y+'0';
                                    sayi6[0]=49;
                                    //sayi6[sonSayiUzunluk]=0;

                                                printf("Girmis oldugunuz sayilarin toplami=%s",sayi6);


}
else if(sayi2[0]+sayi[0]>105)
{
    if(sayi[0]+sayi2[0]>105  )
   {
                            x=(sayi[0]-'0')+(sayi2[0]-'0');
                            y=x%10;
                            sayi3[uzunluk+1]=0;

                            for(i=0;i<=uzunluk;i++)
                                                    {

                                                    sayi6[i]=48;

                                                    }
                                            for(i=1;i<=uzunluk+1;i++)
                                                    {

                                                     sayi6[i+1]=sayi3[i];

                                                    }
                                    sayi6[1]=y+'0';
                                    sayi6[0]=49;

                                  sayi6[uzunluk+1]=0;

                                              printf("Girmis oldugunuz sayilarin toplami=%s",sayi6);


           }



}
else
     printf("Girmis oldugunuz sayilarin toplami=%s",sayi3);

//printf("%s",sayi3);

}
