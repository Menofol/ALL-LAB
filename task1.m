disp('Задайте коефіцієнти квадратного рівняння');
a =input('a=');
b =input('b=');
c =input('c=');
d =b.^2-4*a*c;

if b<0
    disp ('дійсних чисел нема');

elseif d==0
        x=-b/2/a;

else
    x1=(-b+sqrt(d))/2/a;
    x2=(-b-sqrt(d))/2/a;
fprintf ('x1 =%f',x1);
fprintf ('\nx2 =%f',x2);


end
