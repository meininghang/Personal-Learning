// fn main() {
//     let (a, mut b): (bool,bool) = (true,false);
//     println!("a = {:?}, b= {:?}",a,b);

//     b = true;
//     assert_eq!(a,b);

// }

struct Struct {
    e : i32
}

fn main(){
    let (a,b,c,d,e);

    (a,b) = (1,2);
    [c,..,d,_] = [1,2,3,4,5];
    Struct {e,..} = Struct {e:5};

    assert_eq!([1,2,1,4,5],[a,b,c,d,e]);

}