all:
	cd the_rust_part && cargo build --release

clean:
	rm -rf the_rust_part/target
	rm -f c_example/call_rust_from_c_test
