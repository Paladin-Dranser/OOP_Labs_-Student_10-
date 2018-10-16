#include <iostream>
#include <string>
#include <vector>

#include "basket.h"
#include "piecegoods.h"
#include "weightgoods.h"

using namespace std;

int main()
{
	Basket assortment;
	assortment.addPiece(PieceGoods("Барби", 100.0, 0, 125));
	assortment.addPiece(PieceGoods("Человек-паук", 100.0, 0, 125));
	assortment.addPiece(PieceGoods("Супермен", 100.0, 0, 125));

	assortment.addWeight(WeightGoods("Броколи", 10.0, 0, 100));
	assortment.addWeight(WeightGoods("Морковь", 5.0, 0, 100));
	assortment.addWeight(WeightGoods("Мука", 1.0, 0, 100));

	cout << "Assortment:\n";
	assortment.show();
	cout << endl;

	Basket basket;
	basket.addPiece(PieceGoods("Барби", 50.0, 0, 125));
	basket.addPiece(PieceGoods("Человек-паук", 50.0, 0, 125));
	basket.addPiece(PieceGoods("Супермен", 30.0, 0, 125));

	basket.addWeight(WeightGoods("Броколи", 1.0, 0, 100));
	basket.addWeight(WeightGoods("Морковь", 3.0, 0, 100));
	basket.addWeight(WeightGoods("Мука", 0.5, 0, 100));

	cout << "Client's basket:\n";
	basket.show();
	cout << endl << "Cost: " << basket.getAllCost() << endl;

	return 0;
}
