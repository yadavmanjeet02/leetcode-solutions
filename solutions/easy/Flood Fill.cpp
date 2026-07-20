// Title: Flood Fill
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/flood-fill/

            int newCol=col+delCol[i];


            if(newRow>=0 &&
               newRow<n &&
               newCol>=0 &&
               newCol<m &&

               image[newRow][newCol]
               ==initialColor &&

               ans[newRow][newCol]
               !=color){

                    dfs(newRow,
                        newCol,
                        image,
                        ans,
                        color,
                        initialColor);

