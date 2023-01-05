clear;
%clf;
load('p.txt');
load('u.txt');
load('v.txt');

[I,J]=size(p);h=1/I;Re=100;
x=(1:50)*h-h/2;y=(1:50)*h-h/2;
[X,Y] = meshgrid(x,y);

load('Merr.mat');
%[Merr1,Merr2,Merr3]=fun_err(u,v,p,h,Re);

% r1=max(abs(Merr1(:)))
% r2=max(abs(Merr2(:)))
% r3=max(abs(Merr3(:)))

% r1_n=norm(Merr1,1)/(I*J)
% r2_n=norm(Merr2,1)/(I*J)
% r3_n=norm(Merr3,1)/(I*J)

r1_m=mean(abs(Merr1(:)))
r2_m=mean(abs(Merr2(:)))
r3_m=mean(abs(Merr3(:)))

figure (4)
mesh(X,Y,Merr1');
xlabel('$x$','interpreter','latex');
ylabel('$y$','interpreter','latex');
zlabel('$f_{1,P}$','interpreter','latex');
set(gcf,'Position',[230 250 400 400]) ;% 

figure (5)
mesh(X,Y,Merr2');

xlabel('$x$','interpreter','latex');
ylabel('$y$','interpreter','latex');
zlabel('$f_{2,P}$','interpreter','latex');
set(gcf,'Position',[230 250 400 400]) ;% 

figure (6)
mesh(X,Y,Merr3');

xlabel('$x$','interpreter','latex');
ylabel('$y$','interpreter','latex');
zlabel('$f_{3,P}$','interpreter','latex');
set(gcf,'Position',[230 250 400 400]) ;% 




