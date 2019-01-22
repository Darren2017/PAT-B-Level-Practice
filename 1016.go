package main

import "fmt"

func main (){
	var A, Da, B, Db, a, b int64
	fmt.Scanf("%d %d %d %d", &A, &Da, &B, &Db)
	for A != 0{
		if A % 10 == Da{
			a = a * 10 + Da
		}
		A /= 10
	}
	for B != 0{
		if B % 10 == Db{
			b = b * 10 + Db
		}
		B /= 10
	}
	fmt.Printf("%d", a + b)
}