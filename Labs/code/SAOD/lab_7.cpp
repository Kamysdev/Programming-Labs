//// ДБД 
//#include <iostream>
//#include <cmath>
//#include <ctime>
//#include <clocale>
//#include <cstdlib>
//#include <stdio.h>
//using namespace std;
//
//int Vr, Hr;
//bool Rost = false;
//
//struct Vertex {
//	int data;
//	Vertex *Left;
//	Vertex *Right; 
//	int Bal;
//};
//
//void b2inSert(int D, Vertex *&p){
//	Vertex *q;
//	if(p == NULL) {
//		p = new Vertex;
//		p->data = D;
//		p->Left = p->Right = NULL;
//		p->Bal = 0;
//		Vr = 1;
//	}
//	else if(p->data > D) {
//		b2inSert(D, p->Left);
//		if(Vr == 1){
//			if(p->Bal == 0){
//				q = p->Left;
//				p->Left = q->Right;
//				q->Right = p;
//				p = q;
//				q->Bal = 1;
//				Vr = 0;
//				Hr = 1;
//			}
//			else {
//				p->Bal = 0;
//				Vr = 1;
//				Hr = 0; 
//			}
//		}
//		else {
//			Hr = 0;
//		}
//	}
//	else if(p->data < D) {
//		b2inSert(D, p->Right);
//		if(Vr == 1){
//			p->Bal = 1;
//			Hr = 1;
//			Vr = 0;
//		}
//		else if(Hr == 1) {
//			if(p->Bal == 1){
//				q = p->Right;
//				p->Bal = 0;
//				q->Bal = 0;
//				p->Right = q->Left;
//				q->Left = p;
//				p = q;
//				Vr = 1;
//				Hr = 0;
//			}
//			else {
//				Hr = 0;
//			}
//		}
//	}
//}
//
//void Obhod2(Vertex *p){ // слева направо
//	if(p != NULL){
//		Obhod2(p->Left);
//		cout << p->data << "(" << p->Bal << ")" << " ";
//		Obhod2(p->Right);
//	}	
//}
//
//int summ(Vertex *p){
//	if(p == NULL){
//		return 0;
//	}
//	else {
//		return p->data + summ(p->Left) + summ(p->Right);
//	}
//}
//
//int Height(Vertex *p){ // функция для определения высоты дерева
//	int h;
//	if(p == NULL){
//		h = 0;
//	}
//	else h = 1 + max(Height(p->Left), Height(p->Right));
//	return h;
//}
//
//int SDP(Vertex *p, int L){ // нахождение суммы длин путей
//	int s;
//	if(p == NULL){
//		s = 0;
//	}
//	else {
//		s = L + SDP(p->Left, L + 1) + SDP(p->Right, L + 1);
//	}
//	return s;
//}
//
//int Size(Vertex *p){ // функция для определения размера функции
//	int n;
//	if(p == NULL){
//		n = 0;
//	}
//	else n = 1 + Size(p->Left) + Size(p->Right);
//	return n;
//}
//
//void LLpovorot(Vertex *&p){
//	Vertex *q = p->Left;
//	p->Bal = 0;
//	q->Bal = 0;
//	p->Left = q->Right;
//	q->Right = p;
//	p = q;
//}
//
//void RRpovorot(Vertex *&p){
//	Vertex *q = p->Right;
//	p->Bal = 0;
//	q->Bal = 0;
//	p->Right = q->Left;
//	q->Left = p;
//	p = q;
//}
//
//void LRpovorot(Vertex *&p){
//	Vertex *q = p->Left;
//	Vertex *r = q->Right;
//	if(r->Bal < 0){
//		p->Bal = 1;
//	}
//	else {
//		p->Bal = 0;
//	}
//	
//	if(r->Bal > 0){
//		q->Bal = -1;
//	}
//	else {
//		q->Bal = 0;
//	}
//	r->Bal = 0;
//	q->Right = r->Left;
//	p->Left = r->Right;
//	r->Left = q;
//	r->Right = p;
//	p = r;
//}
//
//void RLpovorot(Vertex *&p){
//	Vertex *q = p->Right;
//	Vertex *r = q->Left;
//	if(r->Bal < 0){
//		p->Bal = 1;
//	}
//	else {
//		p->Bal = 0;
//	}
//	
//	if(r->Bal > 0){
//		q->Bal = -1;
//	}
//	else {
//		q->Bal = 0;
//	}
//	r->Bal = 0;
//	q->Left = r->Right;
//	p->Right = r->Left;
//	r->Right = q;
//	r->Left = p;
//	p = r;
//}
//
//void add_AVL_derevo(int D, Vertex *&p){
//	if(p == NULL){
//		p = new Vertex;
//		p->data = D;
//		p->Left = NULL;
//		p->Right = NULL;
//		p->Bal = 0;
//		Rost = true;
//	}
//	else 
//		if(p->data > D){
//			add_AVL_derevo(D, p->Left);	
//			if(Rost == true){
//				if(p->Bal > 0) {
//					p->Bal = 0;
//					Rost = false;
//				}
//				else 
//					if(p->Bal == 0) {
//						p->Bal = -1;
//						Rost = true;
//					}	
//					else 
//						if(p->Left->Bal < 0) {
//							LLpovorot(p);
//							Rost = false;
//						} 
//						else {
//							LRpovorot(p);
//							Rost = false;
//						}
//					}
//				}
//				else {
//					if(p->data < D) {
//						add_AVL_derevo(D, p->Right);
//						if(Rost == true) {
//							if(p->Bal < 0) {
//								p->Bal = 0;
//								Rost = false;
//							}
//							else {
//								if(p->Bal == 0)	{
//									p->Bal = 1;
//									Rost = true;
//								}
//								else {
//									if(p->Right->Bal > 0) {
//										RRpovorot(p);
//										Rost = false;
//									}
//									else {
//										RLpovorot(p);
//										Rost = false;
//									}
//								}
//							}
//						}
//					}
//					else {
//							cout << endl <<"Вершина " << p->data << " есть в дереве" << endl;
//							return;
//					}
//				}
//			}
//
//int main(){
//	setlocale(LC_ALL, "Russian");
//	Vertex *root = NULL;
//	Vertex *root1 = NULL;
//	int n;
//	cin >> n;
//	int* A = new int[n];
//
//	srand(time(0));
//
//	for(int i = 0; i < n; i++){
//		A[i] = rand() % (n * n);
//	}
//
//
//	for(int i = 0; i < n; i++){
//		cout << A[i] << " ";
//	}
//	
//	cout << endl;
//	
//	for(int i = 0; i < n; i++){
//		b2inSert(A[i], root);
//		cout << endl;
//		cout << "Слева направо" << endl;
//		Obhod2(root);
//	}
//	
//	cout << endl;
//	// нахождение суммы длин путей
//	int sum;
//	sum = SDP(root, 1);
//	cout << "Сумма длин путей = " << sum << endl;
//	
//	// определение размера дерева
//	int j;
//	j = Size(root);
//	cout << "Размер дерева = " << j << endl;
//	
//	// определение высоты дерева
//	int k1;
//	k1 = Height(root);
//	cout << "Высота дерева = " << k1 << endl;
//	
//	// нахождение средней высоты дерева
//	float hcp;
//	hcp = (float)SDP(root, 1) / (float)Size(root);
//	cout << "Средняя высота дерева = " << hcp << endl;
//	
//	int summa;
//	summa = summ(root);
//	cout << "Контрольная сумма = " << summa << endl;
//	
//	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
//	cout << "Авл дерево" << endl;
//	
//	for(int i = 0; i < 100; i++){
//		cout << A[i] << " ";
//	}
//	
//	cout << endl;
//	
//	for(int i = 0; i < 100; i++){
//		add_AVL_derevo(A[i], root1);
//		cout << endl;
//		cout << "Слева направо" << endl;
//		Obhod2(root1);
//	}
//	
//	cout << endl;
//	// нахождение суммы длин путей
//	int sum1;
//	sum1 = SDP(root1, 1);
//	cout << "Сумма длин путей = " << sum1 << endl;
//	
//	// определение размера дерева
//	int j1;
//	j1 = Size(root1);
//	cout << "Размер дерева = " << j1 << endl;
//	
//	// определение высоты дерева
//	int k2;
//	k2 = Height(root1);
//	cout << "Высота дерева = " << k2 << endl;
//	
//	// нахождение средней высоты дерева
//	float hcp1;
//	hcp1 = (float)SDP(root1, 1) / (float)Size(root1);
//	cout << "Средняя высота дерева = " << hcp1 << endl;
//	
//	int summa1;
//	summa1 = summ(root1);
//	cout << "Контрольная сумма = " << summa1 << endl;
//
//	cout << endl;
//	cout << "| n = 100 |" << "  Size   |" << " Checksum   | " << " Height |" << " Average Height |" << endl;
//    cout << "|   AVL   |" << "   " << j1 << "   |" << "   " << summa1 << "   |" << "   " << k2 << "     |"
//         << "      " << hcp1 << "     |" << endl;
//    cout << "|   DBD   |" << "   " << j << "   |" << "   " << summa << "   |" << "   " << k1 << "    |"
//         << "     " << hcp << "    |" << endl;
//
//	return 0;
//}
