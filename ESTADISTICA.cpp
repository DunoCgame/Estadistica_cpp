#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;

int o;
int g,limite,e,rango;       
float w,cal,N,n,ni,a,b,d,c,xi,ca,Na,X;
float Mo,Li,Fi,Fb,Fc,ai,qw,qe,qr;
float Me,CC,AA,DD,EE,FF,cs,cd,cf; 
float Q,LL,HH,OO,PP,MM,fs,fd,ff;
float Dk,TT,KK,II,YY,NN,ts,td,tf; 
float P,UU,RR,VV,BB,SS,us,ud,uf; 

int main(){

do{
          int op;
char conv;

    cout<< " 1:MUESTRA "<<endl;
    cout<< " 2:MEDIA "<<endl;
    cout<< " 3:MODA "<<endl;
    cout<< " 4:MEDIANA"<<endl; 
    cout<< " 5:CUARTIL"<<endl;
     cout<<" 6:DECIALES"<<endl;
     cout<<" 7:PERCENTILES"<<endl;
        cin>>conv;

         
      switch (conv) {
             
             case'1':
                    ///// Muestra
////int g,limite;
////float w,cal,N,n,ni; 
////float a,b,d,c;

 cout<< " 1:MUESTRA"<<endl;
 cout<< " 2:MUESTRA de cada estrato "<<endl;
 cin>>op;
         
 if (op==1){
            cout<< " 1:MUESTRA "<<endl;
         printf("numero de cal o introducir.\n");
     scanf("%d",&limite);
for(g=1;g<=limite;g++){
                       
              printf("introdusca el calculo %d.\n",g);         
          scanf("%f",&cal);            
              N+=cal;    
              }    
              n =( N/(1+N*0.1*0.1));
             
              printf("la Poblacion total N es = %.0f",N );
              printf("\n");
              printf("Muestra general es n =%.2f",n);
              printf("\n");
             
              getch();
          
    }

 
    
 if (op==2){
   
cout<<" 2:MUESTRA de cada estrato "<<endl;    
cout<< "  "<<endl;       
cout<< " valor de N "<<endl;
cin>>a;
cout<< " valor de nh "<<endl;
cin>>b;
cout<< " valor de n "<<endl;
cin>>c;
d=b/a;
w=d*c;
cout<< " El resultado "<<w<<endl;            
  cout<<" "<<endl;    
 }


break;
///////medida argmetica 

case'2':

      

/////float xi,ca,Na,X;
/////int e,rango;
          
     cout<< " 3:MEDIA "<<endl;
  
         printf("numero de cal o introducir.\n");
     scanf("%d",&rango);
for(e=1;e<=rango;e++){
                       
              printf("introdusca el calculo %d.\n",e);         
          scanf("%f",&ca);            
              xi+=ca;    
              }    
         
             Na=rango;
             X=(xi/Na);
             printf("la Poblacion total Xi es = %.2f",xi );
             printf("\n");
             printf("Muestra general es N =%.2f",Na);
             printf("\n");
            printf("EL RESULTADO TOTAL X =%.2f",X);
  
           printf("\n");

 break;        
      ////  //MODA
    //// //float Mo,Li,Fi,Fb,Fc,ai,qw,qe,qr;  
   case'3':     
      cout<< " 3:MODA "<<endl;   
       cout<< " INGRESE EL VALOR DEL Li"<<endl;    
       cin>>Li;
          cout<< " INGRESE EL VALOR DEL Fi"<<endl;    
        cin>>Fi;
         cout<< " INGRESE EL VALOR DEL Fi-1"<<endl;    
        cin>>Fb;
        cout<< " INGRESE EL VALOR DEL Fi+1"<<endl;    
       cin>>Fc;
        cout<< " INGRESE EL VALOR DEL ai"<<endl;    
        cin>>ai;
        qw=Fi-Fb;
        qe=(Fi-Fb+Fi-Fc);
        qr=qw*ai;
        Mo=(Li+(qr/qe));
 /// // Mo=((Li+((Fi-Fb)/(Fi-Fb)+(Fi-Fc))*ai));
         cout<< " LA MODA ES ="<<Mo<<endl; 
      break; 
  ///////   // Media
         case'4': 
          float Me,CC,AA,DD,EE,FF,cs,cd,cf; 
                    
      cout<< " 4:MEDIANA "<<endl;  
      cout<< " INGRESE EL VALOR DEL Li"<<endl;    
        cin>>EE; 
       cout<< " INGRESE EL VALOR DEL N/2"<<endl;    
        cin>>CC;
          cout<< " INGRESE EL VALOR DEL Fi"<<endl;    
        cin>>AA;
         cout<< " INGRESE EL VALOR DEL Fi-1"<<endl;    
        cin>>DD;
         cout<< " INGRESE EL VALOR DEL ai"<<endl;    
        cin>>FF;
        cs=CC-DD;
        cf=cs*FF;
       Me=(EE+(cf/AA));
         cout<< " LA MEDIANA ES ="<<Me<<endl; 
      break; 
//////     CUARTIL   
     case'5': 
          float Q,LL,HH,OO,PP,MM,fs,fd,ff; 
      //////  //cuartiles            
      cout<< " 5:CUARTILES "<<endl;  
      cout<< " INGRESE EL VALOR DEL Li"<<endl;    
        cin>>LL; 
       cout<< " INGRESE EL VALOR DEL N*K/4"<<endl;    
        cin>>HH;
          cout<< " INGRESE EL VALOR DEL Fi"<<endl;    
        cin>>OO;
         cout<< " INGRESE EL VALOR DEL Fi-1"<<endl;    
        cin>>PP;
         cout<< " INGRESE EL VALOR DEL ai"<<endl;    
        cin>>MM;
        fs=HH-PP;
        ff=cs*MM;
       Q=(LL+(ff/OO));
         cout<< " EL CUARTIL ES ="<<Q<<endl; 
      break; 
      //////  //DECIALES
    case'6': 
          float Dk,TT,KK,II,YY,NN,ts,td,tf; 
                    
      cout<< " 6:DECIALES "<<endl;  
      cout<< " INGRESE EL VALOR DEL Li"<<endl;    
        cin>>KK; 
       cout<< " INGRESE EL VALOR DEL N*K/10"<<endl;    
        cin>>NN;
          cout<< " INGRESE EL VALOR DEL Fi"<<endl;    
        cin>>II;
         cout<< " INGRESE EL VALOR DEL Fi-1"<<endl;    
        cin>>YY;
         cout<< " INGRESE EL VALOR DEL ai"<<endl;    
        cin>>TT;
        ts=NN-YY;
        tf=ts*TT;
       Dk=(KK+(tf/II));
         cout<< " EL DECIALES ES ="<<Dk<<endl; 
      break; 
   
/////////PERCENTILES
 case'7': 
        /////// // float P,UU,RR,VV,BB,SS,us,ud,uf; 
                    
      cout<< " 7:PERCENTILES "<<endl;  
      cout<< " INGRESE EL VALOR DEL Li"<<endl;    
        cin>>UU; 
       cout<< " INGRESE EL VALOR DEL N*K/100"<<endl;    
        cin>>RR;
          cout<< " INGRESE EL VALOR DEL Fi"<<endl;    
        cin>>BB;
         cout<< " INGRESE EL VALOR DEL Fi-1"<<endl;    
        cin>>VV;
         cout<< " INGRESE EL VALOR DEL ai"<<endl;    
        cin>>SS;
        us=RR-VV;
        uf=us*SS;
       P=(UU+(uf/BB));
         cout<< " EL PERCENTIL es ="<<P<<endl; 
      break; 
   


        
        

        
        
        
     
   
    }//cierre del switch

cout<<"                      "<<"남께께께께께께께께께께께께께께께�"<<endl;
cout<<"                      "<<"남께께께께 Salir     1 께께께께껙"<<endl;
cout<<"                      "<<"남께께께께             께께께께껙"<<endl;
cout<<"                      "<<"남께께께께 continuar 2 께께께께껙"<<endl;
cout<<"                      "<<"남께께께께께께께께께께께께께께께�"<<endl;
  cin>>o;

}//Cierre de do while

  while(o==2);
 
     
     
        
        
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
