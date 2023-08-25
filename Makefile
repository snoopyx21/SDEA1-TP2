test3d : vect3d.o test3d.o
	gcc test3d.c vect3d.o -o test3d
vect3d.o : vect3d.h vect3d.c
	gcc -c vect3d.o -o vect3d
clean :
	rm lib/*.o
rmall : 
	rm testv testm lib/*.o
  
