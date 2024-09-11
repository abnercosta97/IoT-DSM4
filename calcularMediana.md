Para calcular a **mediana** em uma distribuição de frequências com classes, você deve seguir alguns passos específicos. Vamos ver como isso funciona, usando o exemplo fornecido.

### Passo a Passo para Calcular a Mediana

#### **1. Organizar os Dados**

Os dados já estão organizados em classes com suas respectivas frequências absolutas (\(f_i\)):

| Intervalo (minutos) | \( f_i \) (frequência) |
| ------------------- | ---------------------- |
| 0 – 10              | 2                      |
| 10 – 20             | 15                     |
| 20 – 30             | 17                     |
| 30 – 40             | 13                     |
| 40 – 50             | 3                      |

#### **2. Calcular a Frequência Acumulada**

A frequência acumulada (\(F\)) é obtida somando sequencialmente as frequências:

\[
\begin{aligned}
F_1 &= 2 \\
F_2 &= 2 + 15 = 17 \\
F_3 &= 17 + 17 = 34 \quad (\text{Classe Mediana})\\
F_4 &= 34 + 13 = 47 \\
F_5 &= 47 + 3 = 50 \quad (\text{Total})
\end{aligned}
\]

#### **3. Encontrar a Classe Mediana**

A classe mediana é a classe que contém o valor mediano, ou seja, onde a frequência acumulada ultrapassa a metade do

total de observações.

Para encontrar a classe mediana:

- Primeiro, calcule o total de observações \( n \):
  \[
  n = \sum f_i = 50
  \]

- A metade do total de observações é \( \frac{n}{2} = \frac{50}{2} = 25 \).

- Agora, encontre a classe onde a frequência acumulada ultrapassa 25. Observando a tabela:

  \[
  \begin{aligned}
  F_1 &= 2 \quad (\text{Classe 0-10}) \\
  F_2 &= 17 \quad (\text{Classe 10-20}) \\
  F_3 &= 34 \quad (\text{Classe 20-30})
  \end{aligned}
  \]

  A frequência acumulada de 34 (Classe 20-30) é a primeira a ultrapassar 25, então **a classe mediana é 20-30 minutos**.

#### **4. Identificar os Elementos para o Cálculo**

Para calcular a mediana, você precisa dos seguintes elementos:

- **\(L_m\)**: Limite inferior da classe mediana, que é 20.
- **\(F\_{\text{ant}}\)**: Frequência acumulada antes da classe mediana, que é 17 (valor acumulado até a classe 10-20).
- **\(f_m\)**: Frequência da classe mediana, que é 17.
- **\(h\)**: Amplitude da classe mediana, que é \(30 - 20 = 10\).

#### **5. Aplicar a Fórmula da Mediana**

Agora, use a fórmula:

\[
\text{Mediana} = L*m + \left(\frac{\frac{n}{2} - F*{\text{ant}}}{f_m}\right) \cdot h
\]

Substituindo os valores:

\[
\text{Mediana} = 20 + \left(\frac{25 - 17}{17}\right) \cdot 10
\]

\[
\text{Mediana} = 20 + \left(\frac{8}{17}\right) \cdot 10
\]

\[
\text{Mediana} = 20 + 4.70588
\]

\[
\text{Mediana} \approx 24.71 \text{ minutos}
\]

### Resumo

A mediana do tempo parado é aproximadamente **24,71 minutos**. Este valor representa o tempo abaixo do qual 50% dos valores da distribuição estão.
