#include <iostream>

class ComplexNumber
{   
    private:
        double re;
        double im;
    
    public:
        ComplexNumber(double re = 0.0, double im = 0.0) : re(re), im(im) {}

        double getRe() { return re; }
        double getIm() { return im; }

        ComplexNumber operator+ (const ComplexNumber& other) const
        {
            return ComplexNumber(this->re + other.re, this->im + other.im);
        }

        ComplexNumber operator+= (const ComplexNumber& other)
        {
            this->re += other.re;
            this->im += other.im;
            return *this;
        }

        ComplexNumber operator- (const ComplexNumber& other) const
        {
            return ComplexNumber(this->re - other.re, this->im - other.im);
        }

        ComplexNumber operator-= (const ComplexNumber& other)
        {
            this->re -= other.re;
            this->im -= other.im;
            return *this;
        }

        ComplexNumber operator* (const ComplexNumber& other) const
        {
            return ComplexNumber(this->re * other.re, this->im * other.im);
        }

        ComplexNumber operator*= (const ComplexNumber& other)
        {
            this->re *= other.re;
            this->im *= other.im;
            return *this;
        }

        ComplexNumber operator/ (const ComplexNumber& other) const
        {
            return ComplexNumber(this->re / other.re, this->im / other.im);
        }

        ComplexNumber operator/= (const ComplexNumber& other)
        {
            this->re /= other.re;
            this->im /= other.im;
            return *this;
        }

        bool operator== (const ComplexNumber& other) const
        {
            return (this->re == other.re && this->im == other.im);
        }

        bool operator!= (const ComplexNumber& other) const
        {
            return (this->re != other.re || this->im != other.im);
        }

        friend std::ostream& operator<< (std::ostream& os, const ComplexNumber& other)
        {
            os << "Re: " << other.re << " Im: " << other.im;
            return os;
        }



        
};