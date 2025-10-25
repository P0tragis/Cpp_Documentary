#include <iostream>


namespace first{
    int x = 1;
}
 
namespace second {
    int x = 2;
}

namespace third {
    int x = 3;
}

int main()
{
    /*
    namespace = provices a solution for preventing a name conflicts in a large proiects.
    each entity needs a unique name.
    a namespace allows for identically named entities as long as the namespace are different.
    */ 

    int x = 0;
    std::cout << x ;
    std::cout << first::x ;
    std::cout << second::x ;
    std::cout << third::x ;
    return 0;
}
