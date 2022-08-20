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
    //aoj_1c();
    //aoj_1d();
    //aoj_2a()
    //aoj_2b();
    //aoj_2c();
    aoj_2d();
}

fn aoj_2d() {
    let line: Vec<i32> = read_line();
    let w: i32 = line[0];
    let h: i32 = line[1];
    let x: i32 = line[2];
    let y: i32 = line[3];
    let r: i32 = line[4];

    let min_x: i32 = x - r;
    let min_y: i32 = y - r;
    let pla_x: i32 = x + r;
    let pla_y: i32 = y + r;

    if 0 > min_x || 0 > min_y {
        println!("No");
    } else if pla_x > w || pla_y > h {
        println!("No");
    } else {
        println!("Yes");
    }
}

fn aoj_2c() {
    let x: Vec<i32> = read_line();
    let a: i32 = x[0];
    let b: i32 = x[1];
    let c: i32 = x[2];
    
    /*
    if (a <= b && b <= c) {
        cout << a << " " << b << " " << c << endl;
    } else if (a >= b && b >= c){
        cout << c << " " << b << " " << a << endl;
    } else if (a <= b && b >= c && a <= c) {
        cout << a << " " << c << " " << b << endl;
    } else if (a <= b && b >= c && a >= c) {
        cout << c << " " << a << " " << b << endl;
    } else if (a >= b && b <= c && a <= c) {
        cout << b << " " << a << " " << c << endl;
    } else if (a >= b && b <= c && a >= c) {
        cout << b << " " << c << " " << a << endl;
    }
    */

    if a <= b && b <= c {
        println!("{} {} {}", a, b, c);
    } else if a >= b && b >= c {
        println!("{} {} {}", c, b, a);
    } else if a <= b && b >= c && a <= c {
        println!("{} {} {}", a, c, b);
    } else if a <= b && b >= c && a >= c {
        println!("{} {} {}", c, a, b);
    } else if a >= b && b <= c && a <= c {
        println!("{} {} {}", b, a, c);
    } else if a >= b && b <= c && a >= c {
        println!("{} {} {}", b, c, a);
    }
    
}

fn aoj_2b() {
    let x: Vec<i32> = read_line();
    let a: i32 = x[0];
    let b: i32 = x[1];
    let c: i32 = x[2];

    if a < b && b < c {
        println!("Yes");
    } else {
        println!("No");
    }
}

fn aoj_2a() {
    let x: Vec<i32> = read_line();
    let a: i32 = x[0];
    let b: i32 = x[1];

    if a < b {
        println!("a < b");
    } else if a > b {
        println!("a > b");
    } else {
        println!("a == b");
    }
}

fn aoj_1d() {
    let x: Vec<i32> = read_line();
    let mut s: i32 = x[0];

    let h = s / 3600;
    s = s % 3600;
    let m = s / 60;
    s = s % 60;
    println!("{}:{}:{}", h, m, s);
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
