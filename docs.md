# Code Interpreter
and  a language

---
note : Its not a documentation about the language on how to use it or about code interpreter , its just for understanding of concepts while building it.

---

Lexer : parting a string into tokens [lexical analysis]
here

- Whitespaces and comments are ignored


parsing

- converting a flat sentence into a tree
- this is where we gets our language's grammar
- syntax trees
- parser trees
 
binding -resolution

- Where each variable is 
- where a,b are declared and figure out their types
	- **type error**.



we will be building , this dynamic , so type checking will happen later ,at runtime

-symbol table


## compiler

. Language front ends target one of a handful of IRs, mainly [GIMPLE](https://gcc.gnu.org/onlinedocs/gccint/GIMPLE.html) and [RTL](https://gcc.gnu.org/onlinedocs/gccint/RTL.html). Target back ends like the one for 68k then take those IRs and produce native code.

your language-> source language turns it into IR
Backend->IR -> machine code



-> bytecode ->instruction being often a single byte long,->virtual code ,not tied to chip

we will be using language vm


```

source-to-source compiler

You write a front end for your language. Then, in the back end, instead of doing all the work to _lower_ the semantics to some primitive target language, you produce a string of valid source code for some other language that’s about as high level as yours. Then, you use the existing compilation tools for _that_ language as your escape route off the mountain and down to something you can execute.

```

front end—scanner and parser—of a transpiler looks like other compilers. 


* **Compiling** is an _implementation technique_ that involves translating a source language to some other—usually lower-level—form. When you generate bytecode or machine code, you are compiling. When you transpile to another high-level language, you are compiling too.

*

* when we say an implementation “is an **interpreter**”, we mean it takes in source code and executes it immediately. It runs programs “from source”.


---s
# LANGUAGE


















