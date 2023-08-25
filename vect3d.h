// fichier vect3d.h
// ...
// protection contre la double inclusion (include guard)

#ifndef __VECT_H__
#define __VECT_H__

typedef struct {
	float x;
	float y;
	float z;} vect3d;

vect3d creer_vec(float i1,float i2,float i3);
float valeur_vecx(vect3d v);
float valeur_vecy(vect3d v);
float valeur_vecz(vect3d v);
vect3d somme(vect3d u1,vect3d u2);
vect3d produit(vect3d u,float a);
float pro_scalaire(vect3d u1,vect3d u2);
vect3d pro_vectoriel(vect3d u1,vect3d u2);
vect3d affichage2();
void affichage3(vect3d u);
void orthogonal(vect3d u1,vect3d u2);

#endif
