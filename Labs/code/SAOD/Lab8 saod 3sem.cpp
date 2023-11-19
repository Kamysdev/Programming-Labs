//#include <iostream>
//#include <iomanip>
//#include <ctime>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100;
//int AW[N + 1][N + 1];
//int AP[N + 1][N + 1];
//int AR[N + 1][N + 1];
//int W[N + 1];
//int V[N + 1];
//
//int W1[N + 1];
//int V1[N + 1];
//
//struct vertex {
//	int data;
//	int w;
//	char text;
//	vertex* left;
//	vertex* right;
//} *root1, * root2, * root3;
//
//void FillInc()
//{
//	srand(time(NULL));
//	V[0] = 0;
//	W[0] = 0;
//	V1[0] = 0;
//	W1[0] = 0;
//	for (int i = 0; i <= N; i++)
//	{
//		V[i] = V1[i] = 1 + rand() % 1000000;
//		W[i] = W1[i] = 1 + rand() % 10;
//	}
//
//	sort(V, V + N + 1);
//	//sort(W, W + N + 1);
//}
//
//void FillIncA1()
//{
//	srand(time(NULL));
//	V[0] = 0;
//	W[0] = 0;
//	for (int i = 0; i <= N; i++)
//	{
//		V[i] = 1 + rand() % 1000000;
//		W[i] = 1 + rand() % 10;
//	}
//
//	sort(V, V + N + 1);
//	sort(W, W + N + 1);
//}
//
//
//void MatrixWeight(int N) {
//	for (int i = 0; i <= N; i++) {
//		for (int j = i + 1; j <= N; j++) {
//			AW[i][j] = AW[i][j - 1] + W[j];
//
//		}
//	}
//}
//
//void Matrix_AP_AR(int N) {
//	int i, j, m, minVal, k, h, x;
//	for (i = 0; i <= N - 1; i++) {
//		j = i + 1;
//		AP[i][j] = AW[i][j];
//		AR[i][j] = j;
//	}
//	for (h = 2; h <= N; h++) {
//		for (i = 0; i <= (N - h); i++) {
//			j = i + h;
//			m = AR[i][j - 1];
//			minVal = AP[i][m - 1] + AP[m][j];
//			for (k = m + 1; k <= AR[i + 1][j]; k++) {
//				x = AP[i][k - 1] + AP[k][j];
//				if (x < minVal) {
//					m = k;
//					minVal = x;
//				}
//			}
//			AP[i][j] = minVal + AW[i][j];
//			AR[i][j] = m;
//		}
//	}
//}
//
//void Add_to_Tree(int D, int weight, vertex*& p) {
//	if (p == NULL) {
//		p = new vertex;
//		p->data = D;
//		p->w = weight;
//		p->left = NULL;
//		p->right = NULL;
//	}
//	else if (D < (p->data)) {
//		Add_to_Tree(D, weight, p->left);
//	}
//	else if (D > (p->data)) {
//		Add_to_Tree(D, weight, p->right);
//	}
//}
//
//
//void CreateTree(int l, int r) {
//	if (l < r) {
//		int k = AR[l][r];
//		Add_to_Tree(V[k], W[k], root1);
//		CreateTree(l, k - 1);
//		CreateTree(k, r);
//	}
//}
//
//int size(vertex* p) {
//	if (p == NULL) return 0;
//	else {
//		return (1 + size(p->left) + size(p->right));
//	}
//}
//
//void A1(int N) {
//	for (int i = 1; i <= N; i++) {
//		Add_to_Tree(V[i], W[i], root2);
//	}
//}
//
//void A2(int l, int r) {
//	int wes = 0, sum = 0, i;
//	if (l <= r) {
//		for (i = l; i <= r; i++) {
//			wes = wes + W[i];
//		}
//		for (i = l; i <= r - 1; i++) {
//			if ((sum < wes / 2) && (sum + W[i] > wes / 2)) break;
//			sum = sum + W[i];
//		}
//		Add_to_Tree(V[i], W[i], root3);
//		A2(l, i - 1);
//		A2(i + 1, r);
//	}
//
//}
//
//void Obhod2(vertex* p) {
//	if (p != NULL) {
//		Obhod2(p->left);
//		cout << p->data << " ";
//		Obhod2(p->right);
//	}
//}
//
////(1 + size(p->left) + size(p->right));
//int sum(vertex* p) {
//	if (p == NULL) return 0;
//	else {
//		return ((p->data) + sum(p->left) + sum(p->right));
//	}
//}
//
//int height(vertex* p) {
//	if (p == NULL) return 0;
//	else {
//		return (1 + max(height(p->left), height(p->right)));
//	}
//}
//
//float sumpath(vertex* p, int l) {
//	if (p == NULL) return 0;
//	else {
//		return (l + sumpath(p->left, l + 1) + sumpath(p->right, l + 1));
//	}
//}
//
//int main() {
//	FillInc();
//	root1 = new vertex;
//	root1->data = V[1];
//	root1->w = W[1];
//	root1->left = NULL;
//	root1->right = NULL;
//	root1->text = '1';
//	MatrixWeight(N);
//	Matrix_AP_AR(N);
//	CreateTree(1, N);
//	cout << "Traversal DOP: ";
//	Obhod2(root1);
//	cout << "\n\n";
//
//	root2 = new vertex;
//	root2->data = V1[1];
//	root2->w = W1[1];
//	root2->left = NULL;
//	root2->right = NULL;
//	root2->text = '2';
//	A1(N);
//	cout << "Traversal A1: ";
//	Obhod2(root2);
//	cout << "\n\n";
//
//	root3 = new vertex;
//	root3->data = V[1];
//	root3->w = W[1];
//	root3->left = NULL;
//	root3->right = NULL;
//	root3->text = '1';
//	A2(1, N);
//	cout << "Traversal A2: ";
//	Obhod2(root3);
//	cout << "\n\n";
//
//
//	float sr_height = sumpath(root1, 1) / size(root1);
//
//	cout << "\n";
//	//cout << root1->text << endl;
//	cout << "\n";
//	float sr_height1 = sumpath(root2, 1) / size(root2);
//	float sr_height2 = sumpath(root3, 1) / size(root3);
//
//	cout << "+----------------------------------------------------------+ \n";
//	cout << "|   n = 100  |     Size   |    Max Summ    |   Avg height  | \n";
//	cout << "+----------------------------------------------------------+ \n";
//	cout << "| " << "    DOP   " << " | " << setw(10) << size(root1) << " | " << setw(14) << sum(root1) << " | " << setw(14) << sr_height << "|\n";
//	cout << "+----------------------------------------------------------+\n";
//	cout << "| " << "    A1   " << "  | " << setw(10) << size(root2) << " | " << setw(14) << sum(root2) << " | " << setw(14) << sr_height1 << "|\n";
//	cout << "+----------------------------------------------------------+\n";
//	cout << "| " << "    A2   " << "  | " << setw(10) << size(root3) << " | " << setw(14) << sum(root3) << " | " << setw(14) << sr_height2 << "|\n";
//	cout << "+----------------------------------------------------------+\n";
//	return 0;
//}
