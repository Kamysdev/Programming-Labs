//#include <iostream>
//#include <ctime>
//#include <stdio.h>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//struct Vertex
//{
//    int Data;
//    Vertex* Left;
//    Vertex* Right;
//};
//
//Vertex* Root_AVL;
//
//Vertex* BuildTree1(Vertex* vertex, int value)
//{
//    if (vertex == nullptr)
//    {
//        vertex = new Vertex;
//        vertex->Data = value;
//        vertex->Left = nullptr;
//        vertex->Right = nullptr;
//    }
//    else if (value < vertex->Data)
//    {
//        vertex->Left = BuildTree1(vertex->Left, value);
//    }
//    else if (value > vertex->Data)
//    {
//        vertex->Right = BuildTree1(vertex->Right, value);
//    }
//    return vertex;
//}
//
//Vertex* LLRotation(Vertex* root)
//{
//    if (root == nullptr || root->Left == nullptr) {
//        return root;
//    }
//
//    Vertex* newRoot = root->Left;
//    root->Left = newRoot->Right;
//    newRoot->Right = root;
//    return newRoot;
//}
//
//
//Vertex* RRRotation(Vertex* root)
//{
//    if (root == nullptr || root->Right == nullptr) {
//        return root;
//    }
//
//    Vertex* newRoot = root->Right;
//    root->Right = newRoot->Left;
//    newRoot->Left = root;
//    return newRoot;
//}
//
//Vertex* LRRotation(Vertex* root)
//{
//    if (root == nullptr || root->Left == nullptr) {
//        return root;
//    }
//
//    root->Left = RRRotation(root->Left);
//    return LLRotation(root);
//}
//
//Vertex* RLRotation(Vertex* root)
//{
//    if (root == nullptr || root->Right == nullptr) {
//        return root;
//    }
//
//    root->Right = LLRotation(root->Right);
//    return RRRotation(root);
//}
//
//Vertex* LL1Rotation(Vertex* root) {
//    if (root == nullptr || root->Left == nullptr || root->Left->Right == nullptr) {
//        return root;
//    }
//
//    Vertex* newRoot = root->Left->Right;
//    root->Left->Right = newRoot->Left;
//    newRoot->Left = root->Left;
//    root->Left = newRoot->Right;
//    newRoot->Right = root;
//    cout << "LL1" << endl;
//    return newRoot;
//}
//
//Vertex* RR1Rotation(Vertex* root) {
//    if (root == nullptr || root->Right == nullptr || root->Right->Left == nullptr) {
//        return root;
//    }
//
//    Vertex* newRoot = root->Right->Left;
//    root->Right->Left = newRoot->Right;
//    newRoot->Right = root->Right;
//    root->Right = newRoot->Left;
//    newRoot->Left = root;
//    cout << "RR1" << endl;
//    return newRoot;
//}
//
//void PrintTree(Vertex* vertex)
//{
//    if (vertex != nullptr)
//    {
//        cout << vertex->Data << " ";
//        PrintTree(vertex->Left);
//        PrintTree(vertex->Right);
//    }
//}
//
//int TreeSize(Vertex* vertex)
//{
//    if (vertex == nullptr)
//    {
//        return 0;
//    }
//    else
//    {
//        return 1 + TreeSize(vertex->Left) + TreeSize(vertex->Right);
//    }
//}
//
//int TreeSum(Vertex* vertex)
//{
//    if (vertex == nullptr)
//    {
//        return 0;
//    }
//    else
//    {
//        return vertex->Data + TreeSum(vertex->Left) + TreeSum(vertex->Right);
//    }
//}
//
//int TreeHeight(Vertex* vertex)
//{
//    if (vertex == nullptr)
//    {
//        return 0;
//    }
//    else
//    {
//        int LHeight = TreeHeight(vertex->Left);
//        int RHeight = TreeHeight(vertex->Right);
//        return 1 + max(LHeight, RHeight);
//    }
//}
//
//void CountLevels(Vertex* vertex, vector<int>& levelCounts, int level)
//{
//    if (vertex == nullptr)
//    {
//        return;
//    }
//
//    if (level >= levelCounts.size())
//    {
//        levelCounts.resize(level + 1, 0);
//    }
//
//    levelCounts[level]++;
//
//    CountLevels(vertex->Left, levelCounts, level + 1);
//    CountLevels(vertex->Right, levelCounts, level + 1);
//}
//
//float TreeAVGHeight(Vertex* vertex)
//{
//    vector<int> levelCounts;
//    CountLevels(vertex, levelCounts, 0);
//
//    float totalHeight = 0;
//    int totalNodes = 0;
//
//    for (int level = 0; level < levelCounts.size(); level++)
//    {
//        totalHeight += level * levelCounts[level];
//        totalNodes += levelCounts[level];
//    }
//
//    if (totalNodes == 0)
//    {
//        return 0.0f;
//    }
//
//    return totalHeight / totalNodes;
//}
//
//Vertex* BuildAVLTree(Vertex* vertex, int value)
//{
//    if (vertex == nullptr)
//    {
//        vertex = new Vertex;
//        vertex->Data = value;
//        vertex->Left = nullptr;
//        vertex->Right = nullptr;
//    }
//    else if (value < vertex->Data)
//    {
//        vertex->Left = BuildAVLTree(vertex->Left, value);
//    }
//    else if (value > vertex->Data)
//    {
//        vertex->Right = BuildAVLTree(vertex->Right, value);
//    }
//
//    int balance = TreeHeight(vertex->Left) - TreeHeight(vertex->Right);
//
//    if (balance > 1)
//    {
//        if (value < vertex->Left->Data)
//        {
//            vertex = LLRotation(vertex);
//        }
//        else
//        {
//            vertex = LRRotation(vertex);
//        }
//    }
//    else if (balance < -1)
//    {
//        if (value > vertex->Right->Data)
//        {
//            vertex = RRRotation(vertex);
//        }
//        else
//        {
//            vertex = RLRotation(vertex);
//        }
//    }
//
//    return vertex;
//}
//
//bool IsValueInTree(Vertex* vertex, int value)
//{
//    if (vertex == nullptr)
//    {
//        return false;
//    }
//
//    if (value == vertex->Data)
//    {
//        return true;
//    }
//    else if (value < vertex->Data)
//    {
//        return IsValueInTree(vertex->Left, value);
//    }
//    else
//    {
//        return IsValueInTree(vertex->Right, value);
//    }
//}
//
//Vertex* FindMax(Vertex* vertex) {
//    while (vertex->Right != nullptr) {
//        vertex = vertex->Right;
//    }
//    return vertex;
//}
//
//Vertex* DeleteNode(Vertex* vertex, int value) {
//    if (vertex == nullptr) {
//        return vertex;
//    }
//
//    if (value < vertex->Data) {
//        vertex->Left = DeleteNode(vertex->Left, value);
//    }
//    else if (value > vertex->Data) {
//        vertex->Right = DeleteNode(vertex->Right, value);
//    }
//    else {
//        if (vertex->Left == nullptr || vertex->Right == nullptr) {
//            Vertex* temp = (vertex->Left != nullptr) ? vertex->Left : vertex->Right;
//            if (temp == nullptr) {
//                temp = vertex;
//                vertex = nullptr;
//            }
//            else {
//                *vertex = *temp;
//            }
//            delete temp;
//        }
//        else {
//            Vertex* temp = FindMax(vertex->Left);
//            vertex->Data = temp->Data;
//            vertex->Left = DeleteNode(vertex->Left, temp->Data);
//        }
//    }
//
//    if (vertex == nullptr) {
//        return vertex;
//    }
//
//    int LHeight = TreeHeight(vertex->Left);
//    int RHeight = TreeHeight(vertex->Right);
//    int balance = LHeight - RHeight;
//
//    if (balance > 1) {
//        if (value > vertex->Left->Data) {
//            vertex->Left = LL1Rotation(vertex->Left);
//        }
//        vertex = RR1Rotation(vertex);
//    }
//    else if (balance < -1) {
//        if (value < vertex->Right->Data) {
//            vertex->Right = RR1Rotation(vertex->Right);
//        }
//        vertex = LL1Rotation(vertex);
//    }
//
//    return vertex;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(time(NULL));
//
//    int ch[15];
//
//    Root_AVL = nullptr;
//
//
//    cout << "Вершины : ";
//    for (int i = 0; i < 15; i++)
//    {
//        int value;
//        do {
//            value = rand() % 100000 + 100;
//        } while (IsValueInTree(Root_AVL, value));
//
//        ch[i] = value;
//        cout << ch[i] << " ";
//        Root_AVL = BuildAVLTree(Root_AVL, ch[i]);
//    }
//
//    cout << endl << endl;
//
//    int t_size2 = TreeSize(Root_AVL);
//    int t_sum2 = TreeSum(Root_AVL);
//    int t_height2 = TreeHeight(Root_AVL);
//    float t_avg_height2 = TreeAVGHeight(Root_AVL);
//
//    cout << "АВЛ дерево : ";
//    PrintTree(Root_AVL);
//    cout << endl;
//    int valueToDelete;
//    char deleteAnother;
//
//    bool checkTree = true;
//
//    while (checkTree) {
//        cout << "\nВведите вершнину, которую нужно удалить из АВЛ дерева : ";
//        cin >> valueToDelete;
//        cout << endl;
//
//        if (IsValueInTree(Root_AVL, valueToDelete)) {
//            Root_AVL = DeleteNode(Root_AVL, valueToDelete);
//            cout << "Вершина " << valueToDelete << " была удалена из АВЛ дерева." << endl << endl;
//            cout << "АВЛ дерево : ";
//            PrintTree(Root_AVL);
//            cout << endl << endl;
//        }
//        else {
//            cout << "Вершина " << valueToDelete << " была не найдена в АВЛ дереве." << endl;
//        }
//
//        if (TreeHeight(Root_AVL) == 0) {
//            checkTree = false;
//            cout << "АВЛ дерево пустое!" << endl;
//        }
//    }
//
//    return 0;
//}