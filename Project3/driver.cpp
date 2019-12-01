#include <iostream>
#include "sulist.h"
#include "sustacklist.h"
#include "suqueuearr.h"            // implementing all header files that are linked to cpp's of their respected classes
#include "sustackarr.h"
#include "suqueuelist.h"
#include "payroll.h"

int main(){

  // Making sure our templates are avaliable to use
  SUList<int> SUList_Integer_Test;
  SUList<PayRoll> SUList_PayRoll_Test;
  SUStackArr<int> SUStackArr_Integer_Test;
  SUStackArr<PayRoll> SUStackArr_PayRoll_Test;
  SUStackList<int> SUStackList_Integer_Test;
  SUStackList<PayRoll> SUStackList_PayRoll_Test;
  SUQueueArr<int> SUQueueArr_Integer_Test;
  SUQueueList<int> SUQueueList_Integer_Test;
  SUQueueList<PayRoll> SUQueueList_PayRoll_Test;

  PayRoll Lexi("Lexi", 50, 20);
  PayRoll Ben("Ben", 19, 15);
  PayRoll Ryan("Ryan", 30, 10);
  PayRoll Chris("Chris", 12, 13);
  PayRoll Amanda("Amanda", 12.50, 8);
  PayRoll Garret("Garret", 21, 17);

  std::cout << std::endl;
  std::cout << "ＳＵＬｉｓｔ　ＴＥＳＴ" << std::endl;
  std::cout << std::endl;
  std::cout << "| TESTING PUT FRONT           | Inserting 5 in front" << std::endl;
  SUList_Integer_Test.putFront(5);
  std::cout << "| TESTING PUT BACK            | Inserting 2 and 3 on the back" << std::endl;
  SUList_Integer_Test.putBack(2);
  SUList_Integer_Test.putBack(3);
  std::cout << "| TESTING PRINT FUNCTION      | Printing List: ";
  SUList_Integer_Test.print();
  //std::cout << "=============" << std::endl;
  //SUList_Integer_Test.print();
  int i = SUList_Integer_Test.size();
  //std::cout << std::endl;
  std::cout << "| TESTING SIZE FUNCTION       | Number of Elements in List: " << i << std::endl;
  //std::cout << std::endl;
  std::cout << "| TESTING COPY CONSTRUCTOR    |";
  SUList<int> copyTest(SUList_Integer_Test);
  //std::cout << "| TESTING PRINT FUNCTION     | Printing Copied List: ";
  //copyTest.print();
  int j = SUList_Integer_Test.getFront();
  std::cout << "| TESTING GET FRONT FUNCTION  | Front of List: " << j << std::endl;
  int h = SUList_Integer_Test.getBack();
  std::cout << "| TESTING GET BACK FUNCTION   | Back of List: " << h << std::endl;
  SUList <int> tester;
  tester.putFront(7);
  tester.putFront(2);
  tester.putBack(5);
  std::cout << "| TESTING ASSIGNMENT OPERATOR | Overwriting List:";
  SUList_Integer_Test = tester;
  //SUList_Integer_Test.print();
  std::cout << "| TESTING CONTAINS FUNCTION   | Testing if 5 is a member of the list: ";
  bool flag = SUList_Integer_Test.contains(5);
  std::cout << std::endl;



  std::cout << "ＳＵＬｉｓｔ　ＰａｙＲｏｌｌ　ＴＥＳＴ" << std::endl;
  std::cout << std::endl;
  std::cout << "| TESTING PUT FRONT           | Inserting Lexi, followed by Ben in the front" << std::endl;
  SUList_PayRoll_Test.putFront(Lexi);
  SUList_PayRoll_Test.putFront(Ben);
  std::cout << "| TESTING PUT BACK            | Inserting Ryan, followed by Chris in the back" << std::endl;
  SUList_PayRoll_Test.putBack(Ryan);
  SUList_PayRoll_Test.putBack(Chris);
  std::cout << "| TESTING PRINT FUNCTION      | Printing List: " << std::endl;
  SUList_PayRoll_Test.print();
  //std::cout << "=============" << std::endl;
  //SUList_Integer_Test.print();
  int SUList_PayRoll_Holder = SUList_PayRoll_Test.size();
  //std::cout << std::endl;
  std::cout << "| TESTING SIZE FUNCTION       | Number of Elements in List: " << SUList_PayRoll_Holder << std::endl;
  PayRoll a = SUList_PayRoll_Test.getFront();
  std::cout << "| TESTING GET FRONT FUNCTION  | Front of List: " << std::endl;
  std::cout << a << std::endl;
  PayRoll b = SUList_PayRoll_Test.getBack();
  std::cout << "| TESTING GET BACK FUNCTION   | Back of List: " << std::endl;
  std::cout << b << std::endl;
  SUList<PayRoll> PayRollTest;
  PayRollTest.putFront(Amanda);
  PayRollTest.putFront(Garret);
  std::cout << "| TESTING COPY CONSTRUCTOR    |";
  SUList<PayRoll> Copy_PayRoll_Test(SUList_PayRoll_Test);
  std::cout << "| TESTING ASSIGNMENT OPERATOR | Overwriting List: ";
  SUList_PayRoll_Test = PayRollTest;
  //SUList_Integer_Test.print();
  std::cout << "| TESTING CONTAINS FUNCTION   | Testing if Amanda is a member of the list: ";
  bool SUList_PayRoll_Flag = SUList_PayRoll_Test.contains(Amanda);


  std::cout << std::endl;
  std::cout << "ＳＵＳｔａｃｋＡｒｒ　ＴＥＳＴ" << std::endl;
  std::cout << std::endl;
  std::cout << "| TESTING PUSH FUNCTION       | Pushing 5 9 17" << std::endl;
  SUStackArr_Integer_Test.push(5);
  SUStackArr_Integer_Test.push(9);
  SUStackArr_Integer_Test.push(17);
  std::cout << "| TESTING POP FUNCTION        | Popping Once" << std::endl; 
  int hold = 0;
  SUStackArr_Integer_Test.pop(hold);
  std::cout << "| TESTING PRINT FUNCTION      | Printing Stack: ";
  SUStackArr_Integer_Test.printStack();
  std::cout << std::endl;
  std::cout << "| TESTING SIZE FUNCTION       | Number of Elements in Stack: ";
  int k = SUStackArr_Integer_Test.size();
  std::cout << k << std::endl;
  std::cout << "| TESTING COPY CONSTRUCTOR    | ";
  SUStackArr<int> Copy_SUStack_Arr(SUStackArr_Integer_Test);  
  //std::cout << std::endl;
  std::cout << "| TESTING ASSIGNMENT OPERATOR | Overwriting Stack: ";
  SUStackArr<int> Assignment_StackArr;
  Assignment_StackArr.push(2);
  Assignment_StackArr.push(9);
  SUStackArr_Integer_Test = Assignment_StackArr;
  //SUStackArr_Integer_Test.printStack();
  std::cout << std::endl;
  std::cout << "| TESTING ISEMPTY FUNCTION    | ";
  bool empty = SUStackArr_Integer_Test.isEmpty();
  std::cout << std::endl;

  std::cout << "ＳＵＳｔａｃｋＡｒｒ　ＰａｙＲｏｌｌ　ＴＥＳＴ" << std::endl;
  std::cout << std::endl;
  std::cout << "| TESTING PUSH FUNCTION       | Pushing Amanda, then Garret, then Ryan" << std::endl;
  SUStackArr_PayRoll_Test.push(Amanda);
  SUStackArr_PayRoll_Test.push(Garret);
  SUStackArr_PayRoll_Test.push(Ryan);
  std::cout << "| TESTING PRINT FUNCTION      | Printing Stack: " << std::endl;
  SUStackArr_PayRoll_Test.printStack();
  std::cout << "| TESTING POP FUNCTION        | Popping Once" << std::endl; 
  PayRoll payHolder (" ", 0, 0);
  SUStackArr_PayRoll_Test.pop(payHolder);
  std::cout << "| TESTING PRINT FUNCTION      | Printing Stack: " << std::endl;
  SUStackArr_PayRoll_Test.printStack();
  std::cout << std::endl;
  std::cout << "| TESTING SIZE FUNCTION       | Number of PayRoll Objects (Employees) in Stack: ";
  int v = SUStackArr_PayRoll_Test.size();
  std::cout << v << std::endl;
  std::cout << "| TESTING COPY CONSTRUCTOR    | ";
  SUStackArr<PayRoll> Copy_SUStack_Arr_PayRoll(SUStackArr_PayRoll_Test);  
  std::cout << "| TESTING ASSIGNMENT OPERATOR | Overwriting Stack: ";
  SUStackArr<PayRoll> Assignment_StackArr_PayRoll;
  Assignment_StackArr_PayRoll.push(Chris);
  Assignment_StackArr_PayRoll.push(Ben);
  SUStackArr_PayRoll_Test = Assignment_StackArr_PayRoll;
  //std::cout << "| TESTING PRINT FUNCTION      | Printing Stack: " << std::endl;
  //SUStackArr_PayRoll_Test.printStack();
  std::cout << std::endl;
  std::cout << "| TESTING ISEMPTY FUNCTION    | ";
  bool is_SUStack_Arr_PayRoll_Empty = SUStackArr_PayRoll_Test.isEmpty();
  std::cout << std::endl;

  std::cout << "ＳＵＳｔａｃｋＬｉｓｔ　ＴＥＳＴ" << std::endl;
  std::cout << std::endl;
  std::cout << "| TESTING PUSH FUNCTION       | Pushing 8 3 6" << std::endl;
  SUStackList_Integer_Test.push(8);
  SUStackList_Integer_Test.push(3);
  SUStackList_Integer_Test.push(6);
  std::cout << "| TESTING POP FUNCTION        | Popping Once" << std::endl;
  int holder = 0;
  SUStackList_Integer_Test.pop(holder);
  std::cout << "| TESTING PRINT FUNCTION      | Printing Stack: ";
  SUStackList_Integer_Test.printStack();
  std::cout << "| TESTING SIZE FUNCTION       | Number of Elements in Stack: ";
  int r = SUStackList_Integer_Test.size();
  std::cout << r << std::endl;
  std::cout << "| TESTING ISEMPTY FUNCTION    | ";
  bool SUStackListEmpty = SUStackList_Integer_Test.isEmpty();
  std::cout << "| TESTING COPY CONSTRUCTOR    | ";
  SUStackList<int> SUStackList_Integer_Test_Copy(SUStackList_Integer_Test);
  std::cout << "| TESTING ASSIGNMENT OPERATOR | Overwriting Stack: ";
  SUStackList<int> Assignment_StackList_Integer;
  Assignment_StackList_Integer.push(24);
  Assignment_StackList_Integer.push(97);
  Assignment_StackList_Integer.push(18);
  SUStackList_Integer_Test = Assignment_StackList_Integer;
  SUStackList_Integer_Test.printStack();
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "ＳＵＳｔａｃｋＬｉｓｔ　ＰａｙＲｏｌｌ　ＴＥＳＴ" << std::endl;
  std::cout << std::endl;
  std::cout << "| TESTING PUSH FUNCTION       | Pushing Ben, Lexi, and Chris" << std::endl;
  SUStackList_PayRoll_Test.push(Ben);
  SUStackList_PayRoll_Test.push(Lexi);
  SUStackList_PayRoll_Test.push(Chris);
  std::cout << "| TESTING POP FUNCTION        | Popping Once" << std::endl;
  PayRoll payHolder2 (" ", 0, 0);
  SUStackList_PayRoll_Test.pop(payHolder2);
  std::cout << "| TESTING PRINT FUNCTION      | Printing Stack: " << std::endl;
  SUStackList_PayRoll_Test.printStack();
  std::cout << "| TESTING SIZE FUNCTION       | Number of PayRoll Objects (Employees) in Stack: ";
  int x = SUStackList_PayRoll_Test.size();
  std::cout << x << std::endl;
  std::cout << "| TESTING ISEMPTY FUNCTION    | ";
  bool SUStackListEmpty_PayRoll = SUStackList_PayRoll_Test.isEmpty();
  std::cout << "| TESTING COPY CONSTRUCTOR    | ";
  SUStackList<PayRoll> SUStackList_PayRoll_Test_Copy(SUStackList_PayRoll_Test);
  std::cout << std::endl;


  std::cout << "ＳＵＱｕｅｕｅＡｒｒ　ＴＥＳＴ" << std::endl;
  std::cout << std::endl;
  std::cout << "| TESTING ENQUEUE FUNCTION    | Adding 5 2 3 to Queue" << std::endl;
  SUQueueArr_Integer_Test.enqueue(5);
  SUQueueArr_Integer_Test.enqueue(2);
  SUQueueArr_Integer_Test.enqueue(3);
  std::cout << "| TESTING PRINT FUNCTION      | Printing Queue: ";
  SUQueueArr_Integer_Test.printQueue();
  std::cout << std::endl;
  std::cout << "| TESTING DEQUEUE FUNCTION    | Using dequeue once, printing value held: ";
  int deholder = 0;
  SUQueueArr_Integer_Test.dequeue(deholder);
  std::cout << deholder << std::endl;
  std::cout << "| TESTING PRINT FUNCTION      | Printing Queue: ";
  SUQueueArr_Integer_Test.printQueue();
  std::cout << std::endl;
  std::cout << "| TESTING ISEMPTY FUNCTION    | ";
  bool qaempty = SUQueueArr_Integer_Test.isEmpty();
  std::cout << "| TESTING SIZE FUNCTION       | Number of Elements in Queue: ";
  int sizeOfQueue = SUQueueArr_Integer_Test.size();
  std::cout << sizeOfQueue << std::endl;
  std::cout << "| TESTING COPY CONSTRUCTOR    | ";
  SUQueueArr<int> Copy_SUQueueArr(SUQueueArr_Integer_Test); 
  std::cout << "| TESTING ASSIGNMENT OPERATOR | Overwriting Stack: ";
  SUQueueArr<int> assQueue;
  assQueue.enqueue(9);
  assQueue.enqueue(9);
  assQueue.enqueue(9);
  SUQueueArr_Integer_Test = assQueue;
  //SUQueueArr_Integer_Test.printQueue();

  std::cout << std::endl;
  std::cout << "ＳＵＱｕｅｕｅＬｉｓｔ　ＴＥＳＴ" << std::endl;
  std::cout << std::endl;
  std::cout << "| TESTING ENQUEUE FUNCTION    | Adding 9 5 2 to Queue" << std::endl;
  SUQueueList_Integer_Test.enqueue(9);
  SUQueueList_Integer_Test.enqueue(5);
  SUQueueList_Integer_Test.enqueue(2);
  std::cout << "| TESTING PRINT FUNCTION      | Printing Queue: ";
  SUQueueList_Integer_Test.printQueue();
  std::cout << "| TESTING DEQUEUE FUNCTION    | Using dequeue once, printing value held: ";
  int deholder2 = 0;
  SUQueueList_Integer_Test.dequeue(deholder2);
  std::cout << deholder2 << std::endl;
  std::cout << "| TESTING ISEMPTY FUNCTION    | ";
  bool intQueueListEmpty = SUQueueList_Integer_Test.isEmpty();
  std::cout << "| TESTING SIZE FUNCTION       | Number of Elements in Queue: ";
  int sizeOfintQueue = SUQueueList_Integer_Test.size();
  std::cout << sizeOfintQueue << std::endl;
  std::cout << "| TESTING COPY CONSTRUCTOR    | ";
  SUQueueList<int> Copy_SUQueueList(SUQueueList_Integer_Test);
  std::cout << std::endl;
  std::cout << "| TESTING ASSIGNMENT OPERATOR | Overwriting Queue: ";
  SUQueueList<int> assList;
  assList.enqueue(9);
  assList.enqueue(8);
  assList.enqueue(7);
  SUQueueList_Integer_Test = assList;
  SUQueueList_Integer_Test.printQueue();


  std::cout << std::endl;
  std::cout << "ＳＵＱｕｅｕｅＬｉｓｔ　ＰａｙＲｏｌｌ　ＴＥＳＴ" << std::endl;
  std::cout << std::endl;
  std::cout << "| TESTING ENQUEUE FUNCTION    | Adding Bob and Billy to Queue" << std::endl;
  PayRoll bob("Bob", 10, 15);
  PayRoll billy("Billy", 19, 12.50);
  SUQueueList_PayRoll_Test.enqueue(bob);
  SUQueueList_PayRoll_Test.enqueue(billy);
  std::cout << "| TESTING PRINT FUNCTION      | Printing Queue: " << std::endl;
  SUQueueList_PayRoll_Test.printQueue();
  PayRoll payRollHolder(" ", 0, 0);
  std::cout << "| TESTING DEQUEUE FUNCTION    | Using dequeue once, printing value held: " << std::endl;
  SUQueueList_PayRoll_Test.dequeue(payRollHolder);
  std::cout << payRollHolder << std::endl;
  std::cout << "| TESTING ISEMPTY FUNCTION    | ";
  bool payRollQueueEmpty = SUQueueList_PayRoll_Test.isEmpty();
  std::cout << "| TESTING SIZE FUNCTION       | Number of PayRoll Objects (Employees) in Queue: ";
  int sizeOfpayRollQueue = SUQueueList_PayRoll_Test.size();
  std::cout << sizeOfpayRollQueue << std::endl;
  
  return 0;
}
