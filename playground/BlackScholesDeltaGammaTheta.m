sigma = 0.1615; S0 = 100; K = 120;
T = 1; r = 0.05; dt = 1/250;
 
dS = S0*[-0.1:0.01:0.1];
 
dVBS = BlackScholes(sigma,S0+dS,K,T-dt,r,1) - BlackScholes(sigma,S0,K,T,r,1);
 
[delta,gamma,theta] = BlackScholesDeltaGammaTheta(sigma,S0,K,T,r,1);
dVBSDGT = theta * dt + delta* dS +1/2*gamma*dS.^2;
 
plot(dS,dVBS,'r');hold on; plot(dS,dVBSDGT,'o');hold off;



function [delta,gamma,theta] = BlackScholesDeltaGammaTheta(sigma,S0,K,T,r,CP)
d1 = (log(S0/K)+(r+sigma^2/2)*T)/(sigma*sqrt(T));
d2 = d1-sigma*sqrt(T);
 
delta = CP*normcdf(CP*d1);
gamma = normpdf(d1)/(S0*sigma*sqrt(T));
theta = -S0*normpdf(d1)*sigma/(2*sqrt(T)) -CP* r*K*exp(-r*T)*normcdf(CP*d2);
