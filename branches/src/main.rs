fn main() {
    let mut counter = 0;//声明变量counter并初始化为0
    
    let result = loop{//声明result变量储存循环返回值
        counter += 1;//每次变量加1

        if counter == 10{//进行判断，变量是否等于10
            break counter * 2;//如果条件成立，则跳出循环，并将counter变量乘2
        }
    };//分号作用在于结束当前语句

    
    //println!("The result is {}",result);//输出结果
    //while_loop()
    //while_loop_2()
    for_loop()
}

//while循环
fn while_loop(){
    let mut number = 3;

    while number != 0{
        println!("{}!",number);

        number -= 1;
    };

    println!("LIFTOFF!!!")
}
//while循环示例2
fn while_loop_2(){
    let a = [10,20,30,40,50];
    let mut index = 0;

    while index < 5{
        println!("the value is:{}",a[index]);

        index += 1

    }
}

//for循环
fn for_loop(){
    let a = [10,20,30,40,50];

    for element in a.iter(){
        println!("the value is:{}",element);
    }
}