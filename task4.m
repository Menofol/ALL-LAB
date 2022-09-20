disp('Задайте значення цілих змінних x,y');
x =input('x=');
y =input('y=');
t = (x^2 + y^2) / (sqrt (x+y));
disp('           х^2 + y^2');
disp('     t =   ---------- ');
disp('            sqrt(x+y)')
fprintf( 'значення функції t : %.2f \n',t);
