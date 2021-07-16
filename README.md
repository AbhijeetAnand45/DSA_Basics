## Algorithm

An algorithm can be defined as a finite set of steps, which has to be followed while carrying out a particular problem. It is nothing but a process of executing actions step by step.

# Advantages of an Algorithm
- Effective Communication:
     Since it is written in a natural language like English, it becomes easy to understand the step-by-step delineation of a solution to any particular problem.
- Easy Debugging: 
    A well-designed algorithm facilitates easy debugging to detect the logical errors that occurred inside the program.
- Easy and Efficient Coding:
    An algorithm is nothing but a blueprint of a program that helps develop a program.
- Independent of Programming Language: 
    Since it is a language-independent, it can be easily coded by incorporating any high-level language.

# Disadvantages of an Algorithm
- Developing algorithms for complex problems would be time-consuming and difficult to understand.
- It is a challenging task to understand complex logic through algorithms.

# Pseudocode
- Pseudocode refers to an informal high-level description of the operating principle of a computer program or other algorithm. - It uses structural conventions of a standard programming language intended for human reading rather than the machine reading.

# Advantages of Pseudocode
- Since it is similar to a programming language, it can be quickly transformed into the actual programming language than flowchart.
- The layman can easily understand it.
- Easily modifiable as compared to the flowcharts.
- Its implementation is beneficial for structured, designed elements.
- It can easily detect an error before transforming it into a code.
- Disadvantages of Pseudocode
- Since it does not incorporate any standardized style or format, it can vary from one company to another.
- Error possibility is higher while transforming into a code.
- It may require a tool for extracting out the Pseudocode and facilitate drawing flowcharts.
- It does not depict the design.

# Difference 
- Pseudo Approach:
    1. Initialize a variable called as Count to zero, absent to zero, total to 60
    2. FOR EACH Student PRESENT DO the following:
         - Increase the Count by One
    3. Then Subtract Count from total and store the result in absent
    4. Display the number of absent students
- Algorithmic Approach:
    1. Count <- 0, absent <- 0, total <- 60
    2. REPEAT till all students counted
         - Count <- Count + 1
    3. absent <- total - Count
    4. Print "Number absent is:" , absent
# Programs 
- This repository contains following programs in c language: 
  1. write a c program to implement Selection problem
  2. write a c program to implement knapsack problem
  3. write a c program to implement 01 knapsack problem
  4. write a c program to implement matrix chain multiplication
  5. write a c program to implement job sequencing problem
  6. write a c program to implement Huffman coding
  7. write a c program to implement Dijkstra Algorithm
  8. write a c program to implement Binary first search (BFS)
  9. write a c program to implement Depth first search (DFS)
  10. write a c program to implement prim's algorithm to implement Minimum Cost Spanning Tree.
  



    - First Approach : C++ using STL next_permuation which will give a new permutation each till a repeation occurs.

    ```
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        do{
            ans.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        
        return ans;
	```
	
	- Second Approach : Backtracking recursive Method
	
	```
	vector<vector<int>> ans;
    void permutations(vector<int>& nums, int idx, int n){
         if(idx == n){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<=n;i++){
            swap(nums[i],nums[idx]);
            permutations(nums,idx+1,n);
            swap(nums[i],nums[idx]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
       permutations(nums,0,nums.size()-1);
        return ans;
	}
	```
	
	**Upvote and comment if any doubt !!**