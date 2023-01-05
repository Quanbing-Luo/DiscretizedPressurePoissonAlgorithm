function [Merr,psi]=Parameter_psi(psi_x,b_psi,psi,u,v,h)
[I,J]=size(u);

for i=1:I
for j=1:J
    if i==1  
    vw=0.0; psi_w=0.0;
    else
       vw=(v(i-1,j)+v(i,j))/2.0;
       psi_w=(psi(i-1,j)+psi(i,j))/2.0; 
    end
    
    if i==I 
       ve=0.0; psi_e=0.0;
    else
       ve=(v(i+1,j)+v(i,j))/2.0;
       psi_e=(psi(i+1,j)+psi(i,j))/2.0; 
    end
    
    if j==1 
       us=0.0; psi_s=0.0;
    else
       us=(u(i,j-1)+u(i,j))/2.0;
       psi_s=(psi(i,j-1)+psi(i,j))/2.0; 
    end
    
    if j==J 
       un=1.0;psi_n=0.0;
    else
       un=(u(i,j+1)+u(i,j))/2.0;
       psi_n=(psi(i,j+1)+psi(i,j))/2.0; 
    end 
    
psi_x(i,j)= 1/4*(psi_e+psi_w+ psi_n+psi_s);
b_psi(i,j)= -h/16*(un-us-ve+vw);


end
end

Merr=psi_x+b_psi-psi;
psi=psi+Merr;

end
