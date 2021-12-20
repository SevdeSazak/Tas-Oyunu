#include<stdio.h>      
#include<stdlib.h>
#include<time.h>

int birinci(int kirmizi1[],int mavi1[])
{
    printf("\n\n\n1.Oyuncunun Tahtasi\n\nKIRMIZI\t\t"); 
	for(int i=0;i<20;i++)
	{
	printf(" %d |",kirmizi1[i]);
	}
	printf("\nMAVI\t\t");
	for(int i=0;i<20;i++)
	{
	printf(" %d |",mavi1[i]);
	}	
}

int ikinci(int kirmizi2[],int mavi2[])
{
    printf("\n\n\n2.Oyuncunun Tahtasi\n\nKIRMIZI\t\t"); 
	for(int i=0;i<20;i++)
	{
	printf(" %d |",kirmizi2[i]);
	}
	printf("\nMAVI\t\t");
	for(int i=0;i<20;i++)
	{
	printf(" %d |",mavi2[i]);
	}	
}

int main()
{
	int kirmizi1[20]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int mavi1[20]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int kirmizi2[20]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int mavi2[20]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	printf("\n\n                                           BASLANGIC"                               );
	birinci(kirmizi1,mavi1);
    ikinci(kirmizi2,mavi2);
    srand(time(NULL));
	int random = 1 + rand() % 10 ;
	printf("\n\n\n->Rastgele %d. sayi secildi",random);
	printf("\n->Rastgele Kirmizi renk secildi");
	printf("\n                                             1.HAMLE"                                 );
	kirmizi1[random-1]--;
	birinci(kirmizi1,mavi1);
    kirmizi2[random-1]++;
    ikinci(kirmizi2,mavi2);
    for(int i=0;i<50;)
    {
    printf(" \n\n\n                                            %d.HAMLE",i+2                      );
    i++;
	if(random*2<=20  && kirmizi2[(random*2)-1]!=0)
	{
	
	printf("\n\n->Rastgele %d secildi",random*2);
	printf("\n->Kirmizi renk secildi\n");
	random=random*2;
	kirmizi1[random-1]++;
	birinci(kirmizi1,mavi1);
    kirmizi2[random-1]--;
    ikinci(kirmizi2,mavi2);
    printf(" \n\n\n                                            %d.HAMLE",i+2                        );
    i++;
        if(random-4>0 && mavi1[random-5]!=0)
        {
        printf("\n\n->Rastgele %d secildi",random-4);
		printf("\n->Mavi renk secildi\n");	
		random=random-4;
        mavi1[random-1]--;
	    birinci(kirmizi1,mavi1);
        mavi2[random-1]++;
        ikinci(kirmizi2,mavi2);
        }
        else if(random*2<=20  && kirmizi1[(random*2)-1]!=0)
        {
        printf("\n\n->Rastgele %d secildi",random*2);
        printf("\n->Kirmizi renk secildi\n");
	    random=random*2;
		kirmizi1[random-1]--;
	    birinci(kirmizi1,mavi1);
        kirmizi2[random-1]++;
        ikinci(kirmizi2,mavi2);
        }
        else
        {
        printf("\n\n\n\n                                           OYUN BITTI"                                );
        printf("\n                                         1.OYUNCU KAZANDI"                                  );
        return 0;
    	}
    	}
	else if(random-4>0 && mavi2[random-5]!=0)
	{
	printf("\n\n->Rastgele %d secildi",random-4);
	printf("\n->Mavi renk secildi\n");
	random=random-4;
	mavi1[random-1]++;
	birinci(kirmizi1,mavi1);
    mavi2[random-1]--;
    ikinci(kirmizi2,mavi2);
    printf(" \n\n\n                                            %d.HAMLE",i+2                        );
    i++;
        if(random*2<=20  && mavi1[(random*2)-1]!=0)
        {
		printf("\n\n->Rastgele %d secildi",random*2);
		printf("\n->Mavi renk secildi\n");
	    random=random*2;
        mavi1[random-1]--;
    	birinci(kirmizi1,mavi1);
        mavi2[random-1]++;
        ikinci(kirmizi2,mavi2);
        }
        else if(random-4>0 && kirmizi1[random-5]!=0)
        {
		printf("\n\n->Rastgele %d secildi",random-4);
		printf("\n->Kirmizi renk secildi\n");
	    random=random-4;
        kirmizi1[random-1]--;
	    birinci(kirmizi1,mavi1);
        kirmizi2[random-1]++;
        ikinci(kirmizi2,mavi2);
        }
        else
        {
        printf("\n\n\n\n                                           OYUN BITTI"                                );
        printf("\n                                         2.OYUNCU KAZANDI"                                  );
        return 0;
    	}
    }
    else
    {
    printf("\n\n\n\n                                           OYUN BITTI"                                );
    printf("\n                                         1.OYUNCU KAZANDI"                                  );
    return 0;
    }
    }
}
