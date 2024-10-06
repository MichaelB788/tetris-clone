#include <vector>

#include "Board.hpp"

/*
 * A 12 x 21 matrix represents the board 
 * The playable area is 10 x 20, represented by int 0
 * Player object will be represented by int 1
 * The walls make up the left and right most columns, represented by int 2. 
 * */
std::vector<std::vector<int>> board
    { 
        {2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2}, 
        {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}, 
    };

void Board::updateBoard()
{
} 
