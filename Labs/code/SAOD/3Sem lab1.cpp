#include <cmath>
#include <ctime>
#include <functional>
#include <iostream>
#include <vector>

struct TreeVertex 
{ 
    int data = 0; 
    TreeVertex *right = nullptr; 
    TreeVertex *left = nullptr; 
    int index = 1; 
 
    TreeVertex() {} 
    TreeVertex(int data) : data(data) {} 
}; 
 
int getSum(TreeVertex *root) 
{ 
    if (root == nullptr) 
        return 0; 
    else 
        return root->data + getSum(root->left) + getSum(root->right); 
} 
 
int getSize(TreeVertex *root) 
{ 
    if (root == nullptr) 
        return 0; 
    else 
        return 1 + getSize(root->left) + getSize(root->right); 
} 
 
double getHeightsSum(TreeVertex *root, int vertexLevel = 0) 
{ 
    if (root == nullptr) 
        return 0; 
    else 
        return vertexLevel + 
               getHeightsSum(root->left, vertexLevel + 1) + 
               getHeightsSum(root->right, vertexLevel + 1); 
} 
 
double getAverageHeight(TreeVertex *root) 
{ 
    return getHeightsSum(root) / static_cast<double>(getSize(root)); 
} 
 
int getHeight(TreeVertex *root) 
{ 
    if (root == nullptr) 
        return 0; 
    else 
        return 1 + std::max(getHeight(root->left), getHeight(root->right)); 
} 
 
void deleteTree(TreeVertex *root) 
{ 
    if (root->left) 
        deleteTree(root->left); 
 
    if (root->right) 
        deleteTree(root->right); 
 
    delete root; 
} 
 
enum class WalkType 
{ 
    down, 
    right, 
    up, 
}; 
 
void treeWalk(TreeVertex *root, std::function<void(TreeVertex)> fun, WalkType walkType) 
{ 
    if (root == nullptr) 
        return; 
 
    switch (walkType) 
    { 
    case WalkType::down: 
        fun(*root); 
        treeWalk(root->left, fun, walkType); 
        treeWalk(root->right, fun, walkType); 
        break; 
    case WalkType::right: 
        treeWalk(root->left, fun, walkType); 
        fun(*root); 
        treeWalk(root->right, fun, walkType); 
        break; 
    case WalkType::up: 
        treeWalk(root->left, fun, walkType); 
        treeWalk(root->right, fun, walkType); 
        fun(*root); 
        break; 
    } 
}

TreeVertex *buildBalancedBST(int left, int right, int sortedArray[]) 
{ 
    if (left > right) 
    { 
        return nullptr; 
    } 
 
    int mid = (left + right) / 2; 
    TreeVertex *root = new TreeVertex(sortedArray[mid]); 
    root->left = buildBalancedBST(left, mid - 1, sortedArray); 
    root->right = buildBalancedBST(mid + 1, right, sortedArray); 
 
    return root; 
} 
 
void numberTree(TreeVertex *root, int level, int &index) 
{ 
    if (root == nullptr) 
        return; 
 
    if (level == 1) 
    { 
        root->index = index++; 
    } 
    else if (level > 1) 
    { 
        numberTree(root->left, level - 1, index); 
        numberTree(root->right, level - 1, index); 
    } 
} 
 
int main() 
{ 
    const int size = 100; 
    int arr[size]; 
 
    int numb = 1; 
    for (int i = 0; i < size; i++) 
    { 
        numb += rand() % 10; 
        arr[i] = numb; 
    } 
 
    TreeVertex *balancedBST = buildBalancedBST(0, size - 1, arr); 
 
    int height = getHeight(balancedBST); 
    int index = 1; 
 
    for (int level = 1; level <= height; level++) 
    { 
        numberTree(balancedBST, level, index); 
    } 
 
    std::cout << "ISDP (Sleva napravo): " << std::endl 
              << std::endl; 
    std::cout << "Indexi: "; 
    treeWalk( 
        balancedBST, [](TreeVertex vertex) 
        { std::cout << vertex.index << " "; }, 
        WalkType::right); 
    std::cout << "\n\nZnachenia: "; 
    treeWalk( 
        balancedBST, [](TreeVertex vertex) 
        { std::cout << vertex.data << " "; }, 
        WalkType::right); 
    std::cout << std::endl 
              << std::endl; 
 
    int treeSize = getSize(balancedBST); 
    int checksum = getSum(balancedBST); 
    double averageHeight = getAverageHeight(balancedBST); 
 
    std::cout << "Razmer dereva: " << treeSize << std::endl; 
    std::cout << "Controlnaya summa dereva: " << checksum << std::endl; 
    std::cout << "Visota dereva: " << height << std::endl; 
    std::cout << "Srednyaa visota dereva: " << averageHeight << std::endl; 
 
    deleteTree(balancedBST); 
    return 0; 
}