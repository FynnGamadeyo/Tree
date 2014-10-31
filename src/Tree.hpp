#ifndef TREE
#define TREE

#include <functional>



class Tree{
public:
  int value;
  Tree * lowEdge;
  Tree * highEdge;
private:
template<typename lambdafunction> 
void fold(Tree&, std::function<T(int)>);
void insert(Tree&,int);
};




#endif