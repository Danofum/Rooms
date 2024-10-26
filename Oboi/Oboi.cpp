#include <iostream>
#include <cmath>
using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");


	// Ввод размеров комнаты
	double roomLength, roomHeight, roomWidth;
	cout << "Введите длину комнаты (м): ";
	cin >> roomLength;
	cout << "Введите высоту комнаты (м): ";
	cin >> roomHeight;
	cout << "Введите ширину комнаты (м): ";
	cin >> roomWidth;

	// Ввод размеров рулонов обоев
	double wallpaperLength, wallpaperWidth;
	cout << "Введите длину рулона обоев (м): ";
	cin >> wallpaperLength;
	cout << "Введите ширину рулона обоев (м): ";
	cin >> wallpaperWidth;

	// Рассчитываем  общую длину стен
	//double wallArea = 2 *roomHeight* (roomLength + roomWidth);
	double WallLength = (roomLength * 2) + (roomWidth * 2);

	// общая длина стен делить на ширину обоев
	double rollArea = WallLength / wallpaperWidth;

	// высота обоев делить на выстоту стены стен 
	int quantity = floor(wallpaperLength / roomHeight);
	//double quantity = wallpaperLength / roomHeight;

	// Количество рулонов, необходимое для поклейки
	int rollsNeeded = ceil(rollArea / quantity);

	// Рассчитываем остатки
	//площадь затраченых обоев
	double totalAreaCovered = rollsNeeded * (wallpaperLength * wallpaperWidth);
	//площадь комнаты
	double wallArea = WallLength * roomHeight;
	//площадь остатков
	double residueArea = totalAreaCovered - wallArea;

	double wastePercentage = (residueArea / totalAreaCovered) * 100;

	// Вывод результатов
	cout << "Необходимое количество рулонов: " << rollsNeeded << endl;
	cout << "Процент остатков: " << wastePercentage << "%" << endl;

	return 0;
}