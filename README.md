# Cable-Laying-Problem-Analysis-using-MST
In this project we must figure out and decide how to lay a cable/LAN network for a company with a minimum cost.



To achieve this, we implement and evaluate the complexity of the Prim’s and Kruskal’s algorithm and their performances in sparse and dense graphs. In this project both methods have been implemented by a telecommunications company trying to lay cable in a new neighborhood. If it is constrained to bury the cable only along certain paths (e.g., roads), then there would be a graph containing the points (e.g., offices/houses) connected by those paths.
Some of the paths might be more expensive, because they are longer, or require the cable to be buried deeper; these paths would be represented by edges with larger weights. Currency is an acceptable unit for edge weight – there is no requirement for edge lengths to obey normal rules of geometry such as the triangle inequality. A spanning tree for that graph would be a subset of those paths that has no cycles but still connects every house; there might be several spanning trees possible. A minimum spanning tree would be one with the lowest total cost, representing the least expensive path for laying the cable.

