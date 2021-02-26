use std::io;//引入标准库中的io模块

fn main() {//fn声明函数，()为空表明函数内部不含参数，{}内为函数体
    println!("Guess the number!");//！表明为宏，负责打印输出

    println!("Please input your guess.");//作用同上

    let mut guess = String::new();//存储用户输入内容，mut表明guess为可变变量，右边表明为输入string内容，new为关联函数

    io::stdin().read_line(&mut guess)//调用io模块中的关联函数stdin，&表示参数为引用
        .expect("Failed to read line");
    
    println!("You guessed: {}", guess);//打印，并将guess参数值输出
}
