#include <vector>

int solution(std::vector<int> v, int val) {
    int k = 0;
    for(int i = 0; i < v.size(); ++i) {
        if(v[i] != val) {
            v[k] = v[i];
            k++;
        }
    }
    return k;
}

int main(void) {
    
    std::vector<int> v = {3, 2, 2, 3};
    solution(v, 3);

    return 0;
}