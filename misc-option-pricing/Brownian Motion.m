T = 1e6 ; t = 1:T;
rng(888,'twister');

scale_pos = real(sqrt(2.*t.*log(log(t))));
scale_neg = real(-sqrt(2.*t.*log(log(t))));

s1 = sqrt(t);s2 = -sqrt(t);

% ss1 = (t);ss2 = -(t); 
    % 
    % W = rand([1,T]);
    % W(W>0.5) = 1; W(W<0.5) = -1;
    % W(1) = 0;
    % B = cumsum(W)./t;
    % plot(t,B); hold on





for trials = 1:5e1
    W = rand([1,T]);
    W(W>0.5) = 1; W(W<0.5) = -1;
    W(1) = 0;
    B = cumsum(W);
    plot(t,B,'LineWidth',0.1); 
    % ylim([-0.1/2 0.1/2]);
    hold on
end

p1 = plot(t,scale_pos,'LineWidth',2.5,"color","red","LineStyle","--"); hold on
p2 = plot(t,s1,'LineWidth',2.5,"color","black",LineStyle=":");
plot(t,scale_neg,'LineWidth',2.5,"color","red","LineStyle","--")
plot(t,s2,'LineWidth',2.5,"color","black",LineStyle=":"); 

ylabel('W_t','Rotation',0); xlabel('t');
legend([p1 p2],'$\sqrt{2t \log \log t}$','$\sqrt{t}$', 'Interpreter', 'latex');



% plot(t,ss1./t,'LineWidth',1,"color","g",LineStyle="--"); plot(t,ss2./t,'LineWidth',1,"color","g",LineStyle="--"); 

% histogram(B./real(scale_pos)); hold on; xlim([-1.5,1.5]) % Law of Iterated Logarithm, mapping to [-1,1]
% histogram(B./s1)
% histogram(B./ss1)
