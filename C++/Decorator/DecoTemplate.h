#pragma once
#include <iostream>

template <typename ReturnType, typename... FuncArgs>
using FuncToDeco = ReturnType(*)(FuncArgs...);

template<typename... FuncArgs>
void DecoVoid(FuncToDeco<void, FuncArgs...> func, FuncArgs... args) {
	std::cout << "DecoStart!" << std::endl;
	func(args...);
	std::cout << "DecoEnd!" << std::endl;
}

template<typename ReturnType, typename... FuncArgs>
ReturnType DecoRet(FuncToDeco<ReturnType, FuncArgs...> func, FuncArgs... args) {
	std::cout << "DecoStart!" << std::endl;
	ReturnType ret = func(args...);
	std::cout << "DecoEnd!" << std::endl;
	return ret;
}
