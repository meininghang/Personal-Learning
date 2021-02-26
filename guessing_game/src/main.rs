use std::io;//引入标准库中的io模块

        use rand::Rng;//Rng是一个特征定义随机数实现的方法集合

        fn main() {//fn声明函数，()为空表明函数内部不含参数，{}内为函数体
                println!("Guess the number!");//！表明为宏，负责打印输出

                let secret_number = 
rand::thread_rng().gen_range(1,101);//前者返回随机数生成器函数，后者负责随机数生成方法
                println!("The secret_number is: {}",secret_number);
        println!("Please input your guess.");//作用同上

        let mut guess = String::new();//存储用户输入内容，mut表明guess为可变变量，右边表明为输入string内容，new为关联函数

        io::stdin().read_line(&mut guess)//调用io模块中的关联函数stdin，&表示参数为引用
            .expect("Failed to read line");
    
        println!("You guessed: {}", guess);//打印，并将guess参数值输出
}
