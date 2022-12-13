/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:../../2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <windows.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard
void passageEnGris(unsigned long &pixel);
unsigned long niveauDeRouge(unsigned long pixel);
unsigned long niveauDeVert(unsigned long pixel);
unsigned long niveauDeBleu(unsigned long pixel);

/*======================================================
Fonction principal
========================================================*/
int main()
{
    unsigned long pixel, vert , bleu , rouge;
    SetConsoleOutputCP(1252);
    //code endesous
    //cout << "Entrez un pixel" << endl;
    //cin >> pixel;
    pixel = 0x12459A;
    passageEnGris(pixel);
    rouge=niveauDeRouge(pixel);
    vert=niveauDeVert(pixel);
    bleu=niveauDeBleu(pixel);

    cout <<hex<< rouge << endl;
    cout <<hex<< vert << endl;
    cout <<hex<< bleu << endl;
    

    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
void passageEnGris(unsigned long &pixel)
{
    unsigned long rouge, vert, masque, bleu, moyenne;
    rouge=niveauDeRouge(pixel);
    vert=niveauDeVert(pixel);
    bleu=niveauDeBleu(pixel);


    moyenne = (rouge + vert + bleu) / 3;
    pixel = moyenne;
    pixel = pixel << 8 ;
    pixel +=moyenne;
    pixel = pixel << 8 ;
    pixel +=moyenne;
    
    
}


unsigned long niveauDeRouge(unsigned long pixel)
{
    unsigned long rouge;
    rouge = pixel >> 16;
    return rouge;
}

unsigned long niveauDeVert(unsigned long pixel)
{
    unsigned long vert , masque;
    vert = pixel >> 8;
    masque = 0xFF;
    vert = vert & masque;
    return vert;
}

unsigned long niveauDeBleu(unsigned long pixel)
{
    unsigned long bleu, masque;
    masque = 0xFF;
    bleu = pixel & masque;
    return bleu;
}




