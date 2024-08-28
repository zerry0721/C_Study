#include <stdio.h>
#include <stdlib.h>
// 포인터를 이용한 동적 배열 관리
// 요구사항:
// malloc 또는 calloc을 사용하여 동적 메모리를 할당할 것.
// realloc을 사용하여 배열의 크기를 동적으로 조절할 것.
// 입력과 출력은 모두 포인터를 이용해 수행할 것.
// 메모리 할당이 끝난 후에는 free 함수를 사용하여 메모리를 해제할 것.
int main(){
    int a,b;
    printf("배열의 초기 크기를 입력하세요: ");
    scanf("%d",&a);
    int *out=(int*)malloc(sizeof(int)*a);
    printf("배열의 요소를 입력하세요:\n");
    for(int i=0; i<a; i++){
        printf("요소 %d: ", i+1);
        scanf("%d",&out[i]);
    }
    printf("\n현재 배열의 요소:\n");
    // int count=sizeof(out)/sizeof(int);
    // printf("count 값:%d",count);
    for(int i=0; i<a; i++){
        printf("%d ", out[i]);
    }
    printf("\n배열의 크기를 얼마나 늘릴까요? ");
    scanf("%d",&b);
    out=(int*)realloc(out, sizeof(int)*(a+b));
    printf("추가된 배열의 요소를 입력하세요:\n");
    for(int i=0; i<b; i++){
        printf("추가 요소 %d: ", i+1);
        scanf("%d",&out[a+i]);
    }
    printf("\n현재 배열의 전체 요소:\n");
    for(int i=0; i<a+b; i++){
        printf("%d ", out[i]);
    }
    free(out);
    return 0;
}