clear;
% clf;
load('p.txt');
load('u.txt');
load('v.txt');
load('psi.mat');
%dlmwrite('psi.txt',psi)
h=1/50;
x=(1:50)*h-h/2;y=(1:50)*h-h/2;
[X,Y] = meshgrid(x,y);


figure (1)
mesh(X,Y,p');
xlabel('$x$','interpreter','latex');
ylabel('$y$','interpreter','latex');
zlabel('$p$','interpreter','latex');
%set(gca,'Position',[0.05 0.05 0.9 0.9]);
% set(gca,'XAxisLocation','origin');
% set(gca,'YAxisLocation','origin');


set(gcf,'Position',[230 250 400 400]) ;% 

figure (2)   

quiver(X,Y,u',v')
axis equal
%quiver(u',v');


figure (3)
contour(X,Y,psi');
xlabel('$x$','interpreter','latex');
ylabel('$y$','interpreter','latex');
xlim([0 1]);ylim([0 1]);
xticks([0 0.5 1]);yticks([0 0.5 1]);
xticklabels({'0','0.5','1'});yticklabels({'0','0.5','1'});

set(gca,'DataAspectRatio',[1 1 1]);
%set(gca,'Position',[0.05 0.05 0.9 0.9]);



set(gcf,'Position',[230 250 400 400]) ;

%grid


% plot(x1,f1_F,x2,f2_F,x3,f3_F,x4,f4_F,x1,y1,'.',x2,y2,'.',x3,y3,'.',x4,y4,'.');
% %xlabel('Temperature(¡æ)');
% xlabel('$-\frac{1}{{RT}}$','interpreter','latex');
% ylabel('$\ln \left( {\beta \frac{{d\alpha }}{{dT}}} \right) $','interpreter','latex');
% set(gca,'Position',[0.16 0.14 0.8 0.8]);
% lgd=legend('$\alpha$=20\%','$\alpha$=30\%','$\alpha$=40\%','$\alpha$=50\%'); 
% %set(lgd,'Location','NorthWest');
% set(lgd,'Location','Best');
% set(lgd,'Interpreter','latex')
% grid

