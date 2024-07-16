# include <iostream>
# include <queue>

int main(){
    std::priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(26);
    pq.push(2);
    pq.push(12);

    std::cout << "El orden es: ";
    while (!pq.empty()){
        std::cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}