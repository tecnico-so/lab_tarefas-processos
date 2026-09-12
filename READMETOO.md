# Guião extra sobre programação com tarefas

Este guião contém informação extra para a programação com tarefas em C no Linux.

## Objetivos

No final deste guião extra, deverá também ser capaz de:

- utilizar *sanitizers* para ajudar a detectar erros de programação concorrente sem sincronização correcta.

## Uso de sanitizador

Como iremos lidar com programas concorrentes aconselha-se a utilização do `ThreadSanitizer` para ajudar a detetar problemas de acessos concorrentes.
Para isto, deve usar a opção `-fsanitize` na `Makefile`.

Revisite o guião sobre [ferramentas de deteção de erros](https://github.com/tecnico-so/lab_detecao-erros), onde pode encontrar mais detalhes sobre o uso de sanitizadores de código.

----

Contactos para sugestões/correções: [LEIC-Alameda](mailto:leic-so-alameda@disciplinas.tecnico.ulisboa.pt), [LEIC-Tagus](mailto:leic-so-tagus@disciplinas.tecnico.ulisboa.pt), [LETI](mailto:leti-so-tagus@disciplinas.tecnico.ulisboa.pt)
