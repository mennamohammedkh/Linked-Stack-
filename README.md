# Linked-Stack
**Class Definition:**

- LinkedStack<T>: This is a template class, making it versatile for storing elements of any data type (represented by the template parameter T).
- **Public Members:** 
  - LinkedStack(): Default constructor, initializes the top pointer to nullptr (empty stack).
  - ~LinkedStack(): Destructor, deallocates all nodes in the stack to prevent memory leaks.
  - IsEmpty(): Checks if the stack is empty.
  - IsFull(): Checks if the stack is full (using a simple memory allocation test).
  - Top(): Returns the value of the top element.
  - Add(const T& x): Adds a new element x to the top of the stack.
  - Delete(T& x): Removes the top element and stores its value in x.
  - Counter(): Counts and returns the number of elements in the stack.
  - Print(): Prints the values of all elements in the stack.
  - Mean(): Calculates and returns the mean (average) of the elements.
  - Variance(): Calculates and returns the variance of the elements.
  - StrDev(): Calculates and returns the standard deviation of the elements.
- **Private Member:** 
  - Node<T>\* top: A pointer to the top node of the stack.

**2. Constructor and Destructor:**

- **LinkedStack():** 
  - Sets top to nullptr, indicating an empty stack.
- **~LinkedStack():** 
  - Iterates through the linked list using a while loop.
  - In each iteration: 
    - Stores the address of the next node in next.
    - Deletes the current top node.
    - Updates top to point to the next node.

**3. Core Stack Operations:**

- **IsEmpty():** 
  - Returns true if top is nullptr, indicating an empty stack.
- **IsFull():** 
  - Creates a temporary node, deletes it, and returns false (assuming memory allocation was successful).
  - This is a simple check for memory availability.
- **Top():** 
  - Checks if the stack is empty and returns a default value (e.g., 0 for numeric types) if it is.
  - Otherwise, returns the data of the top node.
- **Add(const T& x):** 
  - Creates a new node.
  - Assigns the value x to the new node's data.
  - Links the new node to the current top node.
  - Updates top to point to the new node.
- **Delete(T& x):** 
  - Checks if the stack is empty and returns if it is.
  - Stores the top node's data in x.
  - Updates top to point to the next node.
  - Deletes the old top node.

**4. Statistical Functions:**

- **Counter():** 
  - Iterates through the stack and counts the number of nodes.
- **Print():** 
  - Iterates through the stack and prints the data of each node.
- **Mean():** 
  - Calculates the sum of all elements.
  - Divides the sum by the number of elements to get the mean.
- **Variance():** 
  - Calculates the mean of the elements.
  - Calculates the sum of the squared differences between each element and the mean.
  - Divides the sum of squared differences by the number of elements to get the variance.
- **StrDev():** 
  - Calculates the variance.
  - Calculates the square root of the variance to get the standard deviation.

