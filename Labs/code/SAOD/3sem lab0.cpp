//#include <iostream>
//
//// СТруктура дерева
//struct tree {
//    int data;
//    tree* left = nullptr;
//    tree* right = nullptr;
//    
//    tree(int data)
//    {
//        this->data = data;
//    }
//};
//
//// Выделение памяти дерева
//tree* getTree(tree* root, int data)
//{
//    tree* head = new tree(19);
//
//    head->left = new tree(6);
//    head->right = new tree(20);
//
//    head->left->left = new tree(4);
//    head->left->right = new tree(18);
//
//    head->left->right->left = new tree(10);
//    head->left->right->left->right = new tree(15);
//
//    head->left->right->left->right->left = new tree(12);
//    head->left->right->left->right->right = new tree(16);
//
//    return head;
//}
//
//// Обход сверху вниз
//void bypassTreePrefix(tree* root)
//{
//    if (root != NULL) {
//        std::cout << root->data << " ";
//        bypassTreePrefix(root->left);
//        bypassTreePrefix(root->right);
//    }
//}
//
//// Обход слева направо
//void bypassTreeInfix(tree* root)
//{
//    if (root != NULL) {
//        bypassTreeInfix(root->left);
//        std::cout << root->data << " ";
//        bypassTreeInfix(root->right);
//    }
//}
//
//// Обход снизу вверх
//void bypassTreePostfix(tree* root)
//{
//    if (root != NULL) {
//        bypassTreePostfix(root->left);
//        bypassTreePostfix(root->right);
//        std::cout << root->data << " ";
//    }
//}
//
//// Размер дерева
//int getSizeTree(tree* root)
//{
//    int size = 0;
//    if (root == NULL)
//        size = 0;
//    else
//        size = 1 + getSizeTree(root->left) + getSizeTree(root->right);
//
//    return size;
//}
//
//// Высота дерева
//float getHeightTree(tree* root)
//{
//    float height = 0;
//    if (root == NULL)
//        height = 0;
//    else
//        height = 1 + std::max(getHeightTree(root->left), getHeightTree(root->right));
//
//    return height;
//}
//
//// Контрольная сумма
//int getCheckSumTree(tree* root)
//{
//    int checkSum = 0;
//    if (root == NULL)
//        checkSum = 0;
//    else
//        checkSum = root->data + getCheckSumTree(root->left) + getCheckSumTree(root->right);
//
//    return checkSum;
//}
//
//// Сумма длин путей
//float getSumLengthsTree(tree* root, int vertexLevel)
//{
//    float sumLengths = 0;
//    if (root == NULL)
//        sumLengths = 0;
//    else
//        sumLengths = vertexLevel + getSumLengthsTree(root->left, vertexLevel + 1) + getSumLengthsTree(root->right, vertexLevel + 1);
//
//    return sumLengths;
//}
//
//int main()
//{
//    srand(time(NULL));
//
//    tree* root = NULL;
//    int arr[6] = {1, 2, 3, 4, 5, 6};
//    for (int i = 0; i < 6; i++) {
//        root = getTree(root, arr[i]);
//    }
//
//    int sizeTree = 0;
//    int heightTree = 0;
//    float checkSumTree = 0;
//    float mediumHeight = 0;
//
//    std::cout << "Obhod dereva sverhy vniz: ";
//    bypassTreePrefix(root);
//    std::cout << std::endl;
//
//    std::cout << "Obhod dereva sleva napravo: ";
//    bypassTreeInfix(root);
//    std::cout << std::endl;
//
//    std::cout << "Obhod dereva snizy vverh: ";
//    bypassTreePostfix(root);
//    std::cout << std::endl;
//
//    std::cout << "Razmer dereva: ";
//    sizeTree = getSizeTree(root);
//    std::cout << sizeTree << std::endl;
//
//    std::cout << "Control summ dereva: ";
//    checkSumTree = getCheckSumTree(root);
//    std::cout << checkSumTree << std::endl;
//
//    std::cout << "Visota dereva: ";
//    heightTree = getHeightTree(root);
//    std::cout << heightTree << std::endl;
//
//    std::cout << "Srednyaa visota dereva: ";
//    mediumHeight = getSumLengthsTree(root, 1) / getSizeTree(root);
//    std::cout << mediumHeight << std::endl; 
//
//    return 0;
//}