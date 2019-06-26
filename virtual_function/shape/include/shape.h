#ifndef SHAPE_H
#define SHAPE_H


class shape
{
    public:
        virtual double area() { return 0.0; };
        virtual double volume() { return 0.0;};

        virtual void print_shape_name() const = 0;
        virtual void print() const = 0;

    private:
};

#endif // SHAPE_H
