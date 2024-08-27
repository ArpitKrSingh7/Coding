import matplotlib.pyplot as plt
import statistics

estimates = [1890, 1542, 1294, 1798, 1173, 1120, 1483, 1611, 1685, 1236,
1345, 1989, 1712, 1225, 457, 1393, 1902, 551, 1748, 1298,
1423, 981, 1176, 1260, 451, 1924, 583, 1402, 1189, 1490,
1578, 1376, 1965, 940, 1813, 1145, 1358, 1436, 214, 1335,
1634, 1620, 1204, 1492, 1175, 1674, 1471, 1756, 1248, 1322,
1937, 1846, 474, 1771, 1957, 1409, 1698, 1455, 384, 1870,
1794, 1255, 1337, 0, 1125, 1219, 1498, 1327, 1783, 1540,
1911, 182, 1267, 1158, 180
]
number = []


from scipy import stats
stats.trim_mean(estimates,0.15)

# print(number)    
for i in range(len(estimates)):
    number.append(5)

estimates.sort()
plt.plot(estimates , number  , 'r--' )
plt.ylabel("Crowd Computing")
plt.xlabel("No. of People")

plt.plot([statistics.mean(estimates)] , [5] , 'ro')
plt.plot([statistics.median(estimates)] , [5] , 'bs')
plt.show()