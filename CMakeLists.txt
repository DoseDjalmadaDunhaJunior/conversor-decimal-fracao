cmake_minimum_required(VERSION 3.13)
project(conversor_decimal_fracao)

set(CMAKE_CXX_STANDARD 17)

add_executable(conversor_decimal_fracao main.cpp Conta.cpp Conta.hpp Simplificacao.cpp Simplificacao.hpp)