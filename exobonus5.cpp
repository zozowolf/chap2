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
unsigned long changerLuminosite(unsigned long pixel, int pourcentage);
unsigned long niveauDeRouge(unsigned long pixel);
unsigned long niveauDeVert(unsigned long pixel);
unsigned long niveauDeBleu(unsigned long pixel);

/*======================================================
Fonction principal
========================================================*/
int main()
{
    unsigned long pixel;
    int pourcentage;

    SetConsoleOutputCP(1252);
    // code en dessous

    cout << "Entrer  un pourcentage" << endl;
    cin >> pourcentage;
    pixel = 0x12459A;
    pixel = changerLuminosite(pixel, pourcentage);
    cout << hex << pixel << endl;
    // Attendons  qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

unsigned long changerLuminosite(unsigned long pixel, int pourcentage)
{
    unsigned long rouge, vert, bleu;

    rouge = niveauDeRouge(pixel);
    vert = niveauDeVert(pixel);
    bleu = niveauDeBleu(pixel);

    if (pourcentage < 0)
    {
        rouge =rouge * (1.0 - (pourcentage / 100.0));
        vert =vert * (1.0 - (pourcentage / 100.0));
        bleu =bleu * (1.0 - (pourcentage / 100.0));


        if (rouge < 0.0)
        {
            rouge = 0.0;
        }
        else if (vert < 0.0)
        {
            vert = 0.0;
        }
        else if (bleu < 0.0)
        {
            bleu = 0.0;
        }
    }
    else if (pourcentage > 0.0)
    {
        rouge =rouge * (1.0 + (pourcentage / 100.0));
        vert =vert * (1.0 + (pourcentage / 100.0));
        bleu =bleu * (1.0 + (pourcentage / 100.0));


        if (rouge > 255.0)
        {
            rouge = 255.0;
        }
        else if (vert > 255.0)
        {
            vert = 255.0;
        }
        else if (bleu > 255.0)
        {
            bleu = 255.0;
        }
    }
    hex; rouge;
    hex; vert;
    hex; bleu;
    pixel = rouge;
    pixel = pixel << 8;
    pixel += vert;
    pixel = pixel << 8;
    pixel += bleu;
    return pixel;
}

unsigned long niveauDeRouge(unsigned long pixel)
{
    unsigned long rouge;
    rouge = pixel >> 16;
    return rouge;
}

unsigned long niveauDeVert(unsigned long pixel)
{
    unsigned long vert, masque;
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
