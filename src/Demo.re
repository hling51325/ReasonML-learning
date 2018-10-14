Js.log("Hello, BuckleScript and Reason!");

let greeting = "hello!";
let score = 10;
let newScore = 10 + score;

let displayGreeting = true
if (displayGreeting) {
    let message = "Enjoying the docs so far?";
    print_endline(message)
  };

let message = "hello";
print_endline(message); /* Prints "hello" */

/* Bindings Are Immutable */
/* message = "aaa" */
let message = "bye";
print_endline(message); /* Prints "bye" */

let message = {
    let part1 = "hello";
    let part2 = "world";
    part1 ++ " " ++ part2
  };

print_endline(message);

    /* let a = 1;
let b = 2;
a + b;

(a) =>
  (b) =>
    a + b; */


let score = 10;
let score: int = 10;

let myInt = 5;
let myInt: int = 5;
let myInt = (5: int) + (4: int);
let add = (x: int, y: int) : int => x + y;
/* let drawCircle = (~radius as r: int) : unit => ...; */

/* print_endline(drawCircle(100)); */

type scoreType = int;
let x: scoreType = 10;


let greeting = "Hello world!";
let multilineGreeting = "Hello
 world!";
let greetings = "Hello " ++ "world!";

let greetingAndOneSlash = {|Hello
    World
    \
    Hehe...
    |};
print_endline(greetingAndOneSlash);

/* such as `${}` */
let world = {js|世界|js}; /* Supports Unicode characters */
let helloWorld = {j|你好，$world|j}; /* Supports Unicode and interpolation variables */
Js.log(helloWorld)

/* char type dont support Unicode or UTF-8.  single quotes */
let firstLetterOfAlphabet = 'a';

/* &&: logical and
||: logical or
!: logical not.
<=, >=, <, >
==: structural equal, compares data structures deeply: (1, 2) == (1, 2) is true. Convenient, but use with caution
===: referential equal, compares shallowly. (1, 2) === (1, 2) is false. let myTuple = (1, 2); myTuple === myTuple is true.
!=: structural unequal
!==: referential unequal */


/* Integers
32-bits, truncated when necessary. Reason provides the usual operations on them: +, -, *, /, etc.
Floats
Float requires other operators: +., -., *., /., etc. Like 0.5 +. 0.6. */


/* tuple */
/* such as clojure some where  */
let ageAndName = (24, "Lil' Reason");
let my3dCoordinates = (20.0, 30.5, 100.0);

let ageAndName: (int, string) = (24, "Lil' Reason");
/* a tuple type alias */
type coord3d = (float, float, float);
let my3dCoordinates: coord3d = (20.0, 30.5, 100.0);

/* destructuring */
let (_, y, _) = my3dCoordinates;


/* record */
/* such as object */

type person = {
    age: int,
    name: string
  };

let me = {
    age: 5,
    name: "Big Reason"
};

let name = me.name;

let meNextYear = {...me, age: me.age + 1};

Js.log(me)
Js.log(meNextYear)

type person1 = {
    name: string,
    mutable age: int
  };
  let baby = {name: "Baby Reason", age: 5};
  baby.age = baby.age + 1; /* alter `baby`. Happy birthday! */

Js.log(baby)

type horsePower = {power: int, metric: bool};

let metric = true;
let someHorsePower = {power: 10, metric};
/* same as the value {power: 10, metric: metric}; */

type car = {name: string, horsePower};
/* same as the type {name: string, horsePower: horsePower}; */


/* variant */