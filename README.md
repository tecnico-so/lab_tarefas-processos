# Guião 4: Programação com tarefas e processos

![IST](img/IST_DEI.png)  

## Objectivos

No final deste guião, deverá ser capaz de:

- compreender os conceitos programação paralela com tarefas (que é um dos requisitos essenciais do 1º exercício do projeto de SO) e também com processos;
- utilizar primitivas para a gestão de tarefas como o `pthread_create` e `pthread_join`;
- utilizar primitivas para a gestão de processos, como o `fork` e `wait`.

## Requisitos

- Sistema operativo Linux Ubuntu 20.04 LTS (se não o tiverem disponível no vosso computador pessoal, podem utilizar os computadores do laboratório).

## 1. Tarefas

Clone este repositório, usando: `git clone https://github.com/tecnico-so/lab_tarefas-processos.git`.

Aceda à diretoria com o comando: `cd lab_tarefas-processos`.

Na pasta `src` estude, compile e execute a aplicação.  
O programa cria diferentes tarefas (*threads*) a executar em paralelo.

### 1.1 Interpretação dos resultados

Consulte o seguinte diagrama e interprete o resultado do programa.

![THREAD](img/thread_image_800px.png)

Porque razão diferentes execuções do programa podem resultar em diferentes valores para variável global `g_value`?

### 1.2 Exercício

Monte uma experiência que prove a afirmação anterior (ponto 1.1).  
Sugestão: utilize a chamada sistema [`sleep`](https://man7.org/linux/man-pages/man3/sleep.3.html).

### 1.3 Uso de sanitizador

Como iremos lidar com programas concorrentes aconselha-se a utilização do `ThreadSanitizer` para ajudar a detetar problemas de acessos concorrentes.
Para isto, note a ativação deste sanitizador com a opção `-fsanitize` na *Makefile*.

Revisite o guião sobre ferramentas de deteção de erros, onde pode encontrar mais detalhes sobre o uso de sanitizadores de código.

----

## 2. Processos

Componha um programa paralelo alternativo, `process.c`, em que as chamadas a `pthread_create` e `pthread_join` são substituídas por chamadas a `fork` e `wait` (tenha o cuidado de assegurar que a função `wait` só é chamada pelo processo pai).

Neste caso, o paralelismo acontecerá com processos distintos, e não com tarefas dentro do mesmo processo.
O que muda no resultado que este novo programa imprime no *stdout*?

----

Contactos para sugestões/correções: [LEIC-Alameda](mailto:leic-so-alameda@disciplinas.tecnico.ulisboa.pt), [LEIC-Tagus](mailto:leic-so-tagus@disciplinas.tecnico.ulisboa.pt), [LETI](mailto:leti-so-tagus@disciplinas.tecnico.ulisboa.pt)
