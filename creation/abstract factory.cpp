
// 抽象工厂示例

// 产品A系列：A1, A2 
// 产品B系列：
// 产品Product系列，并且由A和B组成

// 抽象工厂Factory
// 具体工厂Factory
// 客户端：创建产品Product，只管使用传入的工厂指针，不关心具体的产品

class Factory{
public:
	Factory();
	
	virtual A* MakeA() const
	{ return new A; }
	virtual B* MakeB() const
	{ return new B; } 
	virtual Product* MakeProduct() const
	{ return new Product; }
	...
};

class Factory1 : public Factory{
	
	// 创建A1  B2
};

class Factory1 : public Factory{
	//  创建A1  B1
};


class Client{
public:
	Product* createProduct(Factory* f)
	{
		A* a=f.MakeA();
		B* b=f.MakeB();
		Product* p=f.MakeProduct();
		
		p->addA(a);
		p->addB(b);
		
		return p;
	}
};

