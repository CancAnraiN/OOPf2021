#ifndef __FORM_H__
#define __FORM_H__

#include <iomanip>
#include <sstream>

class Form {
private:
    double value;
    int _precision;
    int format;
public:
    Form(int p = 6) : _precision(p), format(0) {};
    ~Form() {};
    friend std::ostream& operator<<(std::ostream&, const Form&);

    Form& operator()(double v)
    {
        value = v;
        return *this;
    }

    Form& scientific()
    {
		format = std::ios_base::scientific;
		return *this;
	}

	Form& fixed()
    {
		format = std::ios_base::fixed;
		return *this;
	}

    Form& precision(int p)
    {
		_precision = p;
		return *this;
	}
};

std::ostream& operator<<(std::ostream& out, const Form& f)
{
    std::ostringstream s;

    s.precision(f._precision);
	s.setf((std::ios_base::fmtflags)f.format, std::ios_base::floatfield);
	s << f.value;

	return out << s.str();
}

#endif
