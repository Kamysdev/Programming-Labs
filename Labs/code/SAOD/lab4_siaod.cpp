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
//Vertex* Root_SDP;
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
//// Функция для выполнения Левого-Левого (LL) вращения
//Vertex* LLRotation(Vertex* root)
//{
//    Vertex* newRoot = root->Left;
//    root->Left = newRoot->Right;
//    newRoot->Right = root;
//    return newRoot;
//}
//
//// Функция для выполнения Правого-Правого (RR) вращения
//Vertex* RRRotation(Vertex* root)
//{
//    Vertex* newRoot = root->Right;
//    root->Right = newRoot->Left;
//    newRoot->Left = root;
//    return newRoot;
//}
//
//// Функция для выполнения Левого-Правого (LR) вращения
//Vertex* LRRotation(Vertex* root)
//{
//    root->Left = RRRotation(root->Left);
//    return LLRotation(root);
//}
//
//// Функция для выполнения Правого-Левого (RL) вращения
//Vertex* RLRotation(Vertex* root)
//{
//    root->Right = LLRotation(root->Right);
//    return RRRotation(root);
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
//    // Обновление баланса и проверка на нарушение баланса
//    int balance = TreeHeight(vertex->Left) - TreeHeight(vertex->Right);
//
//    // Слева перевес (нужно выполнить вращение LL или LR)
//    if (balance > 1)
//    {
//        if (value < vertex->Left->Data)
//        {
//            // Левое-Левое (LL) вращение
//            vertex = LLRotation(vertex);
//        }
//        else
//        {
//            // Левое-Правое (LR) вращение
//            vertex = LRRotation(vertex);
//        }
//    }
//    // Справа перевес (нужно выполнить вращение RR или RL)
//    else if (balance < -1)
//    {
//        if (value > vertex->Right->Data)
//        {
//            // Правое-Правое (RR) вращение
//            vertex = RRRotation(vertex);
//        }
//        else
//        {
//            // Правое-Левое (RL) вращение
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
//int main()
//{
//    srand(time(NULL));
//
//    int ch[100];
//
//    Root_SDP = nullptr;
//    Root_AVL = nullptr;
//
//    for (int i = 0; i < 100; i++)
//    {
//        int value;
//        do {
//            value = rand() % 10000 + 100;
//        } while (IsValueInTree(Root_SDP, value) || IsValueInTree(Root_AVL, value));
//
//        ch[i] = value;
//        Root_SDP = BuildTree1(Root_SDP, ch[i]);
//        Root_AVL = BuildAVLTree(Root_AVL, ch[i]);
//    }
//
//    int t_size = TreeSize(Root_SDP);
//    int t_sum = TreeSum(Root_SDP);
//    int t_height = TreeHeight(Root_SDP);
//    float t_avg_height = TreeAVGHeight(Root_SDP);
//
//    int t_size2 = TreeSize(Root_AVL);
//    int t_sum2 = TreeSum(Root_AVL);
//    int t_height2 = TreeHeight(Root_AVL);
//    float t_avg_height2 = TreeAVGHeight(Root_AVL);
//
//
//    cout << "AVL tree: ";
//    PrintTree(Root_AVL);
//    cout << endl << endl;
//    cout << "SDP(recursion): ";
//    PrintTree(Root_SDP);
//    cout << endl;
//    
//
//    cout << "| n = 100 |" << "  Size   |" << " Checksum   | " << " Height |" << " Average Height |" << endl;
//    cout << "|   AVL   |" << "   " << t_size2 << "   |" << "   " << t_sum2 << "   |" << "   " << t_height2 << "     |"
//         << "      " << t_avg_height2 << "     |" << endl;
//    cout << "|   SDP   |" << "   " << t_size << "   |" << "   " << t_sum << "   |" << "   " << t_height << "    |"
//         << "     " << t_avg_height << "    |" << endl;
//
//    return 0;
//}
