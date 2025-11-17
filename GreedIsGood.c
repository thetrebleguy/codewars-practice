#include <stdio.h>

int score(const int dice[5]);

int main(){
    int sample[5] = {2, 4, 4, 5, 4};
    score(sample);
    return 0;
}

int score(const int dice[5]) {
//  Three 1's => 1000 points
//  Three 6's =>  600 points
//  Three 5's =>  500 points
//  Three 4's =>  400 points
//  Three 3's =>  300 points
//  Three 2's =>  200 points
//  One   1   =>  100 points
//  One   5   =>   50 point

    int score = 0;
    // insert map
    int map[6][2] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}};
    for (int i = 0; i < 5; i++){
        map[dice[i] - 1][1]++;
    };

    // calculate score
    // check for threes
    for (int i = 0; i < 6; i++){
        if (map[i][1] >= 3){
            switch(map[i][0]){
                case 1:
                    score += 1000;
                    map[i][1] -= 3;
                    break;
                case 2:
                    score += 200;
                    map[i][1] -= 3;
                    break;
                case 3:
                    score += 300;
                    map[i][1] -= 3;
                    break;
                case 4:
                    score += 400;
                    map[i][1] -= 3;
                    break;
                case 5:
                    score += 500;
                    map[i][1] -= 3;
                    break;
                case 6:
                    score += 600;
                    map[i][1] -= 3;
                    break;
            }
        }
    };

    // check for ones (1 and 5 only)
    // if 1
    while (map[0][1] > 0){
        score += 100;
        map[0][1]--;
    }

    // if 5
    while (map[4][1] > 0){
        score += 50;
        map[4][1]--;
    }

    return score; 
}