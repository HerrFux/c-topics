# C Topics
## Argument Evaluation Order
They order in which all the passed arguments are evaluated.  
For example:

	f(a(), b(), c());

The order is not specified and may be different with every compiler.
In this example the evaluation could go from right to left, starting with the `c` function.
All other function are then followed.
But the evaluation could also go the other way and start with `a`.
### Sources:
 * https://en.cppreference.com/w/cpp/language/eval_order
## Array Decay

## Build System (msbuild, cmake)
## Call By Value/Reference
## Calling Convention
## Compilation Unit
## Compile Time/Runtime
## Compound Literals
## Conditional Compilation
## Dangling Pointers
## Dependencies
## Dereference Operator
## Designated Initializer
## Difference Statement/Expression
## Dot Notation (`struct`, `union`)
## Dynamic Memory Allocation
## Entry Points
## Escape Sequence
## Floating Point Arithmetics
### Sources:
 * https://en.wikipedia.org/wiki/IEEE_754
## Function Prototypes/Signatures
## Hosted/Freestanding Environment
## Identifier
## Implicit/Explicit Type Casting
## Incomplete Types
Those are types that aren't fully defined or only declared.  
For example:

	struct type {};	// counts as complete
	struct type;	// does not

In the cases of `struct`, `union` and `enum`, an instance of each type can only be created with a pointer.  
### Sources:
 * https://docs.microsoft.com/en-us/cpp/c-language/incomplete-types
## Keywords
## Lexical Scope (Nested Functions)
## Macros (`define`)
## Null-Terminated String
## Operator Precedence/Associativity
## Pointer Arithmetics
## Post-/Pre-Increment/Decrement
## Literal Prefix/Suffix (L,u,U)
## Preprocessor Directives
## Program Counter/Instruction Pointer
## Scopes
## Separate Compilation Model
## Sequence Point/Side Effects
### Sources:
 * https://en.wikibooks.org/wiki/C_Programming/Side_effects_and_sequence_points
## Static/Dynamic Linking/Libraries
## Storage Classes (`extern`, `static`, `volatile`)
## Ternary Conditional Operator
## Tool Chain
## Two's/One's Complement
## Type Promotion
## Undefined Behavior
## Value Categories (lvalue, rvalue)
## Variable-Length Array (VLA)