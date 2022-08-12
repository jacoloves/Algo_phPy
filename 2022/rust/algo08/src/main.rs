use std::io;

fn main() {
    abc_a();
}

fn abc_a() {
    let scan = std::io::stdin();
    let mut line = String::new();

    let _ = scan.read_line(&mut line);

    let vec: Vec<&str> = line.split_whitespace().collect();

    let mut nv: Vec<i32> = Vec::with_capacity(5);

    for i in 0..=4 {
        nv.push(vec[i].parse().unwrap_or(0));
    }

    let mut flg_3: bool = false;
    let mut flg_2: bool = false;

    for i in 1..=13 {
        let mut ans: i32 = 0;
        for j in 0..=4 {
            if nv[j] == i {
               ans += 1; 
            }

            if ans == 3 {
                flg_3 = true;
            } else if ans == 2 {
                flg_2 = true;
            }
        }
    } 

    if flg_2 && flg_3 {
        println!("Yes");
    } else {
        println!("No");
    }
}
