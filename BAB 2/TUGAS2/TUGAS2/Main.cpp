#include "TugasRumah.h"; 
void main(int argc, char** argv) {
	garis(); //memanggil fungsi
	cout << "\n\tMenu Transformasi" << "\n\n";
	cout << "1. Refleksi" << "\n";
	cout << "2. Shear" << "\n";
	garis();

	cout << "\nPilih Menu : "; cin >> choice;
	switch (choice) {
	case 1:
		cout << "masukan jumlah titik: "; cin >> edges;
		for (int i = 0; i < edges; i++)
		{
			cout << "masukkan koordinat :" << i + 1 << ":"; cin >> pntX1 >> pntY1; // nilai koordinat
			pntX.push_back(pntX1); //memasukkan nilai koordinat ke dalam vektor
			pntY.push_back(pntY1);
		}
		garis();

		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(700, 700);
		glutInitWindowPosition(100, 150); //utk mengatur posisi
		glutCreateWindow("2018068");
		glutDisplayFunc(myDisplay1);
		myInit();
		glutMainLoop();

		break;

	case 2:
		cout << "masukan jumlah titik: "; cin >> edges;
		for (int i = 0; i < edges; i++)
		{
			cout << "masukan kordinat : " << i + 1 << " : "; cin >> pntX1 >> pntY1;
			pntX.push_back(pntX1);
			pntY.push_back(pntY1);
		}
		garis();
		cout << "\nmasukan shearing factor untuk X: "; cin >> shearingX;
		cout << "\nmasukan shearing factor untuk Y: "; cin >> shearingY;

		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(700, 700);
		glutInitWindowPosition(100, 150);
		glutCreateWindow("2018068");
		glutDisplayFunc(myDisplay);
		myInit();
		glutMainLoop();
		break;
	default:
		break;
	}
}