#include<iostream>
#include<string>

using namespace std;

void get_max_min(int arr[], int input, int Max, int Min){
    int *max = &Max; //아 주소값 안넣어주면 오류 난다고
    int *min = &Min;
    
    *max = arr[0];      //대뜸 주소 들이밀지 말고 처음 *는 정의고 그 후가 값 저장이야
    *min = arr[0];

    for(int i = 1; i<input; i++){
        if(*max < arr[i]){
            *max = arr[i];
        }

        if(*min > arr[i]){
            *min = arr[i];
        }

    }
    cout<<  "Max: " <<*max << ", Min: " << *min<<endl;
}

int main (void){
    int input;
    int Max, Min;
    
    cout<< "배열의 길이를 입력하세요: ";
    cin >> input;
    int arr[input];     //상단에 적을 시 오류가 발생(빨간줄은 안생기는데 걍 안돌아감)

    for(int i = 0; i < input; i++){
        cin >> arr[i];
    }
    get_max_min(arr, input, Max, Min);

    return 0;
}