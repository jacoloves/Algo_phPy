use std::io;

fn main() {
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let v:Vec<u32> = s.split_whitespace().map(|it| it.parse().unwrap()).collect();

    let mut n = [0;13];
    for i in &v {
        n[*i as usize -1] += 1;
    }

    let mut flg2: bool = false;
    let mut flg3: bool = false;

    for i in 0..=12 {
        if n[i] == 2 {
            flg2 = true;
        } else if n[i] == 3 {
            flg3 = true;
        }
    }

    let mut ans:bool = false;
    if flg2 && flg3 {
        ans = true;
    }

    if ans {
        println!("Yes");
    } else {
        println!("No");
    }
    
}
