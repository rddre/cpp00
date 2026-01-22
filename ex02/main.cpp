#include <iostream>
#include <string>

class test 
{
	private:
		int private_i;
	public:
		test();
		void set_private_i(int val);
		int get_private_i() const;
		int i;
	
	
};

void test::set_private_i(int val)
{
	this->private_i = val;
}

int test::get_private_i() const
{
	return this->private_i;
}

test::test()
{}

int main()
{
	std::cout << "Test class created successfully!" << std::endl;
	test m = test();
	m.i = 42;
	m.set_private_i(10);
	std::cout << "\n\n" << m.get_private_i() << "\n\n";
	return 0;
}