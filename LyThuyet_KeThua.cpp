class base
{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
};

class ke_thua_Private: private base
{
	// khai bao va dinh nghia cac thanh phan them
	
	/*
			x khong the truy cap duoc tu class ke_thua_Private
			
			y chuyen thanh private cua class ke_thua_Private
			z chuyen thanh private cua class ke_thua_Private
	*/
};

class ke_thua_Protected: protected base
{
	// khai bao va dinh nghia cac thanh phan them
	
	/*
			x khong the truy cap duoc tu class ke_thua_Protected
			
			y chuyen thanh protected cua class ke_thua_Protected
			z chuyen thanh protected cua class ke_thua_Protected
	*/
};

class ke_thua_Public: public base
{
	// khai bao va dinh nghia cac thanh phan them
	
	/*
			x khong the truy cap duoc tu class ke_thua_Public
			
			y chuyen thanh protected cua class ke_thua_Public
			z chuyen thanh public    cua class ke_thua_Public 
	*/
};

int main()
{
	return 0;
}
