#include <vector>
#include "printvec.h"

int main()
{
    std::vector<int> v; // = {0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;++i)
      v.push_back(i);
    printvec(v,0);
    return 0;
}
