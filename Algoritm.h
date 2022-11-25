#include<string>

class Builder {
public:
	virtual void step_1() = 0;
	virtual void step_2() = 0;
	virtual void step_3() = 0;
	virtual std::string  get_Result() = 0;
};
 
class Default_bilder : public Builder {
public:
	void step_1() override;
	void step_2() override;
    void step_3() override;
    std::string  get_Result() override;

};


	class Concrete_builder_1 : public  Default_bilder
{
	std::string str_{};
public:
	void step_1() override;
	void step_3() override;
	std::string get_Result() override;
};

class Concrete_builder_2 : public  Default_bilder
{
	std::string str_{};
public:
	void step_2() override;
	void step_3() override;
	std::string get_Result() override;
};

void build(Builder& b);