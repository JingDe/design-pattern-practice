
// 工厂方法模式

// 使用模板避免创建creator子类
class Creator{
public:
	virtual Product* CreateProduct() =0;
};

template<class T>
class StandardCreator: public Creator{
public:
	virtual Product* CreateProduct() // outline
	{
		retrun new T;
	}
};


class ProductA: public Product...


//client不需要创建新的creator子类
StandardCreator<ProductA> mycreator;
