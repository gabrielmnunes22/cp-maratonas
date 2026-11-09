# cp-maratonas

Soluções e estudos de programação competitiva. Os arquivos do CSES seguem as categorias do problem set, com nomes em `snake_case`. Versões em linguagens diferentes e os sufixos de autoria `_gmn` foram preservados.

| Pasta | Conteúdo |
| --- | --- |
| [CSES/introductory_problems](CSES/introductory_problems) | Introductory Problems |
| [CSES/sorting_and_searching](CSES/sorting_and_searching) | Sorting and Searching |
| [CSES/graph_algorithms](CSES/graph_algorithms) | Graph Algorithms |
| [CSES/range_queries](CSES/range_queries) | Range Queries |
| [TreinamentoLPC/problemas_a_identificar](TreinamentoLPC/problemas_a_identificar) | Exercícios cuja plataforma ou identificação ainda precisa ser confirmada |
| [TreinamentoLPC/rascunhos](TreinamentoLPC/rascunhos) | Rascunhos e testes |
| [Estudos](Estudos) | Exemplos de estruturas de dados, ordenação e linguagem |
| [Templates](Templates) | Macros e trechos reutilizáveis |

## CSES: arquivos e progresso

“Resolvido no print” registra a aprovação mostrada nas imagens fornecidas. A presença de um arquivo, por si só, não confirma aprovação. A reorganização preserva o conteúdo dos códigos; não é uma revisão das soluções.

### Introductory Problems

| Problema | Arquivos | Situação |
| --- | --- | --- |
| Weird Algorithm | [Python](CSES/introductory_problems/weird_algorithm.py), [C++](CSES/introductory_problems/weird_algorithm_gmn.cpp) | Resolvido no print |
| Missing Number | [Python](CSES/introductory_problems/missing_number.py), [C++](CSES/introductory_problems/missing_number_gmn.cpp) | Resolvido no print |
| Repetitions | [Python](CSES/introductory_problems/repetitions.py), [C++](CSES/introductory_problems/repetitions_gmn.cpp) | Resolvido no print |
| Increasing Array | [Python](CSES/introductory_problems/increasing_array.py), [C++](CSES/introductory_problems/increasing_array_gmn.cpp) | Resolvido no print |
| Permutations | [Python](CSES/introductory_problems/permutations.py), [C++](CSES/introductory_problems/permutations_gmn.cpp) | Resolvido no print |
| Number Spiral | [C++](CSES/introductory_problems/number_spiral_gmn.cpp) | Resolvido no print |
| Two Knights | — | Resolvido no print; código não localizado |
| Two Sets | [Python](CSES/introductory_problems/two_sets.py) | Resolvido no print |
| Bit Strings | [C++](CSES/introductory_problems/bit_strings.cpp) | Resolvido no print |
| Trailing Zeros | [Python](CSES/introductory_problems/trailing_zeros.py) | Resolvido no print |
| Coin Piles | — | Resolvido no print; código não localizado |
| Palindrome Reorder | [Python](CSES/introductory_problems/palindrome_reorder.py) | Resolvido no print |

### Sorting and Searching

| Problema | Arquivo | Situação |
| --- | --- | --- |
| Distinct Numbers | [Python](CSES/sorting_and_searching/distinct_numbers.py) | Arquivo local; aprovação não informada |
| Apartments | [C++](CSES/sorting_and_searching/apartments.cpp) | Arquivo local; aprovação não informada |
| Factory Machines | [C++](CSES/sorting_and_searching/factory_machines.cpp) | Resolvido no print |
| Array Division | [C++](CSES/sorting_and_searching/array_division.cpp) | Arquivo local; aprovação não informada |

### Graph Algorithms

| Problema | Arquivo | Situação |
| --- | --- | --- |
| Counting Rooms | [C++](CSES/graph_algorithms/counting_rooms.cpp) | Sem aprovação no print |
| Labyrinth | [C++](CSES/graph_algorithms/labyrinth.cpp) | Resolvido no print |
| Building Roads | [C++](CSES/graph_algorithms/building_roads.cpp) | Resolvido no print |
| Message Route | [C++](CSES/graph_algorithms/message_route.cpp) | Resolvido no print |
| Building Teams | [C++](CSES/graph_algorithms/building_teams.cpp) | Resolvido no print; arquivo local incompleto |
| Round Trip | — | Resolvido no print; código não localizado |
| Shortest Routes I | — | Resolvido no print; código não localizado |
| Shortest Routes II | — | Resolvido no print; código não localizado |
| High Score | — | Resolvido no print; código não localizado |
| Course Schedule | — | Resolvido no print; código não localizado |

O arquivo local de Building Teams lê o grafo, mas não implementa a divisão em equipes. Foi preservado para recuperação da versão correta.

### Range Queries

| Problema | Arquivo | Situação |
| --- | --- | --- |
| Static Range Minimum Queries | [C++](CSES/range_queries/static_range_minimum_queries.cpp) | Arquivo local; aprovação não informada |

O antigo `rangeminqueuedinamic.cpp` foi classificado como **Static Range Minimum Queries**: apesar de a classe oferecer atualização, o `main` apenas lê pares de limites e consulta o mínimo, sem operações de atualização.

## Outros exercícios e arquivos locais

Os arquivos em `TreinamentoLPC/problemas_a_identificar` mantêm seus nomes originais, incluindo `uva1136.cpp`, `nineknights.cpp` e os arquivos nomeados por letras. A origem não foi atribuída somente pelo nome, evitando classificações incorretas.

Executáveis, objetos de compilação e configurações locais existentes foram preservados em `TreinamentoLPC`. Novos artefatos de compilação são ignorados pelo Git; arquivos já versionados continuam versionados.
