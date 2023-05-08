#include <iostream>
#include <string>

class siswa; 

class orang {
	private:
	string nama;
	public:
	void setNama(string pNama);
	friend class siswa;
};
int main()
{
    std::cout << "Hello World!\n";
}
