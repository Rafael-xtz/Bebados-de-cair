# Bebados-de-cair
Jogo de bebidas escrito em c++
Em brevem script de compilação


Para compilar manualmente, copie e cole


gcc -c sorteio.cpp -o sorteio.o && ar rc sorteio.a sorteio.o && gcc main.cpp -o main -lncurses -ltinfo -L -l: sorteio.a
