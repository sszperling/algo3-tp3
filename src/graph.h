#ifndef ALGO3_TP2_GRAPH_H
#define ALGO3_TP2_GRAPH_H

#include <vector>

typedef unsigned int node;
typedef std::vector<unsigned int> nodeSet;
typedef std::vector< std::vector< bool > > adjMatrix;
typedef std::vector< std::vector< node > > adjList;

struct edge {
    node start;
    node end;
};

typedef std::vector<edge> edgeList;

struct graphInfo {
    unsigned int n;
    edgeList edges;
};

namespace Graph {

    /**
     * @info Esta es la nueva isClique
     * @param graph
     * @param subclique
     * @param node
     * @return Si el nodo es adyacente a todos los nodos de la subclique
     * @complexity O(|subclique|))
     */
    bool allAdjacentTo(const adjMatrix& graph, const nodeSet& subclique, const node node);
    bool allAdjacentTo(const adjList& graph, const nodeSet& subclique, const node node);

    /**
     * @precondition La lista de adyacencias y el la lista de la subclique tiene que estar ordenado
     * @param graph
     * @param subclique
     * @param node
     * @return Si el nodo es adyacente a todos los nodos de la subclique
     * @complexity O(|adj(node)|))
     */
    bool allAdjacentToOrd(const adjList &graph, const nodeSet &subclique, const node node);

}
#endif //ALGO3_TP2_GRAPH_H
