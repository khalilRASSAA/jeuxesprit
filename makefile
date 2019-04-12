programme:  main.o  fonctions.o
	gcc main.o   fonctions.o  -o programme -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer -g
main.o:main.c
	gcc -c main.c -g
fonctions.o:fonctions.c
	gcc -c fonctions.c -g
