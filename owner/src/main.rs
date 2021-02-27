/*fn main() {
    let s = String::from("hello");

    takes_ownership(s);

    let x = 5;

    makes_copy(x);
}

fn takes_ownership(some_string:String){
    println!("{}",some_string);
}

fn makes_copy(some_integer:i32){
    println!("{}",some_integer);
}*/
//函数返回值时所有权转移，此处代码有问题，暂时不能排除故障
/*fn main() {
    let s1 = give_ownership();

    let s2 = String::from("hello");

    let s3 = takes_and_gives_back(s2);
}

fn give_ownership() -> String{
    
    let some_string = String::from("hello");

    some_string
}

fn takes_and_gives_back(a_string:String) -> String{
    a_string
}*/

//利用元组来返回多个值
/*fn main() {
    let s1 = String::from("hello");

    let (s2,len) = calculate_length(s1);

    println!("The length of '{}' is {}.",s2,len);

}

fn calculate_length(s:String)-> (String,usize){
    let length = s.len();

    (s,length)
}*/

//引用与借用
fn main() {
    
}