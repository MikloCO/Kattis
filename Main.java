/*
Input samples=

https://open.kattis.com/problems/nineknights

//Sample 1
...k.
...k.
k.k..
.k.k.
k.k.k

//Sample 2
.....
...k.
k.k.k
.k.k.
k.k.k

//Sample 3
.....
...k.
k.k.k
.k.k.
k...k

* */

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int validKnights = 0;

        ArrayList[][] chessmap = ScanMapInto2DArray(scan);
        KnightCoordinate knightscoordinates02 = new KnightCoordinate();

        ArrayList<Integer> X_Coordinates = new ArrayList<Integer>();
        ArrayList<Integer> Y_Coordinates = new ArrayList<Integer>();
        SetKnightCoordinates(chessmap, knightscoordinates02, X_Coordinates, Y_Coordinates);

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                char currentCharacter = chessmap[0][0].get(i).toString().charAt(j);
                if (currentCharacter == 'k') {
                    if (KnightIsValid(chessmap, i, j, X_Coordinates, Y_Coordinates)) {
                        validKnights += 1;
                    } else {
                    }
                }
            }
        }

        if (GetTotalAmountKnights(chessmap) == validKnights) {
            System.out.println("valid");
        } else {
            System.out.println("invalid");
        }
    }

    private static void SetKnightCoordinates(ArrayList[][] chessmap, KnightCoordinate knightscoordinates02, ArrayList<Integer> XC, ArrayList<Integer> YC) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (chessmap[0][0].get(i).toString().charAt(j) == 'k') {
                    XC.add(i);
                    YC.add(j);
                }
            }
        }
    }

    private static ArrayList[][] ScanMapInto2DArray(Scanner scan) {
        ArrayList[][] table = new ArrayList[5][5];
        table[0][0] = new ArrayList(); // add another ArrayList object to [0,0]

        for (int i = 0; i < 5; i++) {
            table[0][0].add(scan.nextLine()); // add object to that ArrayList
        }
        return table;
    }

    private static boolean KnightIsValid(ArrayList[][] table, int posX, int posY, ArrayList<Integer> XCOORD, ArrayList<Integer> YCOORD) {
        for (int i = 0; i < GetTotalAmountKnights(table); i++) //Can't compare with start position (0)
        {
            if (posX + 1 == YCOORD.get(i) && posY + 2 == XCOORD.get(i)) {
                return false;
            }
            if (posX + 2 == YCOORD.get(i) && posY + 1 == XCOORD.get(i)) {
                return false;
            }
            if (posX + 2 == YCOORD.get(i) && posY - 1 == XCOORD.get(i)) {
                return false;
            }
            if (posX + 1 == YCOORD.get(i) && posY - 2 == XCOORD.get(i)) {
                return false;
            }
            if (posX - 1 == YCOORD.get(i) && posY + 2 == XCOORD.get(i)) {
                return false;
            }
            if (posX - 2 == YCOORD.get(i) && posY + 1 == XCOORD.get(i)) {
                return false;
            }
            if (posX - 2 == YCOORD.get(i) && posY - 1 == XCOORD.get(i)) {
                return false;
            }
            if (posX - 1 == YCOORD.get(i) && posY - 2 == XCOORD.get(i)) {
                return false;
            }
        }
        return true;
    }

    private static int GetTotalAmountKnights(ArrayList[][] table) {
        int amount = 0;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (table[0][0].get(i).toString().charAt(j) == 'k') {
                    amount++;
                }
            }
        }
        return amount;
    }
}

