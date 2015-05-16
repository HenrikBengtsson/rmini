hello <- function() cat("Hello world!\n")

hello_c <- function() invisible(.Call("hello"))
