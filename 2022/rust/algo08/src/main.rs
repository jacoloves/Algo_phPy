use std::str::FromStr;
use std::fmt::Debug;

fn read_line<T>() -> Vec<T>
where T: FromStr, <T as FromStr>::Err : Debug {
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    s.trim().split_whitespace().map(|c| T::from_str(c).unwrap()).collect()
}

fn main() {
    //abc_a();
    //abc_b();
    //aoj_1a();
    //aoj_1b();
    aoj_1c();
}

fn aoj_1c() {
    let x: Vec<i32> = read_line();
    let a: i32 = x[0];
    let b: i32 = x[1];

    let area: i32 = a * b;
    let cir_length: i32 = a * 2 + b * 2;

    println!("{} {}", area, cir_length);
}

fn aoj_1b() {
    let x: Vec<i32> = read_line();
    let n: i32 = x[0];

    let ans: i32 = n * n * n;

    println!("{}", ans);
}

fn aoj_1a() {
    println!("Hello World");
}

fn abc_b() {
    let x: Vec<i32> = read_line();
    let n: i32 = x[0];

    let mut a: Vec<i32> = read_line();

    for i in 0..=n-1 {
        a[i as usize] -= 1;
    }

    let mut dp: Vec<i32> = Vec::with_capacity(n.try_into().unwrap());


    for i in 1..=n-1 {
        dp[i as usize] = dp[a[i as usize] as usize] + 1;
    }

    for i in 0..=n-1 {
        println!("{}", dp[i as usize]);
    }
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
