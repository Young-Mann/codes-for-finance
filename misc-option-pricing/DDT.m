% format long
format default
ss = importdata('-pastespecial')
%%
S0 = 50
T = 0.25
IV0 = 0.3
r = 0.02
K = 50
numofC = 1e5
numoft = 50
d1 = [0.1083]


%%
c_v = [blsprice(S0,K,r,T,IV0) ]; 
s_v = [blsdelta(ss,50,0.02,0.25,0.3)]; 
port_v = [c_v*1e5 - delta*S0*1e5]; tmp = diff(ss); 


for i=2:51
    ccc = c_v(i-1) + s_v(i-1)*tmp(i-1)+(exp(r*T/numoft)-1)*(c_v(i-1)-s_v(i-1)*ss(i-1));
    c_v = [c_v; ccc];
    IV = blsimpv(ss(i),50,0.02,0.25,c_v(i))
    delta = blsdelta(ss(i),50,0.02,0.25,IV); d1 = [d1; norminv(delta)];
    s_v = [s_v; delta];
    port_v = [port_v; c_v(i)*1e5 - delta*S0*1e5]
end

    
