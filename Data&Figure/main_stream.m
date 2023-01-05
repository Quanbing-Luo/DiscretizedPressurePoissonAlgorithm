clear;clf;
load('p.txt');
load('u.txt');
load('v.txt');

[I,J]=size(p);h=1/I;Re=100;

psi=fun_stream(u,v,h);

figure (1)
contour(psi');











