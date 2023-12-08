# Tic-Tac-Toe

## 遊戲介紹

### 1. **遊戲目標:**
   - 兩位玩家輪流進行遊戲，X玩家先開始。
   - 目標是在5x5的遊戲棋盤上形成一條包含五個相同符號的線，可以是橫向、縱向或對角線。

### 2. **遊戲步驟:**
   - X玩家選擇在棋盤上放置他們符號的位置（從1到25的數字）。
   - 隨後，電腦O通過選擇一個可用的位置（同樣從1到25的數字中選擇）進行移動。
   - 玩家和電腦輪流進行，直到有一名玩家在橫向、縱向或對角線上形成了五個符號的線，或者直到所有的格子都被佔據。

### 3. **勝利條件:**
   - 玩家在橫向、縱向或對角線上擁有五個連續的相同符號即為勝利。
   - 如果所有格子都被佔據，且沒有玩家實現了線，遊戲將宣告為平局。

## 程式結構圖

1. **main() - 主程式**
   - 切換當前玩家

2. **originalboard() - 副函式**
   - 初始化棋盤為空白

3. **printfboard() - 副函式**
   - 顯示棋盤

4. **playerenter() - 副函式**
   - 玩家輸入，使玩家輸入位址改為字元'X'

5. **computerenter() - 副函式**
   - 電腦取亂數，使電腦輸入位址改為字元'O'

6. **correct() - 副函式**
   - 檢查是否有玩家獲勝

## 技術使用說明

### - 規劃

1. 流程圖 - Chap1
2. 善用中斷點監看 - Chap2
3. 標頭檔設置 - Chap7

### - 遊戲主體
1. **基本變數設定(int, char) - Chap2**
2. **判斷(==, >=, !=, &&, ||) - Chap4**
3. **自訂/呼叫函式 - Chap4,7**
4. **(?:)運算子 - Chap5**
5. **多重選擇(if else) - Chap5**
6. **二維陣列 - Chap6**
7. **符號常數的宣告 - Chap7**
8. **前置處理器 - Chap7**

### - 副函式
1. **自訂/呼叫函式 - Chap4,7**
2. **判斷(==, >=, !=, &&) - Chap4**
3. **迴圈(for, do while) - Chap4,6**
4. **跳離程式(break) - Chap5**
5. **多重選擇(if else) - Chap5**
6. **時間函數(time) - Chap5**
7. **亂數產生器(srand) - Chap5**
8. **二維陣列 - Chap6**
9. **多函式的應用 - Chap7**
10. **傳遞數值(指標) - Chap8**
11. **結構陣列, 結構指標變數(struct) - Chap9**

## 開發時間

- 2023/11/26, 2hr
  - 初始化棋盤與使用者輸入（使用座標）

- 2023/11/27, 2hr
  - 電腦輸入與切換使用者（使用座標）

- 2023/12/29, 4hr
  - 嘗試把座標轉換成數字（失敗）

- 2023/12/30, 2hr
  - 改版初始化棋盤與使用者輸入（使用數字）

- 2023/12/4, 2hr
  - 改版電腦輸入與切換使用者（使用數字）

- 2023/12/5, 2hr
  - 檢查玩家獲勝

- 2023/12/7, 3hr
  - 學習使用GitHub網站

- 2023/12/8, 3hr
  - 完成建立GitHub網站

- 2023/12/9, 3hr
  - 完成編輯GitHub介紹
