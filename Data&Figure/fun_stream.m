function psi=fun_stream(u,v,h)
[I,J]=size(u);
psi=zeros(I,J);
psi_x=zeros(I,J);
b_psi=zeros(I,J);

for n=1:1e7

[Merr,psi]=Parameter_psi(psi_x,b_psi,psi,u,v,h);

if (mod(n,100)==0) %每千步显示结果
  err=max(abs(Merr(:)))
  
  figure (1)
 contour(psi');
  
  
   if err<1e-8 
     break;
   end  
  
end
end

end
