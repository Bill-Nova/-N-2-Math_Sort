I think it's because subtraction replaces the comparison operation.
-----

example
------

Add[]=1,10,7,2,8

Sort=1,9,-3,-5,6 //0-(+1)->1-(+9)->10-(-3)->7....-(+6)->8 

I figured out two operations.

(1)

1,9,-3,-5,6 -> 1,9,(-3 + -5),-(-5),(6 + -5) -> 1,9,-8,5,1 -> 1,1,8,-3,1 -> 1,1,5,3,-2 ->1,1,5,1,2

1,1+1,1+1+5,1+1+5+1,1+1+5+2 = 1,2,7,8,10

a,b,c,d,e -> a,(b+c),-c,(d+c),e
------

(2)

1,9,-3,-5,6 ->  1,9,(-3,-5),6 -> 1,(9-3-5),-(-5<->-3),(6-3-5) -> 1,1,5,3,-2 -> 1,1,5,1,2

a.....n -> a,(b+(c1.....cn)),(c<--->cn),(d+(c1.....cn))....n
-------------------------

Using operation 2 can indeed calculate the result quickly, but I have a hard time imagining how to find the optimal solution.....If you find a way remember to tell me
---------
