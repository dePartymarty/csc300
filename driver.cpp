#include "Card.hpp"

int main(int argc, char** argv)
{
    Card* KingKrush = new Card("King Krush", 9, 8, 8);
    (*KingKrush).display();
    Card* ShadSlayer = new Card("Shadowhood Slayer", 1, 2, 1);
    (*ShadSlayer).display();
    Card* CrimRunner = new Card("Crimson Sigil Runner", 1, 1, 1);
    (*CrimRunner).display();
    Card* Magehunter = new Card("Magehunter", 3, 2, 3);
    (*Magehunter).display();
}