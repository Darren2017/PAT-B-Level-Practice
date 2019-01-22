package main

import "fmt"

func judge (a, b, c int64, i int){
    if a + b > c {
        fmt.Printf("Case #%d: true\n", i)
    } else {
        fmt.Printf("Case #%d: false\n", i)
    }
}

func main ()  {
    var T int
    fmt.Scanf("%d", &T)
    var a, b, c int64
    for i:= 0; i < T; i++{
		fmt.Scanln(&a, &b, &c)
        judge(a, b, c, i + 1)
    }
}