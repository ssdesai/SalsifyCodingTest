1. This system works by taking in an input file, and then preprocessing the file to store all of its lines in a vector. Then, another file with the "GET /lines/<line number" (e.g GET /lines/1) commands is read in. I know the prompt asked for a server, but my attempts at learning how to create an actual server with C++ were not going well so I wrote it in this format so that my coding ability could still be demonstrated.

2. The system will take more time to process longer files, but since the number of lines is first found by running through the file once before adding anything to the vector, the correct size can be allocated to make adding to the vector efficient for large numbers of lines.

3. The system currently reads an input file acting as user input, so I do not believe multiple GET commands can be executed at once. However, due to the file preprocessing, the system should do well with large numbers of commands, as it has quick access to each line number based on its position in the vector. 

4. I found many different sources through Google to try to find out how to create an actual web server, these were unsuccessful however. I generally used the C++ standard documentation to make sure my code's filestreams and other C++ STL functions worked.

5. I only used C++ libraries that I have had experience with in the past. It is likely that third party libraries could have been useful for making an actual server system.

6. I spent about two hours trying to find out how to build a server using C++, and then another two hours or so on writing, debugging, and testing my code. If I had unlimited time, I would ty to use a language with more common server usage, like Ruby or Javascript.

7. I would say that my code does a good job of preprocessing, and has an efficient O(n) complexity. 
