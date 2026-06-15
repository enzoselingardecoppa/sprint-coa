# Sistema 

Projeto de um sistema embarcado para tomada de decisão digital inspirado nos controladores de energia inteligentes da GoodWe. Desenvolvido para a disciplina de Arquitetura de Computadores do curso de Ciências da Computação.

O sistema gerencia o acionamento de uma carga elétrica prioritária residencial ou industrial avaliando a disponibilidade de fontes energéticas e o horário de consumo para otimizar o uso da bateria.

---

## Hardware e Conexões (Tinkercad)

O circuito lógico digital foi modelado e simulado na plataforma Tinkercad, utilizando botões configurados em modo pull-up interno (`INPUT_PULLUP`) para as entradas e um LED indicador para a saída.

### Mapeamento de Pinos (Arduino UNO)
* **Pino 6:** Entrada A (Fio Amarelo) - Energia Solar Disponível
* **Pino 7:** Entrada B (Fio Laranja) - Bateria acima de 40%
* **Pino 5:** Entrada C (Fio Verde) - Horário de Pico Energético
* **Pino 4:** Entrada D (Fio Azul) - Equipamento Prioritário Solicitado
* **Pino 13:** Saída S (Fio Vermelho) - LED indicador da Carga Prioritária

---

## Lógica do Sistema

A validação dos estados e controle do circuito segue a expressão booleana:
$$S = D \cdot (A + B \cdot \bar{C})$$

### Regras de Funcionamento
1. A carga prioritária ($S$) só é ativada se houver solicitação direta do equipamento ($D = 1$).
2. É necessária pelo menos uma fonte de energia ativa: Solar ($A = 1$) ou Bateria ($B = 1$).
3. Durante o horário de pico ($C = 1$), o uso da bateria é restrito, permitindo o funcionamento da carga apenas se houver geração de energia solar ativa ($A = 1$).

---

