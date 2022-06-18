/*
(fact 3)
(* 3 (fact 2))
(* 3 (* 2 (fact 1)))
(* 3 (* 2 (* 1 (fact 0))))
(* 3 (* 2 (* 1 1)))
(* 3 (* 2 1))
(* 3 2)
6
*/

int factorial_rec(int n){
    if(n==1){
        return 1;
    }
    return n*factorial_rec(n);
}