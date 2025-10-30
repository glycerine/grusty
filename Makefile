all:
	cd the_rust_part && cargo build --release

clean:
	cd the_rust_part && rm -rf target
