package Algorithm_Note.Recursive.sample.java;



class MultiplicationTable {

    private static int StartNumber = 1;
    private static int MultiplierEndNumber;
    private static int MultiplicandEndNumber;

    private MultiplicationTable() {}


    static void generate(int finalMultiplier, int finalMultiplicand) {
        MultiplierEndNumber = finalMultiplier;
        MultiplicandEndNumber = finalMultiplicand;
        doMultiplicationProcess(StartNumber, StartNumber);
    }


    private static void doMultiplicationProcess(int multiplier, int multiplicand) {
        if (multiplicand >= StartNumber && multiplicand <= MultiplicandEndNumber) {
            System.out.println(String.format("%2d * %2d = %2d", multiplier, multiplicand, multiplier * multiplicand));
            doMultiplicationProcess(multiplier, multiplicand + 1);
        } else {
            if (multiplier == MultiplierEndNumber) {
                System.out.println("Finish multiplication table by Java!");
            } else {
                doMultiplicationProcess(multiplier + 1, StartNumber);
            }
        }
    }

}


public class MultiplicationTableJava {

    public static void main(String[] args) {
        MultiplicationTable.generate(9, 9);
    }

}
