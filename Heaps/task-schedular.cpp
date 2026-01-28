class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int>max_heap;
        map<char,int>mp;
        // Creating a frequency map for tasks
        for(auto i : tasks)
        {
            mp[i]++;
        }
        // Pushing all the frequencies into heap
        for(auto it:mp)
        {
            max_heap.push(it.second);
        }
        // Looping over the heap until its empty
        int time=0; //initializing the time variable here
        while(!max_heap.empty())
        {
            int cycle = n+1;
            vector<int> temp;
            int taskcount=0;
            while(cycle > 0 && !max_heap.empty())
            {
                int curr_task = max_heap.top();
                max_heap.pop();
                if (curr_task > 1)
                    temp.push_back(curr_task-1);
                taskcount++;
                cycle--;
            }
            for(auto i : temp)
            {
                max_heap.push(i);
            }
            if(max_heap.empty())
            {
                time+=taskcount;
            }
            else
            {
                time+=(n+1);
            }
        }
        return time;
    }
};

// Very important Question link : https://leetcode.com/problems/task-scheduler/