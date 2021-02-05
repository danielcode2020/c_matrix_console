#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x[100][100],a[100][100],k =9 , n;

// x[100] [100] - matricea de baza ,
// a[100][100]-   matricea cu care afisam variantele 1>12
// k-  dimensiunea matricii a[100] [100]

void revenir_au_menu(){
    char c;

    do{
    c = getch();

     }while ((c!='m'));

    menu_principal();

}


void aficher_matrice_v() // afisarea  matricii a[100][100]
{
    system("cls");
    for ( int i = 0; i<k;i++){
        printf("\n");
        printf("\n");
        for ( int j = 0; j<k; j++){

            printf("%4d", a[i][j]);
        }
    }
    char c;
    printf("\n ");
    printf("\n Appuyez s pour sortir");
    do{
    c = getch();

     }while ((c!='s'));

    menu_principal();

}
void initialiser(){  // tuturor elementelor matricei a[100][100] li se atribuie 0

	for (int i=0;i<k;i++){
		for (int j = 0; j<k;j++){
		a[i][j]=0;

		}
	}

}

void varianta1()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
    initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ((i+j<=k-1) && (j>=k/2) || (i+j<=k-1) && (i>=k/2) || (i<=j) && (i>=k/2) ){
    		a[i][j]=1;
		}
		}
	}

   aficher_matrice_v();


}

void varianta2()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ((i+j>=k-1) && (i>=j) ||(i+j>=k-1) &&(i<=k/2) || (i>=j) &&(j<=k/2) && (i<=k/2)){
    		a[i][j]=1;
		}
		}
	}

	aficher_matrice_v();


}

void varianta3()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ((i+j>k-1) || (i>j)){
    		a[i][j]=1;
		}
		}
	}

	aficher_matrice_v();

}

void varianta4()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ((i+j<=k-1) || (j<=k/2)){
    		a[i][j]=1;
		}
		}
	}

   aficher_matrice_v();

}

void varianta5()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ((j<k/2-i/2+1) || (j>k/2+i/2-1)  ){
    		a[i][j]=1;
		}
		}
	}

	aficher_matrice_v();

}

void varianta6()   // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ((i>=k*2-i-j-2) || (i<=j-i)) {
    		a[i][j]=1;
		}
		}
	}

	aficher_matrice_v();

}

void varianta7()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ((i<=k/4) && (j<=k/4) || (i>=k-k/4-1 ) && (j>=k-k/4-1)  || (i<=k/4) && (j>=k-k/4-1) || (i>=k-k/4-1) && (j<=k/4)   ) {
    		a[i][j]=1;
		}
		}
	}

	aficher_matrice_v();

}


void varianta8()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ( (j>=k/2) || (i>=k-j-1) ) {
    		a[i][j]=1;
		}
		}
	}

	aficher_matrice_v();

}

void varianta9() // atribuie unor elemente valoarea 1 in dependenta de varianta
{
    initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ( (i<k-j) && (i<=j) || (i<k-j) && (i>k/2) || (i<=j) && (i>k/2)  ) {
    		a[i][j]=1;
		}
		}
	}

	aficher_matrice_v();


}

void varianta10()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ( (i<=k/2+j ) && (j<=k/2+i) ) {
    		a[i][j]=1;
		}
	}
    }

	aficher_matrice_v();


}

void varianta11()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ( (j<i/2 +1)  || (j>=k-i/2 -1)   ) {
    		a[i][j]=1;
		}
	}
    }

	aficher_matrice_v();


}

void varianta12()  // atribuie unor elemente valoarea 1 in dependenta de varianta
{
	initialiser();

    for (int i=0;i<k;i++){
    	for (int j = 0;j<k;j++){
    	if ( (i<=k/2+j ) && (j<=k/2+i) && (i>=k/2-j) && (j<=k-i+k/2-1) ) {
    		a[i][j]=1;
		}
	}
    }

	aficher_matrice_v();

}

void surface_1() // construieste modelul de matrice hasurata 8
{
    int v[100][100], k;

    k = 5;
   for (int i=0;i<k;i++){
           for (int j=0;j<k;j++){
               v[i][j] = 0;
       }
   }

   for (int i=0;i<k;i++){
           for (int j=0;j<k;j++){
               if ((j>=k/2) || ((j<k/2) && (i>=k-j-1) ))  {
                   v[i][j] = 1;

           }
       }
   }
   for ( int i = 0; i<k;i++){
           printf("\n");
           printf("\n");
           for ( int j = 0; j<k; j++){

               printf("%4d", v[i][j]);
           }
       }
    printf("\n");

}
void surface_2() // construieste si afiseaza modelul de matrice hasurata 11
{
    int v[100][100],  k;
    k = 5;
   for (int i=0;i<k;i++){
           for (int j=0;j<k;j++){
               v[i][j] = 0;
       }
   }

   for (int i=0;i<k;i++){
           for (int j=0;j<k;j++){
               if ((j<i/2 +1)  || (j>=k-i/2 -1)  )  {
                   v[i][j] = 1;

           }
       }
   }
   for ( int i = 0; i<k;i++){
           printf("\n");
           printf("\n");
           for ( int j = 0; j<k; j++){

               printf("%4d", v[i][j]);
           }
       }
    printf("\n");

}


void introduire()  // citirea lui  n
{
    system("cls");
    printf("Introduisez n : ");
    scanf("%d", &n);
    sleep(1);
    menu_principal();

}
void manuel()   // introducerea elementelor matricii de baza pu lucru

{   system("cls");
    for ( int i = 0; i<n;i++){
        for ( int j = 0; j<n; j++){
            printf("Introduisez la valeur pour element [%d][%d]  : ", i, j);
            scanf("%d", &x[i][j]);
        }

    }
    printf(" \n Les valeurs sont introduis !  \n  ");
    sleep(1);
    printf(" \n On va revenir sur le menu principal ... \n  ");
    sleep(2);
    menu_principal();
}



void automatique() //introducerea elementelor automat , random
{
srand(time(NULL));
  int max, min;
  max=10;
  min=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            x[i][j] = ((rand() % max +min +1) + min)-((rand()% max - min +1 ) +min); // obtinem numere intre  -10 si 10
        }
    }
    aficher_matrice();

}

void aficher_matrice() // afisarea matricii de baza cu care lucram
{
    system("cls");
    for ( int i = 0; i<n;i++){
        printf("\n");
        printf("\n");
        for ( int j = 0; j<n; j++){

            printf("%4d", x[i][j]);
        }
    }

    printf("\n  ");

    printf(" \n m - menu principal \n  ");
    char c;

    do{
    c = getch();


     }while ((c!='m'));

    menu_principal();

}
void aficher_m() // afisarea matricii de baza cu care lucram
{

    for ( int i = 0; i<n;i++){
        printf("\n");
        printf("\n");
        for ( int j = 0; j<n; j++){

            printf("%4d", x[i][j]);
        }
    }

    printf("\n  ");

    printf(" \n m - menu principal \n  ");
    char c;

    do{
    c = getch();


     }while ((c!='m'));

    menu_principal();

}



void v_11_1()
{
    int produit;
    system("cls");

    produit = 1;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
             if (j<i/2+1  || j>=n-i/2 -1  ) {
                if (x[i][j] % 2 == 1 ){
                    produit*=x[i][j]; //  intrebare daca produsul la negative si pozitive
                }

             }
        }

    }


    printf(" \n  Le produit est :  %d ", produit);
    printf("\n  ");
    aficher_m();

}


void v_11_2()
{
    system("cls");
    int maximal;

    //gaseste primul element
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
             if (j<i/2+1  || j>=n-i/2 -1  ) {
                maximal = x[i][j] ;
                break;
             }
        }

    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
             if (j<i/2+1  || j>=n-i/2 -1  ) {
                if (maximal < x[i][j]){
                    maximal = x[i][j];
                }
             }
        }
    }

    printf("L'element maximal du surface hachuree :  %d ", maximal);
    printf("\n  ");
    aficher_m();
}

void v_11_3()
{
    system("cls");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
                a[i][j] = x[i][j];
        }
    }


    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
             if ((j<i/2 +1)  || (j>=n-i/2 -1)  ) {}
                 else  if (a[i][j] < 0 ){
                   a[i][j]=0;

             }
        }
    }


    printf("\n Matrice modifiee : ");
    for ( int i = 0; i<n;i++){
        printf("\n");
        printf("\n");
        for ( int j = 0; j<n; j++){

            printf("   %d", a[i][j]);
        }
    }


    printf("\n  ");

    printf(" \n m - menu principal \n  ");
    revenir_au_menu();

}

void v_8_1(){

    system("cls");
    int moyenne_i, np_i;
    float moyenne_f, np_f;

    moyenne_i=0;
    np_i=0;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if ((j>=n/2) || ((j<=n/2) && (i>=n-j-1) ))  {
                if (x[i][j] % 2 == 0){
                    moyenne_i+=x[i][j];
                    np_i++;
                }
            }

        }
    }


    moyenne_f = moyenne_i;
    np_f = np_i;
    printf(" \n La moyenne arithmetique est : %f ", moyenne_f/np_f);
    printf("\n  ");
    aficher_m();


}

void v_8_2()
{
    system("cls");
    int max_col;
    int m[100][100];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            m[i][j] = x[i][j];
        }

    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if ((j>=n/2) || ((j<=n/2) && (i>=n-j-1) ))  {
                } else m[i][j] = -1000;
            }

        }

    for (int i=0;i<n;i++){
            max_col = m[0][i];
        for (int j=0;j<n;j++){

                if (m[j][i] > max_col){
                    max_col = m[j][i];
                }



                if (j == n-1)
              {
                    printf("\n max de la colonne %d  :%d ",i, max_col);

              }

            }
        }

    printf("\n  ");

    aficher_m();

}
void v_8_3(){
int nombre, f ;
    system("cls");
    f=0;
    printf("\n Introduisez un nombre : ");
    scanf("%d",&nombre);

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){

            if ((j>=n/2) || ((j<=n/2) && (i>=n-j-1) ))  {
            } else if (x[i][j]==nombre ){
                f++;
                }
            }

        }
    printf(" \n Le nombre %d se trouve %d fois dans la surface non hachuree ",nombre,f);

    printf("\n  ");

    aficher_m();
}

void menu_principal()
{
    system("cls");
    printf("\n Menu : ");
    printf("\n 1 - Introduisez la taille de la matrice ");
    printf("\n 2 - Introduisez les elements manuellement ");
    printf("\n 3 - Les elements sont choisis automatiquement ");
    printf("\n 4 - Ouvrir le menu des taches 1  ");
    printf("\n 5 - Ouvrir le menu des taches 2  ");
    printf("\n 6 - Afficher la matrice ");
    printf("\n 7 - Ouvrir le menu des sufraches hachurees ");
    printf("\n 8 - Fermez l'application \n");

}
void menu_taches_1()
{

    system("cls");
    surface_1();
    printf("\n 1 - Calculez la moyenne arithmetique des elements pairs de la surface hachuree ");
    printf("\n 2 - Determinez l’element maximal de chaque colonne de la surface hachuree ");
    printf("\n 3 - Determinez combien de fois on trouve dans la matrice un certain nombre (indique par utilisateur) de la surface non-hachuree");
    printf("\n m - menu principal \n");


}

void menu_taches_2()
{

    system("cls");
    surface_2();
    printf("\n 1 - Calculez le produit des éléments impairs de la surface hachuree. ");
    printf("\n 2 - Determinez l’element maximal du perimetre de la surface hachuree. ");
    printf("\n 3 - Remplacez les elements negatifs de la surface non-hachuree avec des zeros.");
    printf("\n m - menu principal \n");


}

void menu_surfaces() //meniul cu variantele de suprafata
{
	system("cls");
    printf("\n Choisisez une variante ");
    printf("\n Et introduisez son nombre [1..9] ou  ");
    printf("\n d - pour 10 ");
    printf("\n o - pour 11 ");
    printf("\n z - pour 12  : ");
    printf("\n m - menu principal \n");

}




int main(){
    char c,l;
    printf("Bienvenue dans le systeme de travail avec les matrices ! ");
    sleep(2);
    system("cls");
    menu_principal();
    while (1){

    c = getch();

    switch(c){
    case '1':
        introduire();break;
    case '2':
        manuel();break;
    case '3':
        automatique();break;
    case '4':
        {

        menu_taches_1();
        l = getch();
        switch (l){
        case '1':
            v_8_1(); break;
        case '2':
            v_8_2(); break;
        case '3':
            v_8_3(); break;
        case 'm':
            menu_principal();break;

        }

        break;

        }
    case '5':
        {



        menu_taches_2();
        l = getch();
        switch (l){
        case '1':
            v_11_1(); break;
        case '2':
            v_11_2(); break;
        case '3':
            v_11_3(); break;
        case 'm':
            menu_principal();break;

        }
        break;
        }

    case '6':
    	aficher_matrice();break;
    case '7':
        menu_surfaces();
        l = getch();
        switch(l){
            case '1':
                varianta1();break;
            case '2':
                varianta2();break;
            case '3':
                varianta3();break;
            case '4':
                varianta4();break;
            case '5':
                varianta5();break;
            case '6':
                varianta6();break;
            case '7':
                varianta7();break;
            case '8':
                varianta8();break;
            case '9':
                varianta9();break;
            case 'd':
                varianta10();break;
            case 'o':
                varianta11();break;
            case 'z':
                varianta12();break;
            case 'm':
                menu_principal();break;

        }
        break;

    case '8':
        exit(0);

    }
    }

    return 0;

}



