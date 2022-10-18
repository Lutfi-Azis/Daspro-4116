`A=10, B=5; C= 2`

```
int A = 10, B = 5,
    C = 2;

cout << (A != B && (C != A || B == C)) << '\n';
cout << (A < 5 || C > 10 || B == 5) << '\n';
cout << (A!=B && !(C>5 || B <5)) << '\n';
cout << (A!=B || B==C) << '\n';

cout << (A==B || B==C || true) << '\n';
```

# 1

`A!=B && (C!=A || B==C)`

```
10 != 5 && (2 != 10 || 5 == 2)
true && (true || false)
true
```

# 2

`A<5 || C>10 || B==5`

```
10 < 5 || 2 > 10 || 5 == 5
false || false || true
true
```

# 3

`A!=B || B==C`

```
10!=5 || 5==2
true || false
true
```

# 4

`A!=B && !(C>5 || B <5)`

```
10 != 5 && !(2 > 5 || 5 < 5)
true && !(false || false)
true
```

# 5

`A!=B || B==C`

```
10!=5 || 5==2
true || false
true
```
