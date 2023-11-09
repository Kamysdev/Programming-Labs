//#include <iostream>
//#include <cmath>
//#include <iomanip>
//#include <clocale>
//#include <ctime>
//#include <cstdlib>
//using namespace std;
//
//struct Vertex {
//    int data;
//    Vertex* Left;
//    Vertex* Right;
//    int Bal;
//    int w;
//    int h;
//};
//
//const int n = 100;
//int* W;
//int* mas, * h, c = 0;
//int AW[n + 1][n + 1], AP[n + 1][n + 1], AR[n + 1][n + 1];
//Vertex* root = NULL;
//
//void AW_count() {
//    for (int i = 0; i <= n; i++)
//        for (int j = i + 1; j <= n; j++)
//            AW[i][j] = AW[i][j - 1] + W[j - 1];
//}
//
//void AP_AR_count() {
//    int j, min, m, x, i;
//    // при h = 1
//    for (int i = 0; i < n; i++) {
//        j = i + 1;
//        AP[i][j] = AW[i][j];
//        AR[i][j] = j;
//    }
//    // при h > 1
//    for (int h = 2; h <= n; h++) {
//        for (int i = 0; i <= n - h; i++) {
//            j = i + h;
//            m = AR[i][j - 1];
//            min = AP[i][m - 1] + AP[m][j];
//            for (int k = m + 1; k <= AR[i + 1][j]; k++) {
//                x = AP[i][k - 1] + AP[k][j];
//                if (x < min) {
//                    m = k;
//                    min = x;
//                }
//            }
//            AP[i][j] = min + AW[i][j];
//            AR[i][j] = m;
//        }
//    }
//}
//// добавление через рекурсию
//void Add(Vertex*& p, int x, int w) {
//    if (p == NULL) {
//        p = new Vertex;
//        p->data = mas[x - 1];
//        p->w = w;
//        p->Left = NULL;
//        p->Right = NULL;
//    }
//    else if (x < p->data) {
//        Add(p->Left, x, w);
//    }
//    else if (x >= p->data) {
//        Add(p->Right, x, w);
//    }
//}
//
//void CreateTree(int L, int R) {
//    int k;
//    if (L < R) {
//        k = AR[L][R];
//        Add(root, k, W[k - 1]);
//        CreateTree(L, k - 1);
//        CreateTree(k, R);
//    }
//}
//
//void Obhod2(Vertex* p) { // слева направо
//    if (p != NULL) {
//        Obhod2(p->Left);
//        cout << p->data << " ";
//        Obhod2(p->Right);
//    }
//}
//
//void seth(Vertex* p) {
//    if (p != NULL) {
//        if (p->Left) {
//            p->Left->h = p->h + 1;
//        }
//        if (p->Right) {
//            p->Right->h = p->h + 1;
//        }
//        seth(p->Left);
//        seth(p->Right);
//    }
//}
//
//void midh(Vertex* p) {
//    if (p != NULL) {
//        c += p->w * p->h;
//        midh(p->Left);
//        midh(p->Right);
//    }
//}
//
//int summ(Vertex* p) {
//    if (p == NULL) {
//        return 0;
//
//    }
//    else
//    {
//        return p->data + summ(p->Left) + summ(p->Right);
//    }
//}
//
//int Size(Vertex* p) { // функция для определения размера функции
//    int n;
//    if (p == NULL) {
//        n = 0;
//    }
//    else n = 1 + Size(p->Left) + Size(p->Right);
//    return n;
//}
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    srand(time(NULL));
//    mas = new int[n];
//    for (int i = 0; i < n; i++) {
//        mas[i] = rand() % 1000;
//        //cout << mas[i] << " " ;
//    }
//
//    cout << endl;
//
//    W = new int[n];
//    for (int i = 0; i < n; i++) {
//        W[i] = rand() % 99 + 1;
//        cout << W[i] << " ";
//    }
//
//    // cout << "-------------------------------------------------" << endl;
//    // cout << "AW - матрица весов" << endl;
//    AW_count();
//    for (int i = 0; i <= n; i++) {
//        for (int j = 0; j <= n; j++) {
//            //cout << setw(4) << AW[i][j] << " ";
//        }
//    }
//
//    //cout << "-------------------------------------------------" << endl;
//    //cout << "AP - матрица весов" << endl;
//    AP_AR_count();
//    for (int i = 0; i <= n; i++) {
//        for (int j = 0; j <= n; j++) {
//            //cout << setw(4) << AP[i][j] << " ";
//        }
//    }
//
//    //cout << "-------------------------------------------------" << endl;;
//    //cout << "AR - матрица весов" << endl;
//    for (int i = 0; i <= n; i++) {
//        for (int j = 0; j <= n; j++) {
//            //cout << setw(4) << AR[i][j] << " ";
//        }
//    }
//
//    cout << endl;
//
//    CreateTree(0, n);
//
//    int WW = 15000;
//
//    cout << endl;
//
//    root->h = 1;
//    seth(root);
//    midh(root);
//
//    cout << "Обход слева направо ";
//    Obhod2(root);
//    cout << endl;
//
//    cout << endl << "ДОП Дерево:" << endl;
//    cout << "Размер|\t" << "Контр. сумма  |\t" << "Средневзвешенная высота |";
//    cout << endl << Size(root) << "   | " << summ(root) << "         | \t" << c / (double)WW << "\t\t|";
//    return 0;
//}