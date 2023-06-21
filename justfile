build:
    cd rust && cargo build && mv target/debug/rust ../out/rust_furry
    g++ -o out/furry_femboy furry.cpp

clean:
    rm -rf out && mkdir out