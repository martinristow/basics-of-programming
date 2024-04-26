#include <iostream> //vlezno-izlezni komponenti
#include <fstream> //rabota so datoteki
#include <string> //string
#include <algorithm> //koristenje na komandata SWAP za sortiranje
using namespace std;  ;/*iostream svoite identifikatori gi deklarira da 
bidat vo prostorot so iminja std. Ova go pisuvame za potoa vo programata 
da ne mora da pisuvame pred sekoe cin i cout std::cin...*/
void vnesuvanje (); //funkcija koja ovozmozuva vnesuvanjena timovite i nivnite grupi
void rezultati();  //funkcija koja ovozmozuva zapisuvanje na rezultatite od natprevarite i pritoa gi opredeluva timovite
int RezultatZaVtorTim (int); //funkcija koja go prilagoduva rezultatot za vtoriot tim od vnesuvanjeto
int bodZbir(int);  //funkcija koja go prilagoduva rezultatot za vtoriot tim od vnesuvanjeto
int razlika(int);  //funkcija koja opredeluva gol razlika
struct tims //strukturi na timovi.
{
   string ime; //ime na timot
   char grupa; //grupa na timot
   string ime1; //ime na prv protivnik
   string ime2; //ime na vtor protivnik
   string ime3; //ime na tret protivnik
   int rezulati1; //rezultati od natprevarot so prviot prottivnik
   int rezulati2; //rezultati od natprevarot so vtoriot protivnik
   int rezulati3; //rezultati od natprevarot so tretiot protivnik
   int bodovi1; //bodovi osvoeni vo natprevarot so prviot protivnik
   int bodovi2; //bodovi osvoeni vo natprevarot so vtoriot protivnik
   int bodovi3; //bodovi osvoeni vo natprevarot so tretiot protivnik
   int razlika1; //gol razlika od natprevarite so prviot protivnik
   int razlika2; //gol razlika od natprevarite so vtoriot protivnik
   int razlika3; //gol razlika od natprevarite so tretiot protivnik
   int razlikavk; //vkupna gol razlika
   int VkupenBrPoeni; //vkupen broj na poeni od natprevarite so drugite protivnici
   float vkupno; //vkupen broj na poeni posle vtoriot i tretiot uslov dokolku timovite se izednaceni vo prvata kategodija
};
//TUKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
struct grupan //struktura na grupi. Sekoja grupa sodrzi po 4 timovi 
{
    struct tims A[4];
    struct tims B[4];
    struct tims C[4];
    struct tims D[4];
    void rezultati() //fukcija koja ja povikuvame od main funkcijata, a e vgnezdena vo strukturata () tehnika uste poznata i kako "metod" 
    {
     bool smena;//promenliva koja sluzi za sortiranjeto
     ifstream datoteka("Grupi.dat"); //vlezna datoteka od koja se vnesuvaat timovite i nivnite protivnici     
if (datoteka) // grupa instrukcii koi se izvrsuvaat dokolku postoi datotekata
     {
         for (int i=0;i<4;i++) //vnesuvanje na grupite i iminjata na timovite
              {
              datoteka>>A[i].ime;
              }
         for (int i=0;i<4;i++)
              {
    datoteka>>B[i].ime;
              }
         for (int i=0;i<4;i++)
             {
             datoteka>>C[i].ime;
             }
         for (int i=0;i<4;i++)
              {
              datoteka>>D[i].ime;
              }
for (int i=0;i<3;i++) //vnesuvanje na rezultati od megjusebnite natprevari za timovite od grupa A
     {
         for (int j=i+1;j<4;j++)
         {
             cout<<"Rezultatot od natprevarot pomegu "<<A[i].ime<<"i"<<A[j].ime<<"e:"<<endl;
             if (j==1) //odreduvanje na rezultat za vtor protivnik
             {
A[i].rezulati1=9999;
                do{
                if (A[i].rezulati1<0 || A[i].rezulati1>9999) cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
cin>>A[i].rezulati1;}
                while(A[i].rezulati1<0 || A[i].rezulati1>9999);
                A[j].rezulati1=RezultatZaVtorTim(A[i].rezulati1);
             }
             else if (j==2)
             {
                A[i].rezulati2=9999;
                do{
                if (A[i].rezulati2<0 || A[i].rezulati2>9999)cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
cin>>A[i].rezulati2;}
                while(A[i].rezulati2<0 || A[i].rezulati2>9999);
                A[j].rezulati2=RezultatZaVtorTim(A[i].rezulati2);
             }
             else if (j==3)
             {
                A[i].rezulati3=9999;
                do{
                if (A[i].rezulati3<0 || A[i].rezulati3>9999) cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
 cin>>A[i].rezulati3;}
                while(A[i].rezulati3<0 || A[i].rezulati3>9999);
                A[j].rezulati3=RezultatZaVtorTim(A[i].rezulati3);
             }
         }
     }

     for (int i=0;i<3;i++) //vnesuvanje na rezultati od megusebnite natprevari za timovite od grupa B
     {
         for (int j=i+1;j<4;j++)
         {
             cout<<"Rezultatot od natprevarot pomegu "<<B[i].ime<<"i "<<B[j].ime<<" e:"<<endl;
             if (j==1) //odreduvanje na rezultat za vtor protivnik

             {
B[i].rezulati1=9999;
                do{
                if (B[i].rezulati1<0 || B[i].rezulati1>9999)cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
cin>>B[i].rezulati1;}
                while(B[i].rezulati1<0 || B[i].rezulati1>9999);
                B[j].rezulati1=RezultatZaVtorTim(B[i].rezulati1);
             }
             else if (j==2)
             {
                B[i].rezulati2=9999;
                do{
                if (B[i].rezulati2<0 || B[i].rezulati2>9999) cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
cin>>B[i].rezulati2;}
                while(B[i].rezulati2<0 || B[i].rezulati2>9999);
                B[j].rezulati2=RezultatZaVtorTim(B[i].rezulati2);
             }
             else if (j==3)
             {
                B[i].rezulati3=9999;
                do{
                if (B[i].rezulati3<0 || B[i].rezulati3>9999) cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
cin>>B[i].rezulati3;}
                while(B[i].rezulati3<0 || B[i].rezulati3>9999);
                B[j].rezulati3=RezultatZaVtorTim(B[i].rezulati3);
             }
         }
     }
//TUKAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
     for (int i=0;i<3;i++) //vnesuvanje na rezultati od megusebnite natprevari za timovite od grupa C
     {
         for (int j=i+1;j<4;j++)
         {
             cout<<"Rezultatot od natprevarot pomegu "<<C[i].ime<<"i "<<C[j].ime<<"e:"<<endl;
             if (j==1) //odreduvanje na rezultat za vtor protivnik

             {
C[i].rezulati1=9999;
                do{
                if (C[i].rezulati1<0 || C[i].rezulati1>9999)cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
cin>>C[i].rezulati1;}
                while(C[i].rezulati1<0 || C[i].rezulati1>9999);
                C[j].rezulati1=RezultatZaVtorTim(C[i].rezulati1);
             }
             else if (j==2)
             {
                C[i].rezulati2=9999;
                do{
                if (C[i].rezulati2<0 || C[i].rezulati2>9999) cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
cin>>C[i].rezulati2;}
                while(C[i].rezulati2<0 || C[i].rezulati2>9999);
                C[j].rezulati2=RezultatZaVtorTim(C[i].rezulati2);
             }
             else if (j==3)
             {
                C[i].rezulati3=9999;
                do{
                if (C[i].rezulati3<0 || C[i].rezulati3>9999) cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
cin>>C[i].rezulati3;}
                while(C[i].rezulati3<0 || C[i].rezulati3>9999);
                C[j].rezulati3=RezultatZaVtorTim(C[i].rezulati3);
             }
         }
     }

for (int i=0;i<3;i++) //vnesuvanje na rezultati od megusebnite natprevari za timovite od grupa D
     {
         for (int j=i+1;j<4;j++)
         {
             cout<<"Rezultatot od natprevarot pomegu "<<D[i].ime<<" i "<<D[j].ime<<" e:"<<endl;
             if (j==1)
             {
                D[i].rezulati1=9999;
                do{
                if (D[i].rezulati1<0 || D[i].rezulati1>9999) cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
                cin>>D[i].rezulati1;}
                while(D[i].rezulati1<0 || D[i].rezulati1>9999);
                D[j].rezulati1=RezultatZaVtorTim(D[i].rezulati1);
             }
             else if (j==2)
             {
                D[i].rezulati2=9999;
                do{
                if (D[i].rezulati2<0 || D[i].rezulati2>9999) cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
                cin>>D[i].rezulati2;}
                while(D[i].rezulati2<0 || D[i].rezulati2>9999);
                D[j].rezulati2=RezultatZaVtorTim(D[i].rezulati2);
             }
             else if (j==3)
             {
                D[i].rezulati3=9999;
                do{
                if (D[i].rezulati3<0 || D[i].rezulati3>9999) cout<<"Vnesovete nevaliden rezultat!! Ve molime vnesete go vasiot rezultat povtorno"<<endl;
                cin>>D[i].rezulati3;}
                while(D[i].rezulati3<0 || D[i].rezulati3>9999);
                D[j].rezulati3=RezultatZaVtorTim(D[i].rezulati3);
             }
         }
     }
for (int i=0;i<4;i++) //vnesuvanje na konecni algebarski vrednosti za promenlivite bodovi1, bodovi2, bodovi3, VkupenBrPoeni, razlika1, razlika2, razlika3 i razlikavk za grupa A
     {
         A[i].bodovi1=bodZbir(A[i].rezulati1);
         A[i].bodovi2=bodZbir(A[i].rezulati2);
         A[i].bodovi3=bodZbir(A[i].rezulati3);
         A[i].VkupenBrPoeni=int(A[i].bodovi1)+int(A[i].bodovi2)+int(A[i].bodovi3);
         A[i].razlika1=razlika(A[i].rezulati1);
         A[i].razlika2=razlika(A[i].rezulati2);
         A[i].razlika3=razlika(A[i].rezulati3);
         A[i].razlikavk=int(A[i].razlika1)+int(A[i].razlika2)+int(A[i].razlika3);
     }
     for (int i=0;i<4;i++) //vnesuvanje na konecni algebarski vrednosti za promenlivite bodovi1, bodovi2, bodovi3, VkupenBrPoeni, razlika1, razlika2, razlika3 i razlikavk za grupa B
     {
         B[i].bodovi1=bodZbir(B[i].rezulati1);
         B[i].bodovi2=bodZbir(B[i].rezulati2);
         B[i].bodovi3=bodZbir(B[i].rezulati3);
         B[i].VkupenBrPoeni=int(B[i].bodovi1)+int(B[i].bodovi2)+int(B[i].bodovi3);
         B[i].razlika1=razlika(B[i].rezulati1);
         B[i].razlika2=razlika(B[i].rezulati2);
         B[i].razlika3=razlika(B[i].rezulati3);
         B[i].razlikavk=int(B[i].razlika1)+int(B[i].razlika2)+int(B[i].razlika3);
     }
     for (int i=0;i<4;i++) //vnesuvanje na konecni algebarski vrednosti za promenlivite bodovi1, bodovi2, bodovi3, VkupenBrPoeni, razlika1, razlika2, razlika3 i razlikavk za grupa C
     {
         C[i].bodovi1=bodZbir(C[i].rezulati1);
         C[i].bodovi2=bodZbir(C[i].rezulati2);
         C[i].bodovi3=bodZbir(C[i].rezulati3);
         C[i].VkupenBrPoeni=int(C[i].bodovi1)+int(C[i].bodovi2)+int(C[i].bodovi3);
         C[i].razlika1=razlika(C[i].rezulati1);
         C[i].razlika2=razlika(C[i].rezulati2);
         C[i].razlika3=razlika(C[i].rezulati3);
         C[i].razlikavk=int(C[i].razlika1)+int(C[i].razlika2)+int(C[i].razlika3);
     }
     for (int i=0;i<4;i++) //vnesuvanje na konecni algebarski vrednosti za promenlivite bodovi1, bodovi2, bodovi3, VkupenBrPoeni, razlika1, razlika2, razlika3 i razlikavk za grupa D
     {
         D[i].bodovi1=bodZbir(D[i].rezulati1);
         D[i].bodovi2=bodZbir(D[i].rezulati2);
         D[i].bodovi3=bodZbir(D[i].rezulati3);
         D[i].VkupenBrPoeni=int(D[i].bodovi1)+int(D[i].bodovi2)+int(D[i].bodovi3);
         D[i].razlika1=razlika(D[i].rezulati1);
         D[i].razlika2=razlika(D[i].rezulati2);
         D[i].razlika3=razlika(D[i].rezulati3);
         D[i].razlikavk=int(D[i].razlika1)+int(D[i].razlika2)+int(D[i].razlika3);
     }
for(int i=0;i<4;i++) //predavanje na integer vrednosta int VkupenBrPoeni na float vkupno koja sluzi ponatamu za vtoriot i tretiot uslov
     {
        A[i].vkupno=int(A[i].VkupenBrPoeni);
        B[i].vkupno=int(B[i].VkupenBrPoeni);
        C[i].vkupno=int(C[i].VkupenBrPoeni);
        D[i].vkupno=int(D[i].VkupenBrPoeni);
     }
for (int i=0;i<3;i++) //proveruvanje na vtoriot i tretiot uslov za poeni za grupa A
     {
         for (int j=i+1;j<4;j++)
         {
             if(A[i].vkupno==A[j].vkupno)
             {
                 if(A[i].razlikavk>A[j].razlikavk)A[i].vkupno=int(A[i].VkupenBrPoeni);
                 else if (A[i].razlikavk<A[j].razlikavk)A[j].vkupno=int(A[j].VkupenBrPoeni);
                 if(A[i].vkupno==A[j].vkupno)
                 {
                    if(j=1)
                    {
                          if(A[i].razlika1>A[j].razlika1)A[i].vkupno=float(A[i].vkupno);
                          else if(A[i].razlika1<A[j].razlika1)A[j].vkupno=float(A[j].vkupno);
                    }

                    if(j=2)
                    {
                          if(A[i].razlika1>A[j].razlika2)A[i].vkupno=float(A[i].vkupno);
                          else if(A[i].razlika1<A[j].razlika2)A[j].vkupno=float(A[j].vkupno);
                    }
                    if(j=3)
                    {
                          if(A[i].razlika1>A[j].razlika3)A[i].vkupno=float(A[i].vkupno);
                          else if(A[i].razlika1<A[j].razlika3)A[j].vkupno=float(A[j].vkupno);
                    }
                 }
             }
         }
          for (int i=0;i<3;i++) //proveruvanje na vtoriot i tretiot uslov za poeni za grupa B
     {
     for (int j=i+1;j<4;j++)
         {
             if(B[i].vkupno==B[j].vkupno)
             {
                 if(B[i].razlikavk>B[j].razlikavk)B[i].vkupno=int(B[i].VkupenBrPoeni)+0.5;
                 else if (B[i].razlikavk<B[j].razlikavk)B[j].vkupno=int(B[j].VkupenBrPoeni)+0.5;
                 if(B[i].vkupno==B[j].vkupno)
                 {
                    if(j=1)
                    {
                          if(B[i].razlika1>B[j].razlika1)B[i].vkupno=float(B[i].vkupno)+0.2;
                          else if(B[i].razlika1<B[j].razlika1)B[j].vkupno=float(B[j].vkupno)+0.2;
                    }
                    
                    if(j=2)
                    {
                          if(B[i].razlika1>B[j].razlika2)B[i].vkupno=float(B[i].vkupno)+0.2;
                          else if(B[i].razlika1<B[j].razlika2)B[j].vkupno=float(B[j].vkupno)+0.2;
                    }
                    
                    if(j=3)
                    {
                          if(B[i].razlika1>B[j].razlika3)B[i].vkupno=float(B[i].vkupno)+0.2;
                          else if(B[i].razlika1<B[j].razlika3)B[j].vkupno=float(B[j].vkupno)+0.2;
                    }
                 }
             }
         }
         
         for (int j=i+1;j<4;j++) //proveruvanje na vtoriot i tretiot uslov za poeni za grupa C
         {
             if(C[i].vkupno==C[j].vkupno)
             {
                 if(C[i].razlikavk>C[j].razlikavk)C[i].vkupno=int(C[i].VkupenBrPoeni)+0.5;
                 else if (C[i].razlikavk<C[j].razlikavk)C[j].vkupno=int(C[j].VkupenBrPoeni)+0.5;
                 if(C[i].vkupno==C[j].vkupno)
                 {
                    if(j=1)
                    {
                          if(C[i].razlika1>C[j].razlika1)C[i].vkupno=float(C[i].vkupno)+0.2;
                          else if(C[i].razlika1<C[j].razlika1)C[j].vkupno=float(C[j].vkupno)+0.2;
                    }
                    
                    if(j=2)
                    {
                          if(C[i].razlika1>C[j].razlika2)C[i].vkupno=float(C[i].vkupno)+0.2;
                          else if(C[i].razlika1<C[j].razlika2)C[j].vkupno=float(C[j].vkupno)+0.2;
                    }
                    
                    if(j=3)
                    {
                          if(C[i].razlika1>C[j].razlika3)C[i].vkupno=float(C[i].vkupno)+0.2;
                          else if(C[i].razlika1<C[j].razlika3)C[j].vkupno=float(C[j].vkupno)+0.2;
                    }
                 }
             }
         }
         
         for (int j=i+1;j<4;j++) //proveruvanje na vtoriot i tretiot uslov za poeni za grupa D
         {
             if(D[i].vkupno==D[j].vkupno)
             {
                 if(D[i].razlikavk>D[j].razlikavk)D[i].vkupno=int(D[i].VkupenBrPoeni)+0.5;
                 else if (D[i].razlikavk<D[j].razlikavk)D[j].vkupno=int(D[j].VkupenBrPoeni)+0.5;
                 if(D[i].vkupno==D[j].vkupno)
                 {
                    if(j=1)
                    {
                          if(D[i].razlika1>D[j].razlika1)D[i].vkupno=float(D[i].vkupno)+0.2;
                          else if(D[i].razlika1<D[j].razlika1)D[j].vkupno=float(D[j].vkupno)+0.2;
                    }
                    
                    if(j=2)
                    {
                          if(D[i].razlika1>D[j].razlika2)D[i].vkupno=float(D[i].vkupno)+0.2;
                          else if(D[i].razlika1<D[j].razlika2)D[j].vkupno=float(D[j].vkupno)+0.2;
                    }
                    
                    if(j=3)
                    {
                          if(D[i].razlika1>D[j].razlika3)D[i].vkupno=float(D[i].vkupno)+0.2;
                          else if(D[i].razlika1<D[j].razlika3)D[j].vkupno=float(D[j].vkupno)+0.2;
                    }
                 }
             }
}
}
         
     }
do //sortiranje na timovite vo grupa A
   {
    smena = false;
    for (int i=0;i<3;i++)
    {
      if (A[i].vkupno < A[i+1].vkupno)
      {
        swap( A[i], A[i+1] );
        smena = true;
      }
    }
}
  while (smena);

     do //sortiranje na timovite vo grupa B
   {
    smena = false;
    for (int i=0;i<3;i++)
    {
      if (B[i].vkupno < B[i+1].vkupno)
      {
        swap( B[i], B[i+1] );
        smena = true;
      }
    }
}
  while (smena);

     do //sortiranje na timovite vo grupa C
   {
    smena = false;
    for (int i=0;i<3;i++)
    {
      if (C[i].vkupno < C[i+1].vkupno)
      {
        swap( C[i], C[i+1] );
        smena = true;
      }
    }
}
  while (smena);

     do //sortiranje na timovite vo grupa D
   {
    smena = false;
    for (int i=0;i<3;i++)
    {
      if (D[i].vkupno < D[i+1].vkupno)
      {
        swap( D[i], D[i+1] );
        smena = true;
      }
    }
}
  while (smena);


           cout<<"Timovite se:"<<endl<<endl; //Izlez na timovite na ekran
      cout<<"1."<<B[1].ime<<"i"<<A[0].ime<<endl;
      cout<<"2."<<A[1].ime<<"i "<<B[0].ime<<endl;
      cout<<"3."<<C[1].ime<<"i"<<D[0].ime<<endl;
      cout<<"4."<<D[1].ime<<"i"<<C[0].ime<<endl;


     }
     else cout<<"Datotekata so timovite ne postoi"<<endl; //izlez na ekran dokolku datotekata ne postoi



     }
     int RezultatZaVtorTim(int a) //funkcija koja koja go prilagoduva rezultatot za vtoriot tim od vnesuvanjeto
     {
         int b;
         b=int(((a/100)%10)*1000+((a/1000)%10)*100+((a%10)*10)+((a/10)%10));
         return b;
     }
     int bodZbir(int a) //fukcija koja pravi algebarski zbir na poenite dobieni od dvata natprevari vo edno vnesuvanje
     {
         int c1,c2,c3,c4,r=0;
         c1=int(a/1000);
         c2=int((a/100)%10);
         c3=int((a/10)%10);
         c4=int(a%10);
         if(c1>c2) r+=3;
         else if(c1==c2) r+=1;
         if(c3>c4) r+=3;
         else if (c3==c4) r+=1;
         return r;
     }
     int razlika(int a)//funkcija koja opredeluva gol razlika
     {
         int c1,c2,c3,c4,r=0;
         c1=int(a/1000);
         c2=int((a/100)%10);
         c3=int((a/10)%10);
         c4=int(a%10);
         r+=(c1-c2);
         r+=(c3-c4);
     }
};
int main()
{
    grupan gr;//promenliva za strukturata
    int choice; //promenliva za izborot od menito
    cout<<"Vnesete go redniot broj pred operacijata koja sakate da se izvrsi!"<<endl<<endl;
    do
    {
        cout<<endl<<"1.Vnesuvanje na timovi"<<endl;
        cout<<"2.Vnesuvanje na rezultati i dobivanje na parovi"<<endl;
        cout<<"3.Izlez"<<endl;
        cin>>choice;
        if(choice!=1 && choice!=2 && choice!=3) cout<<"Vasiot izbor e nevaliden"<<endl;
        switch (choice) //switch struktura za menito
    {
        case 1: vnesuvanje();
        break;
        case 2: gr.rezultati();
        break;
        case 3:
        return 0;
    }
    } while(choice!=3);//uslov za da se pojavuva menito povtorno posle sekoja izvrsena komanda se dodeka ne ispecatime 3 za izlez
    system ("pause");
    return 0;
}
void vnesuvanje() //funkcija koja ovozmozuva vnesuvanje na timovite i nivnite grupi
{
     int la=0,lb=0,lc=0,ld=0,loop; //promenlivi koi se koristat vo ciklusite podolu vo funkcijata
     char grupa; //promenliva vo koja ja vnesuvame grupata
     bool smena; //promenliva koja sluzi za sortiranje
     struct grupan gr; //promenliva za pristap do strukturata
     for (loop=0;loop<16;loop++)//for cikus za vnesuvanje na timovi
     {
         cout<<"Vneste ja grupata na timot so reden broj "<<loop+1<<":"<<endl;
         cin>>grupa;
         if (grupa=='A' || grupa=='a')
         {
            if (la==4)
            {
               cout<<"Grupata A e veke polna, Ve molime odberete druga grupa"<<endl;
               loop--;
               continue;
            }
            gr.A[la].ime="**************************************************************";
            while (gr.A[la].ime.length()>30)
            { 
              cout<<"Vnesete go imeto na timot so reden broj "<<loop+1<<":"<<endl;
              cin>>gr.A[la].ime;
              if (gr.A[la].ime.length()>30) cout<<"Ime na timot treba da bide do 30 karakteri"<<endl;
            }
            la++;
         }

         else if (grupa=='B' || grupa=='b')
         {
            if (lb==4)
            {
               cout<<"Grupata B e veke polna, Ve molime odberete druga grupa"<<endl;
               loop--;
               continue;
            }
            gr.B[lb].ime="**************************************************************";
            while (gr.B[lb].ime.length()>30)
            { 
              cout<<"Vnesete go imeto na timot so reden broj"<<loop+1<<":"<<endl;
              cin>>gr.B[lb].ime;
              if (gr.B[lb].ime.length()>30) cout<<"Ime na timot treba da bide do 30 karakteri"<<endl;
            }
            lb++;
         }

         else if (grupa=='C' || grupa=='c')
         {
            if (lc==4)
            {
               cout<<"Grupata C e veke polna, Ve molime odberete druga grupa"<<endl;
               loop--;
               continue;
            }
            gr.C[lc].ime="**************************************************************";
            while (gr.C[lc].ime.length()>30)
            { 
              cout<<"Vnesete go imeto na timot so reden broj "<<loop+1<<":"<<endl;
              cin>>gr.C[lc].ime;
              if (gr.C[lc].ime.length()>30) cout<<"Ime na timot treba da bide do 30 karakteri"<<endl;
            }
            lc++;
         }

         else if (grupa=='D' || grupa=='d')
         {
            if (ld==4)
            {
               cout<<"Grupata D e veke polna, Ve molime odberete druga grupa"<<endl;
               loop--;
               continue;
            }
            gr.D[ld].ime="**************************************************************";
            while (gr.D[ld].ime.length()>30)
            { 
              cout<<"Vnesete go imeto na timot so reden broj "<<loop+1<<":"<<endl;
              cin>>gr.D[ld].ime;
              if (gr.D[ld].ime.length()>30) cout<<"Ime na timot treba da bide do 30 karakteri"<<endl;
            }
            ld++;
         }
         else
         {
             cout<<"Ne postoi takva grupa, Ve molime odberete grupa 'A', 'B', 'C' ili 'D'"<<endl;
             loop--;
         }
     }

     do //sortiranje po ime vo grupa A
   {
    smena = false;
    for (int i=0;i<3;i++)
    {
      if (gr.A[i].ime > gr.A[i+1].ime)
      {
        swap( gr.A[i], gr.A[i+1] );
        smena = true;
      }
    }
}
  while (smena);

     do //sortiranje po ime vo grupa B
   {
    smena = false;
    for (int i=0;i<3;i++)
    {
      if (gr.B[i].ime > gr.B[i+1].ime)
      {
        swap( gr.B[i], gr.B[i+1] );
        smena = true;
      }
    }
}
  while (smena);

     do //sortiranje po ime vo grupa C
   {
    smena = false;
    for (int i=0;i<3;i++)
    {
      if (gr.C[i].ime > gr.C[i+1].ime)
      {
        swap( gr.C[i], gr.C[i+1] );
        smena = true;
      }
    }
}
  while (smena);

     do //sortiranje po ime vo grupa D
   {
    smena = false;
    for (int i=0;i<3;i++)
    {
      if (gr.D[i].ime > gr.D[i+1].ime)
      {
        swap( gr.D[i], gr.D[i+1] );
        smena = true;
      }
    }
}
  while (smena);

     ofstream datoteka("Grupi.dat"); //zapisuvanje vo izlezna datoteka
     for (int i=0;i<4;i++)
     {
         datoteka<<gr.A[i].ime<<endl;
     }
     for (int i=0;i<4;i++)
     {
         datoteka<<gr.B[i].ime<<endl;
     }
     for (int i=0;i<4;i++)
     {
         datoteka<<gr.C[i].ime<<endl;
     }
     for (int i=0;i<4;i++)
     {
         datoteka<<gr.D[i].ime<<endl;
     }
}

