class DSU {
public:
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    bool unite(int x, int y) {
        int px = find(x);
        int py = find(y);

        if (px == py)
            return false;

        if (rank[px] < rank[py])
            swap(px, py);

        parent[py] = px;

        if (rank[px] == rank[py])
            rank[px]++;

        return true;
    }
};

class Solution {
public:
    bool can(int n, vector<vector<int>>& edges, int k, int mid) {

        DSU dsu(n);
        int upgrades = 0;
        int used = 0;

        // mandatory edges first
        for (auto& e : edges) {
            int u = e[0], v = e[1], s = e[2], must = e[3];

            if (must == 1) {

                if (s < mid)
                    return false;

                if (!dsu.unite(u, v))
                    return false;

                used++;
            }
        }

        // optional edges
        for (auto& e : edges) {

            int u = e[0], v = e[1], s = e[2], must = e[3];

            if (must == 0) {

                if (s >= mid) {

                    if (dsu.unite(u, v))
                        used++;

                } else if (s * 2 >= mid && upgrades < k) {

                    if (dsu.unite(u, v)) {
                        upgrades++;
                        used++;
                    }
                }
            }
        }

        return used == n - 1;
    }

    int maxStability(int n, vector<vector<int>>& edges, int k) {

        // important fix
        sort(edges.begin(), edges.end(),
             [](auto& a, auto& b) { return a[2] > b[2]; });

        int left = 0;
        int right = 2e9;
        int ans = -1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (can(n, edges, k, mid)) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};
