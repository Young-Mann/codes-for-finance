
import numpy as np
S0 = 100
K = 100
T = 0.5
r = 0.02
sig = 0.2
payoff = "put"
N = 100

# 将时间T拆分为N份，每份是dT。
dT = float(T) / N
    #计算u，d，p，q。
u = np.exp(sig * np.sqrt(dT))
    #u = (np.exp((r - delta) * dt) - d) / (u - d) 
d = 1.0 / u   
a = np.exp((r-0.01) * dT)
p = (a - d)/(u - d)
q = 1.0 - p    
    # V承接N+1个价格
V = np.zeros(N+1)
    # 注意S_T的生成顺序，是从u=0,d=N开始.                            
S_T = np.array( [(S0 * u**j * d**(N - j)) for j in range(N + 1)] )  # price S_T at time T
    
if payoff =="call":
    V[:] = np.maximum(S_T-K, 0.0)
elif payoff =="put":
    V[:] = np.maximum(K-S_T, 0.0)

for i in range(N-1, -1, -1):
      # 这一步至关重要：V在第k轮迭代中，只关注0~N-k的位置，
        # 每个位置=（下一个位置上升的期权*p+下一个位置下降的期权*q）*折现因子
    V[:-1] = np.exp(-r*dT) * (p * V[1:] + q * V[:-1])    
    # 股价也进行新一轮的迭代，同样只有0~N-k是需要关注的，剩下的位置无关紧要。
    S_T = S_T * u       
        # 比较此刻行权和下一轮预期收益的折现
    if payoff=="call":
        V = np.maximum( V, S_T-K )
    elif payoff=="put":
        V = np.maximum( V, K-S_T )
    
print(V[0])

# getAmeOption(S0, K, T, r, sig, 10000, 'call')