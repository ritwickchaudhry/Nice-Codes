/*DO NOT EDIT THIS FILE*/

/*  The class Heap defines an ADT Heap. */
/* begin {Definition of class Heap} */
class Heap {
  int *priority;        // A Heap of integers
  int last;
public:
  Heap(int);
  ~Heap();
  void insertHeap(int x);       // Insertes an element in to the Heap
  int deleteMin();             // Delete the smallest element from the heap and return it
  int empty();                 // returns 1 if Heap is empty
  void createHeap();           // creates an empty Heap
  void printHeap(); // Prints the heap
private:
  void Heapify(int);
 };
/* end{Definition of class Heap} */