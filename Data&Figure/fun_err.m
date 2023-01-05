function [Merr1,Merr2,Merr3]=fun_err(u,v,p,h,Re)
[I,J]=size(u);
Merr1=zeros(I,J);
Merr2=zeros(I,J);
Merr3=zeros(I,J);


for i=1:I
for j=1:J
    if i==1
        uw=0.0; vw=0.0; pw=p(i,j);
    else
        uw=(u(i-1,j)+u(i,j))/2.0;
        vw=(v(i-1,j)+v(i,j))/2.0;
        pw=(p(i-1,j)+p(i,j))/2.0;
    end
    
    if i==I
        ue=0.0;ve=0.0; pe=p(i,j);
    else
        ue=(u(i+1,j)+u(i,j))/2.0;
        ve=(v(i+1,j)+v(i,j))/2.0;
        pe=(p(i+1,j)+p(i,j))/2.0;
    end
    
    if j==1
        us=0.0; vs=0.0; ps=p(i,j);
    else
        us=(u(i,j-1)+u(i,j))/2.0;
        vs=(v(i,j-1)+v(i,j))/2.0;
        ps=(p(i,j-1)+p(i,j))/2.0;
    end
    
    if j==J 
       un=1.0;vn=0.0;pn=p(i,j);
    else
       un=(u(i,j+1)+u(i,j))/2.0;
       vn=(v(i,j+1)+v(i,j))/2.0;
       pn=(p(i,j+1)+p(i,j))/2.0; 
    end 
    
    uP=u(i,j); vP=v(i,j);
    
Merr1(i,j)= (ue-uw)/h+(vn-vs)/h;
Merr2(i,j)= uP*(ue-uw)/h+vP*(un-us)/h+(pe-pw)/h ...
-4/Re*((ue-2*uP+uw)/(h^2)+(un-2*uP+us)/(h^2));
Merr3(i,j)= uP*(ve-vw)/h+vP*(vn-vs)/h+(pn-ps)/h ...
-4/Re*((ve-2*vP+vw)/(h^2)+(vn-2*vP+vs)/(h^2));

end
end



end
