#include "sauvegarde.h"

void sauvegarde (char fich[20])
{
	int i;
	FILE *f;
	
	f=fopen(fich,"wb");


	fwrite(&evan,sizeof(hero),1,f);

for (i=0;i<sizeof(chouka);i++)
	{

	fwrite(&chouka,sizeof(objet),1,f);

}
 //fwrite(&Enemy,sizeof(e),1,f);

//for (i=0;i<sizeof(Enemy);i++)
	{
		//fwrite(Enemy,sizeof(e),1,f);
	}
	
	
	fclose(f);
	
}

void lire (char fich[20])
{
	int i;
	FILE *f;
	
	f=fopen(fich,"rb");
	if (f==NULL)
	{
		printf("erreur, fichier ne peut pas etre ouvert\n");
		exit(0);
	}
	
	else
	{
		fread(&evan,sizeof(hero),1,f);
		
		for (i=0;i<sizeof(chouka);i++)
		{
			fread(&chouka,sizeof(objet),1,f);
		}
		
		
	
		//for (i=0;i<Enemy;i++)
		{
			//fread(&Enemy,sizeof(e),1,f);
		}
	}
	
	fclose(f);
}
