//============================================================================
// Name        : Trenes.cpp
// Author      : Yazmin_Luevano
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <windows.h>
#include<conio.h>
#include<cstdlib>

using namespace std;


class Tren{

public:
    //variables
    	bool u1, u2, u3, u4, u5, u6, u7, u8; //0 rojo //1 verde
    	bool l1, l2, l3, l4,l5, l6; //0 rojo //1verde
    	bool s1, s2, s3, s4, s5; //1 ocupado 0 libre

	//metodos
 void reglas();
 void hechos();
 void othechos();
void inicializar();
}t;

void Tren::othechos(){
int op;
system("cls");
cout<<"\n1. U1 ";
cout<<"\n2. U2 ";
cout<<"\n3. U3 ";
cout<<"\n4. U4 ";
cout<<"\n5. U5";
cout<<"\n6. U6 ";
cout<<"\n7. U7 ";
cout<<"\n8. U8 ";
cout<<"\n9. L1 ";
cout<<"\n10. L2 ";
cout<<"\n11. L3 ";
cout<<"\n12. L4 ";
cout<<"\n13. L5 ";
cout<<"\n14. L6 ";
cout<<"\n15. S1 ";
cout<<"\n16. S2 ";
cout<<"\n17. S3 ";
cout<<"\n18. S4 ";
cout<<"\n19. S5 "<<endl;
cout<<"\nIngresa una opcion"<<endl;
cin>> op;
switch(op){
  case 1:
    cout<<"\nU1 ";
    cin>> u1;break;
  case 2:
      cout<<"\nU2 "; cin>> u2;break;
  case 3:
      cout<<"\nU3 "; cin>> u3;break;
  case 4:
      cout<<"\nU4 "; cin>> u4;break;
  case 5:
      cout<<"\nU5"; cin>> u5;break;
  case 6:
      cout<<"\nU6 "; cin>> u6;break;
  case 7:
      cout<<"\nU7 "; cin>> u7;break;
  case 8:
      cout<<"\nU8 "; cin>> u8;break;
  case 9:
      cout<<"\nL1 "; cin>> l1;break;
  case 10:
      cout<<"\nL2 ";cin>> l2;break;
  case 11:
      cout<<"\nL3 ";cin>> l3;break;
  case 12:cout<<"\nL4 ";cin>> l4;break;
  case 13:cout<<"\nL5 ";cin>> l5;break;
  case 14:cout<<"\nL6 ";cin>> l6;break;
  case 15:cout<<"\nS1 ";cin>> s1;break;
  case 16:cout<<"\nS2 ";cin>> s2;break;
 case 17:cout<<"\nS3 ";cin>> s3;break;

  case 18:cout<<"\nS4 ";cin>> s4;break;

  case 19:cout<<"\nS5 ";cin>> s5;break;


  default: cout<<"opcion no encontrada "<<endl;


 }

}

void Tren::inicializar(){

  u1=0, u2=0, u3=0, u4=0, u5=0, u6=0, u7=0, u8=0; //0 rojo //1 verde
  l1=0, l2=0, l3=0, l4=0,l5=0, l6=0; //0 rojo //1verde
  s1=0, s2=0, s3=0, s4=0, s5=0; //1 ocupado 0 libre

}

void Tren::hechos(){
inicializar();
int o;
int ciclo;
do{system("cls");
cout<<"Ingrese los hechos: "<<endl;

cout<<"S1: "; cin>>s1;
cout<<"S5: "; cin>> s5;
cout<<"S3: "; cin>> s3;
cout<<"U1: "; cin>> u1;

cout<<"\nQuiere darle cambiar el valor de otros hechos?: 1-si 0-no "; cin>>o ;
if (o==1) {
   othechos();
    }
else
system("cls");


cout<<"\nConclusiones\n"<<endl;

reglas();

cout<<"\nContinuar el programa? 1-si 0-no "; cin>>ciclo ;

 }while(ciclo==1);
 return ;
}



void Tren::reglas(){
//1 ocupado //0 libre

    //s1
 if (s1==1){ Sleep(30);
    s1=1;
     cout<<"S1 esta ocupada "<<endl;}

    else  if(s1==0) {

cout<<"S1 esta libre"<<endl;
 s1=0;
    }

    if (s2==1){ Sleep(30);
    s2=1;
     cout<<"S2 esta ocupada "<<endl;}

      else if(s2==0) { Sleep(30);
 Sleep(30);
cout<<"S2 esta libre"<<endl;
 s2=0;
    }
  //s3
        if (s3==1){ Sleep(30);
    s3=1;
     cout<<"S3 esta ocupada "<<endl;}

    else  if(s3==0) {

cout<<"S3 esta libre"<<endl;
 s3=0;
    }
    //s4
 if (s4==1){ Sleep(30);
    s4=1;
     cout<<"S4 esta ocupada "<<endl;}

     else if(s4==0) { Sleep(30);

cout<<"S4 esta libre"<<endl;
 s4=0;
    }

      //s5
 if (s5==1){ Sleep(30);
    s5=1;
     cout<<"S5 esta ocupada "<<endl;}

    else  if(s5==0) {

cout<<"S5 esta libre"<<endl;
 s5=0;
    }

//regla 1

 if(u1==1){ Sleep(30);
    cout<<"U1 esta en verde (regla 1)"<<endl;

    l1=0 ;
    cout<<"L1 esta en rojo (regla 1)"<<endl;
}
    else if(u1==0) {

cout<<"L1 esta en verde (regla 1)"<<endl;
 l1=1;
 u1=0;
    }
    if((u1==0)||(l1==0)) {u7=1;
 cout<<"U7 esta en rojo(regla 21)"<<endl;}

//regla 2
if (u6==1){ Sleep(30);
    l6=0;
     cout<<"L6 esta en rojo (regla 2)"<<endl;}



//regla 3
if (s1==1){ Sleep(30);
    u2=0;
    cout<<"U2 esta en rojo(regla 3)"<<endl; }
if (s1==0){ Sleep(30);
    u2=1;
    cout<<"U2 esta en verde (regla 3)"<<endl; }


//regla 4
if (s2==1){ Sleep(30);
    l2=0;
    cout<<"L2 esta en rojo (regla 4)"<<endl;
}

//regla 5-6
if (s3==1){ Sleep(30);
    cout<<"U3 esta en rojo (regla 5)"<<endl;u3=0;}

    if (s3==1){ Sleep(30);
    u4=0;
    cout<<"U4 esta en rojo (regla 6)"<<endl;
}


//regla 7
if (s4==1){ Sleep(30);
    u5=1;
    cout<<"U5 esta en rojo (regla 7)"<<endl;
}
if (s4==0){ Sleep(30);
    u5=0;
    cout<<"U5 esta en verde (regla 7)"<<endl;
}

//regla 8
if (s5==1){ Sleep(30);
    l5=1;
    cout<<"L5 esta en rojo (regla 8)"<<endl;
}

//regla 9
if (l5==0&u1==1){ Sleep(30);
    u5=1;
    cout<<"U5 esta en verde (regla 9)"<<endl;
}
if (u3==0&u1==1){ Sleep(30);
    l3=1;
    cout<<"L3 esta en verde (regla 9)"<<endl;
}
//regla 11-12
if ((u6==0)&(l6==0)||(u5==0&l5==0) ){ Sleep(30);
cout<<"L6 esta en rojo (regla 12)"<<endl;
 cout<<"U6 esta en rojo (regla 11)"<<endl;

}


//regla 13
if (u2==0&l2==0){ Sleep(30);
//u2
u7=0;
 cout<<"U7 esta en rojo (regla 1)"<<endl;
 }

 //regla 21
  if ((u1==1)||(l1==1)){ Sleep(30);
 u7=0;
 cout<<"U7 esta en rojo (regla 21)"<<endl;}



//regla 14
if (u5==0&l5==0){ Sleep(30);
u8=0 ;
cout<<"u8 esta en rojo (regla 22)"<<endl;}


//regla 15
if (u3==1){ Sleep(30);
 u4=0;
 cout<<"U4 esta en rojo (regla 15)"<<endl;
}

//regla 16
if (l3==1){ Sleep(30);
 l4=0;
 cout<<"L4 esta en rojo (regla 16)"<<endl;
}


//regla 17
if (u2==1){ Sleep(30);
    l2=0 ;
    cout<<"L2 esta en rojo (regla 17)"<<endl; }

//regla 18
if (u3==1){ Sleep(30);
    l3=0 ;
    cout<<"L3 esta en rojo (regla 18)"<<endl;}

//regla 19
if (u4==1){ Sleep(30);
    l4=0 ;
    cout<<"L4 esta en rojo (regla 19)"<<endl; }

//regla 20
if (u5==1){ Sleep(30);
    l5=0 ;
    cout<<"L5 esta en rojo (regla 8)"<<endl;}


//regla 22
if ((u6==1)||(l6==1)){ Sleep(30);
u8=0 ;
cout<<"u8 esta en rojo (regla 22)"<<endl;}
}

int main ()
{
    system("color f0");
Sleep(300);
t.hechos();

return 0;
}





