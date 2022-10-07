/*
** EPITECH PROJECT, 2022
** hello-world
** File description:
** test_display_hello_world
*/

#include "../include/hello.hpp"
#include <criterion/criterion.h>
#include "./OSRedirector.hpp"

Test(HelloWorld, test_display_hello_world)
{
    OSRedirector redr(std::cout);
    display_hello_world();
    cr_assert_eq(redr.getContent(), "Hello world!\n");
}