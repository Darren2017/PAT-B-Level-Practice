package main

import "fmt"

func main(){
  cnt := 0
  var n int
  fmt.Scanln(&n)
  
  for n != 1{
    if n % 2 == 0{
      n /= 2
    } else{
      n = (3 * n + 1) / 2
    }
    cnt += 1
  }
  fmt.Println(cnt)
}