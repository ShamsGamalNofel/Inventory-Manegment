#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;





int main()
{
    float History[100][10]={0};
 int g=0;
 cout << "Number of History Data: \n";
 cin >>g;
 cout <<"Enter Historical Data: \n \n";
 for(int i=0;i<g;i++){
        cout <<"Enter Demand Data: \n";
    cin >> History[i][0];
 cout <<"It`s Frequeny : \n";
    cin >>History[i][1];
 }
    //float year=200,Ordr_Cost=10,Hold_Cost=0.03,Lost_Sales=8;
    //int D_Randome[100]={6,63,57,94,52,69,32,30,48,88};
    //int L_Randome[100]={2,33,14};
    //float History[100][10]={{0,15},{1,30},{2,60},{3,120},{4,45},{5,30}};
    //float Lead[100][10]={{1,10},{2,25},{3,15}};
    int s=0;
    for(int i=0;i<g;i++){

        s+=History[i][1];
    }
     for(int i=0;i<g;i++){

        History[i][2]= History[i][1]/s;
    }
    History[0][3]=History[0][2];

      for(int i=1;i<6;i++){

        History[i][3]= History[i][2] + History[i-1][3];
    }
    cout <<"\n-------------------------------\n";

    cout <<"DE. FRQ.  PRB.  CUM.    Interval\n";
    cout <<"-----------------------------------\n";
    int zz=-1;
    float zzz=-1;


    for(int i=0;i<g;i++){
        for(int j=0;j<4;j++){
                if(j!=2){
                        zzz=History[i][j]*100;
                         zz=zzz;

                        if(j==3 && History[i][j]==1){
                            cout <<"1.00";
                        }

                        else if(j==3 && (zz%10)==0){



            cout << History[i][j] <<0<< "   " ;

                        }

                        else{
                            cout << History[i][j] << "   " ;
                        }
                }
            if(j==2){
                    int z=History[i][j]*100;


                    if( z && (z%10)==0){

                cout <<History[i][j] << 0 << "   ";


                    }
                    else{
                             cout << History[i][j] << "   " ;

                    }
            }

        }
        if(i==0){
                cout <<"                      "<< "01" <<" to " << History[0][3]*100<<endl;

            }
            if(i==1){
                cout <<"                       "<<(History[i-1][3] + (0.01)) *100<<" to "<< (History[i][3])*100<<endl;
            }
            if(i>1 ){

               cout <<"                        "<<(History[i-1][3] + (0.01)) *100<<" to "<< (History[i][3])*100<<endl;
            }







        // cout <<"\n-----------------------\n";
        cout << endl;
    }
    cout<<"----------\n";
    cout <<"Interval \n";
      cout<<"----------\n";
   cout << "01" <<" to " << History[0][3]*100<<endl;
for(int i=0;i<(g-1);i++){
    cout <<(History[i][3] + (0.01)) *100<<" to "<< (History[i+1][3])*100<<endl;
}
cout<<"---------\n";

    cout << endl;
    int Interval[105]={0};
    int x=0,v=1,y=0;

//cout << History[0][3]*100<< endl;
for(  int x=0;x<g;x++){


        for(int i=v;i<=(History[y][3]*100);i++){
        Interval[i]=History[y][0];



    }
      v=(History[y][3]*100)+1;
            y++;




}
float hh=((History[4][3])*100);
int hhh=hh;
Interval[ hhh  ]=History[4][0];
//cout << "+"<<hh <<" " << Interval[hh]<<"+"<< endl;
cout << endl;
cout <<"-------------------------";
cout << endl;

cout << endl;
cout <<"-------------------------";
cout << endl;



int d=0;
float Lead[100][10]={0};
 int gg=0;
 cout << "Number of Lead Data: \n";
 cin >>gg;
 cout <<"Enter Lead Data: \n \n";
 for(int i=0;i<gg;i++){
        cout <<"Enter Lead Data: \n";
    cin >> Lead[i][0];
 cout <<"It`s Frequency : \n";
    cin >>Lead[i][1];
 }
//float Lead[100][10]={{1,10},{2,25},{3,15}};
for(int i=0;i<gg;i++){

        d+=Lead[i][1];
    }
    for(int i=0;i<gg;i++){

        Lead[i][2]= Lead[i][1]/d;
    }
     Lead[0][3]=Lead[0][2];


      for(int i=1;i<gg;i++){

        Lead[i][3]= Lead[i][2] + Lead[i-1][3];
    }


     cout <<"LE. FRQ.  PRB.  CUM. \n";
    cout <<"-----------------------\n";
    int yy=-1;
    float yyy=-1;
    for(int i=0;i<gg;i++){
        for(int j=0;j<4;j++){
                if(j!=2){
                          zzz=Lead[i][j]*100;
                         zz=zzz;
                         //cout <<"+"<<Lead[i][j]*100<<"+";

                        if(j==3 && Lead[i][j]==1){
                            cout <<"1.00";
                        }
                        else if(j==3 && (zz%10)==0){



            cout << Lead[i][j] <<0<< "   " ;

                        }




                        else{


            cout << Lead[i][j] << "   " ;


                        }
                }
            if(j==2 ){
                    zzz=Lead[i][j]*100;
                         zz=zzz;


                    if( zz && (zz%10)==0){

                cout <<Lead[i][j] << 0 << "   ";

                    }
                    else{
                             cout << Lead[i][j] << "   " ;

                    }
            }

        }
        // cout <<"\n-----------------------\n";
        cout << endl;
    }
    cout<<"----------\n";
    cout <<"Interval \n";
      cout<<"----------\n";
   cout << "01" <<" to " << Lead[0][3]*100<<endl;
for(int i=0;i<(gg-1);i++){
    cout <<(Lead[i][3] + (0.01)) *100<<" to "<< (Lead[i+1][3])*100<<endl;
}
cout<<"---------\n";

     cout << endl;
    int Interval2[105]={0};
     x=0,v=1,y=0;

//cout << Lead[0][3]*100<< endl;
for(  int x=0;x<gg;x++){



        for(int i=v;i<=(Lead[y][3]*100);i++){
        Interval2[i]=Lead[y][0];



    }


 v=(Lead[y][3]*100)+1;
                y++;


}
 hh=((Lead[1][3])*100);
 hhh=hh;
Interval2[ hhh  ]=Lead[1][0];
//cout <<"+"<<hhh << "   "  << Interval2[hhh] <<"+" <<endl;
cout << endl;
cout <<"-------------------------";
cout << endl;
int cc=0;
int bb=0;
//int D_Randome[100]={6,63,57,94,52,69,32,30,48,88};
//int L_Randome[100]={2,33,14};
int D_Randome[100]={0};
int L_Randome[100]={0};
cout << "Enter Randome No. Demand Data: \n";
cin>>cc;
cout << endl;
cout << "Enter Randome Demand Data: \n";
for(int i=0;i<cc;i++){
    cin >> D_Randome[i];
}
cout << endl;

cout << "Enter Randome No. Led Data: \n";
cin>>bb;
cout << endl;
cout << "Enter Randome Led Data: \n";
for(int i=0;i<bb;i++){
    cin >> L_Randome[i];
}
cout << endl;

int Inventory[105][10]={0};
int Order_Q=10,Reorder_P=5,Curr=10;
Inventory[0][2]=Curr;
int o=0,w=0,ww=0,www=0;
cout<< "Enter Order Quantity: \n";
cin>>Order_Q;
cout<< "Reorder Point: \n";
cin>>Reorder_P;
cout<< "Current Inventory: \n";
cin>>Curr;
cout<<"-----------------------\n";

//Inventory[0][5]=Inventory[0][2]-Interval[ D_Randome[0] ];
for(int i=0;i<cc;i++){



        if(i>0 && www==0){

            Inventory[i][2]=Inventory[i-1][2]-Inventory[i-1][4];
        }
    Inventory[i][0]=i+1;
    Inventory[i][3]=D_Randome[i];
    Inventory[i][4]=Interval[ D_Randome[i] ];
    if(  (Inventory[i][2]-Inventory[i][4]) >=0 ){
    Inventory[i][5]=Inventory[i][2]-Inventory[i][4];
    Inventory[i][6]=0;

    }
    if((Inventory[i][2]-Inventory[i][4]) <=0){
        www=1;
    }

    if(  (Inventory[i][2]-Inventory[i][4]) <0 ){
        Inventory[i][5]=0;

         Inventory[i][6]= abs( Inventory[i][2]-Inventory[i][4]  );
    }
    if( Inventory[i][5]<= Reorder_P && w==0){
        Inventory[i][7]=1;
        Inventory[i][8]=L_Randome[o];
        Inventory[i][9]=Interval2[L_Randome[o]];

        w= Interval2[ L_Randome[o] ]+2;
        ww=1;
        o++;
    }

  if(ww){
  w--;
  if(w==0){
    ww=0;
     Inventory[i][1]=Order_Q;

      Inventory[i][2]+=Order_Q;
      Inventory[i][5]=Inventory[i][2]-Inventory[i][4];
      Inventory[i][6]=0;
      www=0;

  }
 }



}

float av_end=0,av_lo=0,av_o=0;
//cout <<"+"<<g<<"+"<<endl;
for(int i=0;i<cc;i++){
    av_end+=Inventory[i][5];
    av_lo+=Inventory[i][6];
    av_o+=Inventory[i][7];
}
av_end/=cc,av_lo/=cc,av_o/=cc;
cout << endl;
cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
cout <<"DAY            U.R               B.I              RNo.              Dem.             E.I             L.S              Ord.           RNo.              L\n";
cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
for(int i=0;i<cc;i++){
    for(int j=0;j<10;j++){
            if(j==7){
                if(Inventory[i][j]==0){
                    cout <<"NO" << "            ";
                }
                if(Inventory[i][j]==1){
                    cout <<"YES" << "           ";
                }
            }
            if(j!=7){
                    if(Inventory[i][j] <10){
        cout << Inventory[i][j] <<"                " ;
                    }
                    if(Inventory[i][j] >=10){
        cout << Inventory[i][j] <<"               " ;
                    }
            }
    }
    cout << endl;
}
float Av_Daily_Demand=0;
float Excpected_Daily_Demand=0;
for(int i=0;i<cc;i++){
        Av_Daily_Demand+=Inventory[i][4];

}
for(int i=0;i<g;i++){
        Excpected_Daily_Demand+= History[i][0]*History[i][2];

}
Av_Daily_Demand/=cc;

cout <<endl;
cout <<"------------------------\n";
cout <<"Total Ending: "<<av_end*cc <<"  Units \n"<<"Total Lost: "  <<av_lo*cc <<"  Unit \n" <<"Total Orders: "<<av_o*cc<<" Orders \n"<< endl;
cout <<"Average Ending: "<<av_end <<"  Units/day \n"<<"Average Lost: "  <<av_lo <<"  Unit/day \n" <<"Average Orders: "<<av_o<<" Order/day \n"<< endl;
cout <<"------------------------\n";
//float year=200,Ordr_Cost=10,Hold_Cost=0.03,Lost_Sales=8;
float year=0,Ordr_Cost=0,Hold_Cost=0,Lost_Sales=0;
cout <<"Enter Year: \n";
cin >>year;
cout <<"\n Enter Order Cost: \n";
cin>>Ordr_Cost;
cout <<"\n Enter Holding Cost: \n";
cin>>Hold_Cost;
cout<<"\n Enter Lost Sales: \n";
cin>>Lost_Sales;
cout <<endl;
cout <<"------------------\n";

cout <<"Average Daily Demand: " << Av_Daily_Demand<<endl;

cout <<"Expected Daily Demand: " << Excpected_Daily_Demand<<endl;

cout <<"Daily Order Cost: $" << Ordr_Cost*av_o <<endl;

cout <<"Daily Holding Cost: $"   << (Hold_Cost*av_end)  <<endl;

cout <<"Daily Stockout Cost: $"<< Lost_Sales*av_lo<<endl;

cout <<"Total Yearly inventory cost:  $"   << (((Ordr_Cost*av_o) + (Hold_Cost*av_end) +  (Lost_Sales*av_lo))*year) << endl;

cout <<"Total Daily inventory cost:  $"   << (Ordr_Cost*av_o) + (Hold_Cost*av_end) +  (Lost_Sales*av_lo) << endl;

cout <<"------------------------\n";


    return 0;
}
