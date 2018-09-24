# TD1

# EXERCICE 1

1. BONJOUR
VRC  LRC | VRC   R  | VRC   U  | VRC   O  | VRC   J  | VRC   N  | VRC   O  | VRC   B
 x xxxxxx   x xxxxxx   x xxxxxx   x xxxxxx   x xxxxxx   x xxxxxx   x xxxxxx   x xxxxxx 

2. B = 66, O = 79, N = 78, J = 74, U = 85, R = 82

|   |B|O|N|J|O|U|R|LRC|
|---|-|-|-|-|-|-|-|---|
|64 |1|1|1|1|1|1|1|1  |
|32 |0|0|0|0|0|0|0|0  |
|16 |0|0|0|0|0|1|1|0  |
|8  |0|1|1|1|1|0|0|0  |
|4  |0|1|1|0|1|1|0|0  |
|2  |1|1|1|1|1|0|1|0  |
|1  |0|1|0|0|1|1|0|1  |
|VRC|0|1|0|1|1|0|0|1  |

3. 
|R         |U         |O         |J         |N         |O         |B         |
|----------|----------|----------|----------|----------|----------|----------|
|[0]1010010|[0]1010010|[1]1001111|[1]1001010|[0]1001110|[1]1001111|[0]1000010|

4. 1. VRC + LRC, On réussit à localiser et corriger l'erreur

|   |B|O|N|J|O|U|R|LRC|
|---|-|-|-|-|-|-|-|---|
|64 |1|1|1|1|1|1|1|1  |  
|32 |0|0|0|0|0|0|0|0  |
|16 |0|0|0|0|0|1|1|0  |
|8  |0|1|x|1|1|0|0|0  |
|4  |0|1|1|0|1|1|0|0  | 
|2  |1|1|1|1|1|0|1|0  |
|1  |0|1|0|0|1|1|0|1  |
|VRC|0|1|0|1|1|0|0|1  |

4. 2. LRC, On réussit à detecter 2 erreurs

|   |B|O|N|J|O|U|R|LRC|
|---|-|-|-|-|-|-|-|---|
|64 |1|1|1|1|1|1|1|1  |  
|32 |0|0|x|0|0|0|0|0  |
|16 |0|0|0|0|0|1|1|0  |
|8  |0|1|x|1|1|0|0|0  |
|4  |0|1|1|0|1|1|0|0  | 
|2  |1|1|1|1|1|0|1|0  |
|1  |0|1|0|0|1|1|0|1  |
|VRC|0|1|0|1|1|0|0|1  |

4. 3. VRC, On réussit à detecter 2 erreurs

|   |B|O|N|J|O|U|R|LRC|
|---|-|-|-|-|-|-|-|---|
|64 |1|1|1|1|1|1|1|1  |  
|32 |0|0|0|0|0|0|0|0  |
|16 |0|0|0|0|0|1|1|0  |
|8  |0|1|x|1|1|x|0|0  |
|4  |0|1|1|0|1|1|0|0  | 
|2  |1|1|1|1|1|0|1|0  |
|1  |0|1|0|0|1|1|0|1  |
|VRC|0|1|0|1|1|0|0|1  |

4. 4. On ne voit pas l'erreur

|   |B|O|N|J|O|U|R|LRC|
|---|-|-|-|-|-|-|-|---|
|64 |1|1|1|1|1|1|1|1  |  
|32 |0|0|x|0|0|x|0|0  |
|16 |0|0|0|0|0|1|1|0  |
|8  |0|1|x|1|1|x|0|0  |
|4  |0|1|1|0|1|1|0|0  | 
|2  |1|1|1|1|1|0|1|0  |
|1  |0|1|0|0|1|1|0|1  |
|VRC|0|1|0|1|1|0|0|1  |

# EXERCICE 2

1. Pas de LRC que des [VRC] 1001 1110 1010 0011 1100 1010

sens de lecture -> avec VRC à droite

```
	1 			  2				3
1001 111[0] | 1010 001[1] | 1100 101[0]
```

```
	1	2	3
64	1	1   1
32	0	0	1
16	0	1	0
8	1	0	0
2	1	0	1
4	1	0	0
1	1	1	1
VRC 0	1	0
```

(pas d'erreur dans ce sens de lecture)

sens de lecture <- avec VRC à droite

```
	1			  2			    3
1001 111[0] | 1010 001[1] | 1100 101[0]
```

```
	1	2	3
1	1	1   1
2	0	0	1
4	0	1	0
8	1	0	0
16	1	0	1
32	1	0	0
64	1	1	1
VRC 0	1	0
	^
```

(erreur detecter sur le le paquet de bit 1)

2. YES

# EXERCICE 3

1. P degré n, R degré n-1, x^4 + x^2 + x + 1.
Polynome génerateurs : 10111

```
10100101110000
10111
   11101
   10111
    10101
    10111
       10100
       10111
          1100
```

2. Le message à transmettre est 1010010111|1100

3. 

```
10100101110000
10111
   11101
   10111
    10101
    10111
       101
       10111
       10111
          0000
```

# EXERCICE 4

**Code de Miller**:
```
coder sur 1 : transition à la demi-période
coder sur 0 : -> s'il est suivi d'un autre 0 transition en fin de période
              -> sinon pas de transition
```

(Voir feuille)

# EXERCICE 5

1.

|   |I|M|A|G|I|N|A|LRC|
|---|-|-|-|-|-|-|-|---|
|64 |1|1|1|1|1|1|1|1  |
|32 |0|0|0|0|0|0|0|0  |
|16 |0|0|0|0|0|0|0|0  |
|8  |1|1|0|0|1|1|0|0  |
|4  |0|1|0|1|0|1|0|1  |
|2  |0|0|0|1|0|1|0|0  |
|1  |1|1|1|1|1|0|1|0  |
|VRC|1|0|0|0|1|0|0|0  |

2. I = 11001001

```
110010010000
11001
000000010000
       11001
        1001
```

Message à transmettre = 11001001 1001
