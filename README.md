Infix expressions (e.g., A + B * C) are the standard arithmetic notation where operators are written between operands. To evaluate expressions using stacks or generate code for calculators or compilers, 
it's often useful to convert infix expressions into postfix (also known as Reverse Polish Notation), where operators follow their operands (e.g., A B C * +).

The conversion follows these rules using a stack data structure:
  1.Operands are added directly to the output.
  2.Left Parenthesis ( is pushed onto the stack.
  3.Right Parenthesis ) causes operators to be popped from the stack and added to the output until a left parenthesis is encountered (which is then discarded).
  4.Operators (+, -, *, /, etc.) are pushed onto the stack, but first pop and output any operators already on the stack that have greater or equal precedence and are left-associative.
