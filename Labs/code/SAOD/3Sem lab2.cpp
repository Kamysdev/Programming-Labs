//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <iomanip>
//#include <functional>
//#include <vector>
//
//using namespace std;
//
//struct Node {
//    int key;
//    Node* left;
//    Node* right;
//
//    Node(int k) : key(k), left(nullptr), right(nullptr) {}
//};
//
//struct TreeVertex 
//{ 
//    int data = 0; 
//    TreeVertex *right = nullptr; 
//    TreeVertex *left = nullptr; 
//    int index = 1; 
// 
//    TreeVertex() {} 
//    TreeVertex(int data) : data(data) {} 
//}; 
// 
//int getSum(TreeVertex *root) 
//{ 
//    if (root == nullptr) 
//        return 0; 
//    else 
//        return root->data + getSum(root->left) + getSum(root->right); 
//} 
// 
//int getSize(TreeVertex *root) 
//{ 
//    if (root == nullptr) 
//        return 0; 
//    else 
//        return 1 + getSize(root->left) + getSize(root->right); 
//} 
// 
//double getHeightsSum(TreeVertex *root, int vertexLevel = 0) 
//{ 
//    if (root == nullptr) 
//        return 0; 
//    else 
//        return vertexLevel + 
//               getHeightsSum(root->left, vertexLevel + 1) + 
//               getHeightsSum(root->right, vertexLevel + 1); 
//} 
// 
//double getAverageHeight(TreeVertex *root) 
//{ 
//    return getHeightsSum(root) / static_cast<double>(getSize(root)); 
//} 
// 
//int getHeight(TreeVertex *root) 
//{ 
//    if (root == nullptr) 
//        return 0; 
//    else 
//        return 1 + max(getHeight(root->left), getHeight(root->right)); 
//} 
//
//void printInorder(Node* root) {
//    if (root) {
//        printInorder(root->left);
//        cout << root->key << " ";
//        printInorder(root->right);
//    }
//}
//
//Node* insertRecursive(Node* root, int key) {
//    if (!root) {
//        return new Node(key);
//    }
//
//    if (key < root->key) {
//        root->left = insertRecursive(root->left, key);
//    } else if (key > root->key) {
//        root->right = insertRecursive(root->right, key);
//    }
//
//    return root;
//}
//
//Node* insertNonRecursive(Node* root, int key) {
//    Node* newNode = new Node(key);
//    if (!root) {
//        return newNode;
//    }
//
//    Node* current = root;
//    Node* parent = nullptr;
//
//    while (current) {
//        parent = current;
//        if (key < current->key) {
//            current = current->left;
//        } else if (key > current->key) {
//            current = current->right;
//        } else {
//            delete newNode;
//            return root;
//        }
//    }
//
//    if (key < parent->key) {
//        parent->left = newNode;
//    } else {
//        parent->right = newNode;
//    }
//
//    return root;
//}
//
//void deleteTree(Node* root) {
//    if (root) {
//        deleteTree(root->left);
//        deleteTree(root->right);
//        delete root;
//    }
//}
//
//enum class WalkType 
//{ 
//    down, 
//    right, 
//    up, 
//};
//
//void treeWalk(TreeVertex *root, function<void(TreeVertex)> fun, WalkType walkType) 
//{ 
//    if (root == nullptr) 
//        return; 
// 
//    switch (walkType) 
//    { 
//    case WalkType::down: 
//        fun(*root); 
//        treeWalk(root->left, fun, walkType); 
//        treeWalk(root->right, fun, walkType); 
//        break; 
//    case WalkType::right: 
//        treeWalk(root->left, fun, walkType); 
//        fun(*root); 
//        treeWalk(root->right, fun, walkType); 
//        break; 
//    case WalkType::up: 
//        treeWalk(root->left, fun, walkType); 
//        treeWalk(root->right, fun, walkType); 
//        fun(*root); 
//        break; 
//    } 
//}
//
//TreeVertex *buildBalancedBST(int left, int right, int sortedArray[]) 
//{ 
//    if (left > right) 
//    { 
//        return nullptr; 
//    } 
// 
//    int mid = (left + right) / 2; 
//    TreeVertex *root = new TreeVertex(sortedArray[mid]); 
//    root->left = buildBalancedBST(left, mid - 1, sortedArray); 
//    root->right = buildBalancedBST(mid + 1, right, sortedArray); 
// 
//    return root; 
//} 
//
//int size(Node* root) {
//    if (!root) {
//        return 0;
//    }
//    return 1 + size(root->left) + size(root->right);
//}
//
//int checksum(Node* root) {
//    if (!root) {
//        return 0;
//    }
//    return root->key + checksum(root->left) + checksum(root->right);
//}
//
//double height1(Node *root, int vertexLevel = 0) 
//{ 
//    if (root == nullptr) 
//        return 0; 
//    else 
//        return vertexLevel + 
//               height1(root->left, vertexLevel + 1) + 
//               height1(root->right, vertexLevel + 1); 
//} 
//
//double averageHeight1(Node *root) 
//{ 
//    return height1(root) / static_cast<double>(size(root)); 
//} 
//
//int main() {
//    srand((unsigned int)time(nullptr));
//
//    Node* root = nullptr;
//    const int treeSize = 100;
//
//    int choice;
//    cout << "Выберите метод построения СДП:" << endl;
//    cout << "1. Рекурсивно" << endl;
//    cout << "2. С двойной косвенностью" << endl;
//    cin >> choice;
//
//    system("clear");
//    //system("cls");
//
//    if (choice != 1 && choice != 2) {
//        cout << "Неверный выбор метода." << endl;
//        return 1;
//    }
//
//    TreeVertex *balancedBST; 
//    int arr[100]{};
//    for (int i = 0; i < treeSize; i++) {
//        int randomKey = rand() % 1000;
//        arr[i] = randomKey;
//        int numb = 1; 
//        if (choice == 1) {
//            root = insertRecursive(root, randomKey); 
//        } else {
//            root = insertNonRecursive(root, randomKey);
//        }
//    }
//    balancedBST = buildBalancedBST(0, 99, arr);
//
//    cout << "Обход СДП слева направо: ";
//    printInorder(root);
//    cout << endl << endl;
//    cout << "Обход ИСДП слева направо: ";
//    treeWalk( 
//        balancedBST, [](TreeVertex vertex) 
//        { cout << vertex.data << " "; }, 
//        WalkType::right); 
//
//    cout << endl << endl;
//
//    cout << "n = 100" 
//         << "\t"
//         << "Размер" 
//         << "\t"
//         << "Контр. сумма" 
//         << "\t"
//         << "Высота" 
//         << "\t"
//         << "Средн.высота" << endl;
//
//    // Выводим методы
//    cout << "ИСДП" 
//         << "\t" 
//         << getSize(balancedBST)
//         << "\t   "
//         << getSum(balancedBST)
//         << "\t"
//         << getHeight(balancedBST)
//         << "\t"
//         << getAverageHeight(balancedBST)
//         << "\t"
//         << endl;
//    cout << "СДП" 
//         << "\t" 
//         << getSize(balancedBST)
//         << "\t   " 
//         << getSum(balancedBST)
//         << "\t"
//         << height1(root)
//         << "\t"
//         << averageHeight1(root)
//         << "\t"
//         << endl;
//
//    deleteTree(root);
//
//    return 0;
//}
