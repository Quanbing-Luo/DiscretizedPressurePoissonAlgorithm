clear;
% clf;
load('p.txt');

figure (1)
mesh(p');

load('u.txt');
load('v.txt');
figure (2)   
quiver(u',v');


load('errs.txt');
figure (3)
plot(errs);


% load('bp.txt');
% 
% figure (2)
% mesh(bp');
% 


% load('err.txt');
% err=err/err(1);
% figure (2)
% plot(err);





