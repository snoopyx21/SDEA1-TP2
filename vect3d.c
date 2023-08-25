#include "vect3d.h"
#include "stdio.h"

vect3d creer_vec(float i1,float i2,float i3){
  vect3d u;
  u.x=i1;
  u.y=i2;
  u.z=i3;
  return u;
}

float valeur_vecx(vect3d v){
  return (v.x);
}

float valeur_vecy(vect3d v){
  return (v.y);
}

float valeur_vecz(vect3d v){
  return (v.z);
}

vect3d somme(vect3d u1,vect3d u2){
  vect3d u;
  (u.x)=(u1.x)+(u2.x);
  
  (u.y)=(u1.y)+(u2.y);

  (u.z)=(u1.z)+(u2.z);
  return u;
}

vect3d produit(vect3d u,float a){
  return (vect3d) {a*u.x,a*u.y,a*u.z};
}

float pro_scalaire(vect3d u1,vect3d u2){
  return (u1.x*u2.x + u1.y+u2.y + u1.z*u2.z);
}


vect3d pro_vectoriel(vect3d u1,vect3d u2){
  vect3d u;
  u.x=(u1.y)*(u2.z)-(u1.z)*(u2.x);
  u.y=(u1.z)*(u2.x)-(u1.x)*(u2.z);
  u.z=(u1.y)*(u2.z)-(u1.z)*(u2.x);
  return u;
}

vect3d affichage2(){
  int i1,i2,i3;
  vect3d u;
  printf("entrez x \n");
  scanf("%d",&i1);
  printf("entrez y \n");
  scanf("%d",&i2);
  printf("entrez z \n");
  scanf("%d",&i3);
  u.x=i1;
  u.y=i2;
  u.z=i3;
  return u;
}

void affichage3(vect3d u){
  printf("x = %f , y = %f , z = %f \n",u.x,u.y,u.z);
}

void orthogonal(vect3d u1,vect3d u2){
  if (pro_scalaire(u1,u2) == 0)
    printf("les deux vecteurs sont orthogonaux \n");
  else printf("les deux vecteurs ne sont pas orthogonaux \n");
  return;
}

int main(){
  vect3d u,v;
  u=creer_vec(5,6,8);
  v=creer_vec(9,5,7);
  valeur_vecx(u);
  valeur_vecy(u);
  valeur_vecz(u);
  somme(u,v);
  pro_scalaire(u,v);
  pro_vectoriel(u,v);
  affichage3(u);
  orthogonal(u,v);
  return 0;
}
