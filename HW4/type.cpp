#include "type.h"

Type::Type()
{
    width = 0;
}

Type::Type(std::string s, int tag, int w) : Word(s, tag)
{
    width = w;
}

// bool Type::numeric(Type p)
// {
//     if(p == Char || p == Int || p == Float)
//         return true;
//     else
//         return false;
// }
//
// Type Type::max(Type p1, Type p2)
// {
//     if(!numeric(p1) || !numeric(p2))
//         return Type();
//     else if(p1 == Float || p2 == Float)
//         return Float;
//     else if(p1 == Int || p2 == Int)
//         return Int;
//     else
//         return Char;
// }
//
// bool operator==(const Type& x, const Type& y)
// {
//     if(x.lexeme == y.lexeme &&
//        x.tag == y.tag &&
//        x.width == y.width)
// 		return true;
// 	return false;
// }
