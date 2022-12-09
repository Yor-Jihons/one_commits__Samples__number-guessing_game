# one_commits__Samples__number-guessing_game

This is a sample so that I can commit this to the GitHub.

## 1. Question

プログラムで生成した乱数をユーザが当てる「数当てゲーム」をするプログラムを組め。  
仕様として当てる数字 N はプログラム側で乱数として生成し、それをユーザが当てるか'q'が標準入力として与えられるまで繰り返す。  
ユーザが数字を入力するたびに{ "N is higher than <数字>." | "N is lower than <数字>." }のいずれかを表示し、
'q'が入力されるか当てたら終了する。  
また終了するまでの回数も終了後に「times: {TIMES}」と出力すること。({TIMES}は回数)  
入力を促す文字列は"Enter the number(1-10):"とする。
また、当てた場合は「Hit!」と表示する。

## 2. Conditions

```
1≦N≦10
1≦a{i}≦10
```

## 3. Inputs and Outputs

### 3.1. Inputs

```
a1
a2
a3
...
(q)
```

当てるまで1～10の数字を入力していく。強制的に終了するには'q'を入力する。

### 3.2. Outputs

```
Times: {TIMES}
```

"Times: " という文字列の直後に当てるまでの回数を出力する。

### 3.3. Examples

N = 9 の場合:

0. 「Enter the number(1-10):」が出力される
1. ユーザが2を入力する
2. 「N is higher than 2.」が出力される
3. 「Enter the number(1-10):」が出力される
4. ユーザが10を入力する
5. 「N is lower than 10.」が出力される
6. 「Enter the number(1-10):」が出力される
7. ユーザが9を入力する
8. 「Hit!」が表示される
9. 当てるまでの回数が2回なので「Times: 2」と出力される

N = 4 の場合:

0. 「Enter the number(1-10):」が出力される
1. ユーザが2を入力する
2. 「N is higher than 2.」が出力される
3. 「Enter the number(1-10):」が出力される
4. ユーザが10を入力する
5. 「N is lower than 10.」が出力される
6. 「Enter the number(1-10):」が出力される
7. ユーザが9を入力する
8. 「N is lower than 9.」が出力される
9. 「Enter the number(1-10):」が出力される
10. ユーザが5を入力する
11. 「N is lower than 5.」が出力される
12. 「Enter the number(1-10):」が出力される
13. ユーザが終了させるために'q'を入力する
14. 数当てを終了する
15. 当てるまでの回数が4回なので「Times: 4」と出力される
