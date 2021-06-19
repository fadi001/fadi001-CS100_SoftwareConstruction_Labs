#include "../header/latex_visitor.hpp"

int main() {
	LatexVisitor* l = new LatexVisitor();

	Base* exp = new Div(new Op(4), new Add(new Op(1), new Op(1)));

	cout << l->PrintLaTeX(exp) <<endl;
	delete l;
	delete exp;

	return 0;
}
