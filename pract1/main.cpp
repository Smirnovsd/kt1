#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int kingX, kingY;
    int rookX, rookY;
    int bishopX, bishopY;

    std::cout << "Введите координаты короля (X Y): ";
    std::cin >> kingX >> kingY;

    std::cout << "Введите координаты ладьи (X Y): ";
    std::cin >> rookX >> rookY;
    std::cout << "Введите координаты слона (X Y): ";
    std::cin >> bishopX >> bishopY;

    if ((kingX == rookX && bishopX == kingX) && ((bishopY < rookY && bishopY > kingY) || (bishopY > rookY && bishopY < kingY))){
        cout << "Ладья перекрыта слоном" << endl;
    }
    else if((kingY == rookY && bishopY == kingY) && ((bishopX < rookX && bishopX > kingX) || (bishopX > rookX && bishopX < kingX))){
        cout << "Ладья перекрыта слоном" << endl;
    }
    else if((abs(rookX - bishopX) == abs(rookY - bishopY) && (abs(kingX - bishopX) == abs(kingY - bishopY))) && ((rookX < bishopX && rookX > kingX) || (rookX > bishopX && rookX < kingX))){
        cout << "Слон перекрыт ладьей" << endl;
    }
    else if((kingX == rookX || kingY == rookY) && (abs(kingX - bishopX) == abs(kingY - bishopY))) {
        cout << "Ладья и слон атакуют короля" << endl;
    }
    else if (kingX == rookX || kingY == rookY) {
        cout << "Ладья атакует короля" << endl;
    }
    else if (abs(kingX - bishopX) == abs(kingY - bishopY)) {
        cout << "Слон атакует короля" << endl;
    }
    else {
        cout << "Король в безопасности" << endl;
    }
    return 0;
}
