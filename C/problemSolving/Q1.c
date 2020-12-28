#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int tempL[999][99];
    bool verifyL[999];
    int answer = 0;
    int i, j, k;
    int skillLen = strlen(skill);
    bool existance = false;
    for(j=0; j<skillLen; j++){
        for(i=0;i<skill_trees_len;i++){
            int tempSize = strlen(skill_trees[i]);
            for(k = 0; k<tempSize; k++){
                if(skill_trees[i][k]==skill[j]){
                    tempL[i][j] = k;
                    existance = true;
                }
            }
            if(existance == false){
                tempL[i][j] = -1;
            }
            existance = false;
        }
    }
    for(i=0; i<skill_trees_len; i++){
        for(j = 0; j<skillLen; j++){
            if(j == 0){
                k = tempL[i][j];
            }else if(j < skillLen-1){
                if(k < tempL[i][j] && k != -1){
                    k = tempL[i][j];
                }else if(tempL[i][j] == -1){
                    k = tempL[i][j];
                }else{
                    verifyL[i] = false;
                    break;
                }
            }else{
                if(k < tempL[i][j] && k != -1){
                    verifyL[i] = true;
                }else if(tempL[i][j] == -1){
                    verifyL[i] = true;
                }else{
                    verifyL[i] = false;
                    break;
                }
            }
        }
    }
    for(i = 0; i<skill_trees_len; i++){
        if(verifyL[i] == true){
            answer += 1;
        }
    }
    return answer;
}