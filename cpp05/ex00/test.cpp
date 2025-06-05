#include <iostream>
#include <string>
#include <stdexcept>

void process(int x) {
    if (x < 0) throw std::invalid_argument("負の値は許可されていません");
    std::cout << "処理中: " << x << std::endl;
}

int main(void)
{
    try{
        process(1);
        process(-1);
    } catch(const std::invalid_argument& e){
        std::cerr << "例外発生：" << e.what() << std::endl; 
    } catch(...){
        std::cerr << "不明な例外が発生しました" << std::endl;
    }
}