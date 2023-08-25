#include "vect.h"
#include "stdio.h"

void v_nul(vect v){	                  
  int i;
  for(i=0;i<N;i++)
    v[i]=0;
}   
void v_modif_i(vect v, int i, fnum x){
  v[i]=x;
}
fnum v_ieme(vect v, int i){
  return v[i];
}             
void v_somme(vect v, vect w, vect r){
  int i;
  for(i=0;i<N;i++){
    r[i]=v[i]+w[i];
  }
}    
void v_prode(fnum a, vect v, vect r){
  int i;
  for(i=0;i<N;i++)
    r[i]=a*v[i];
}     
fnum v_prod_scal(vect v, vect w){        
  int i;
  fnum a;
  a=0;
  for(i=0;i<N;i++)
    a+=v[i]*w[i];
}
void v_cp(vect u, vect r){
  int i;
  for(i=0;i<N;i++)
    u[i]=r[i];
}
void v_print(vect v){
  int i;
  for(i=0;i<N;i++)
    printf("%f",v[i]);
  printf("\n");
}
void v_read(vect v){
  int i;
  for(i=0;i<N;i++){
    printf("donnez valeur numero %d du tableau à entrer : ",i);
    scanf("%f",v+i);
  }
}                     

int main(){
  vect v,w,u;
  v_nul(v);
  v_nul(u);
  v_nul(w);
  v_modif_i(v,2,8);
  v_somme(v,w,u);
  v_prode(5,v,w);
  v_cp(v,w);
  v_print(v);
  v_read(w);
  return 0;

}
