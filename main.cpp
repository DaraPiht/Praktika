#include <iostream>

using namespace std;
string maze[25] = {
"####B######################",
"# #       #   #      #    #",
"# # # ###### #### ####### #",
"# # # #       #   #       #",
"#   # # ######### # ##### #",
"# # # #   #       #     # #",
"### ### ### ############# #",
"# #   #     # #           #",
"# # #   ####### ###########",
"# # # #       # #         C",
"# # ##### ### # # ####### #",
"# # #     ### # #       # #",
"#   ##### ### # ######### #",
"######### ### #           #",
"# ####### ### #############",
"A           #   ###   #   #",
"# ############# ### # # # #",
"# ###       # # ### # # # #",
"# ######### # # ### # # # F",
"#       ### # #     # # # #",
"# ######### # ##### # # # #",
"# #######   #       #   # #",
"# ####### ######### #######",
"#         #########       #",
"#######E############D######"
};

void shag(int x,int y){
  if((x<0)||(x>26)||(y<0)||(y>24)||maze[y][x]=='#')
          return ;
    if((maze[y][x]!=' ') &&(maze[y][x]!='#') )
       cout <<maze[y][x]<<endl;
          maze[y][x]='#';
    shag(x-1,y);
    shag(x+1,y);
    shag(x,y-1);
    shag(x,y+1);
}


int main()
{
     shag(23,2);
}
