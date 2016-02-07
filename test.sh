clang-3.5 -o test.o -c test.c && gcc test.o libft/libft.a && make && ./a.out > elems && ./push_swap `cat elems`
