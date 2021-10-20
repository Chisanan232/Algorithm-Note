package Algorithm_Note.Recursive.sample.scala


class MultiplicationTable {

  private val StartNumber: Int = 1
  private var MultiplierEndNumber: Int = 1
  private var MultiplicandEndNumber: Int = 1

  def generate(finalMultiplier: Int, finalMultiplicand: Int): Unit = {
    MultiplierEndNumber = finalMultiplier
    MultiplicandEndNumber = finalMultiplicand
    doMultiplicationProcess(StartNumber, StartNumber)
  }


  def doMultiplicationProcess(multiplier: Int, multiplicand: Int): Boolean = {
    if (multiplicand >= StartNumber && multiplicand <= MultiplicandEndNumber) {
      val result = multiplier * multiplicand
      println(s"$multiplier * $multiplicand = $result")
      doMultiplicationProcess(multiplier, multiplicand + 1)
    } else {
      if (multiplier == MultiplierEndNumber) {
        println("Finish multiplication table by Scala!")
        true
      } else {
        doMultiplicationProcess(multiplier + 1, StartNumber)
      }
    }
  }

}


object MultiplicationTableScala extends App {

  override def main(args: Array[String]): Unit = {
    val multiplicationTable = new MultiplicationTable()
    multiplicationTable.generate(9, 9)
  }

}
