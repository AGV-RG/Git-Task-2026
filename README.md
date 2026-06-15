## Git/Github Tasks

AGV Introductory Tasks: [ROS + Git Tasks](https://docs.google.com/document/d/1SA3oEYCuS8NRoyjZ1SI9gP7eZIXaP0zw11KbYqDuHo8/edit?tab=t.0#heading=h.535avltkzpqt)

# Why Git?

Git is a powerful, distributed version control system that enables teams to track every change in their codebase, collaborate seamlessly, and maintain a detailed history of project evolution. In robotics and research, where projects are often complex and rapidly evolving, Git provides several benefits:
- Most projects that we'll work on will require you to collaborate with several of your batchies. In such a situation, making sure everyone's code is integrated seamlessly and does not cause any conflicts is essential. Git’s branching and merging features are excellent for ensuring all the contributions merge together smoothly.
- Git maintains a detailed version history for the project, which lets you trace back and revert any breaking changes while keeping track of the all edits made.
- Centralized repositories like GitHub (!= Git) serve as secure backups, where all your code can be saved for to prevent mishaps.

# Git - Resources and Tasks

- Resources:
  - [Interactive Git Learning Platform](https://learngitbranching.js.org) No need for doing the advance topics in both remote/main. Attach full-screen screenshots after solving the modules to your documentation.
  - [Interactive Git to practice and experiment](https://www.msyamkumar.com/cs320/learnGitBranching/index.html) Feel free to test out and experiment with different Git methodologies.
  - [Git Cheatsheet](https://github.github.com/training-kit/downloads/github-git-cheat-sheet/)
- Extra Resources 
  - [Reference + Extra Reading](http://gitimmersion.com/index.html)
  - Book on Git- [Pro Git](http://git-scm.com/book/en/v2)
  - [Version Control (Git)](https://missing.csail.mit.edu/2020/version-control/)

## Note

While it is tempting to use certain VS Code extensions / GitHub Desktop App, nothing offers the same amount of flexibility as Git through the terminal. **Needless to say, do all these tasks using your terminal**.

## Task 1

Add your name to this list below 'Entries'.

- **Fork the repo, create a new branch (called Task1), make changes and send a pull request**
  - [This article](https://help.github.com/articles/using-pull-requests/) should give you a good idea of what pull requests are how to use them.

Your entry should maintain alphabetic order and it should be in the format:
   * ` your name [username](http://github.com/username)`.  


- Your Pull Request must have only one commit (if there are multiple commits, you should squash them). 
- Only one file should be there in the diff of your Pull Request.

### Entries

ENTER NAMES HERE \
Harshit Rana [harshit7744](http://github.com/harshit7744) \
Aditya Roy [AdityaR17](http://github.com/AdityaR17) \
Ayushman Sahoo [ayushman020908](https://github.com/ayushman020908) \
Debanshu Das [DebanshuDas](https://github.com/DebanshuDas) \
Shaurya Gupta[Coder0407](https://github.com/Coder0407/Git-Task-2026) \
Luv Anand [Luv-Anand](http://github.com/Luv-Anand) \
Somil Goyal [SomilGoyal164](http://github.com/SomilGoyal164) \
Kanishkk Kingwani [Kanishkk-Kingwani](http://github.com/Kanishkk-Kingwani) \
Vishwa Pandya [vishwa-pandya](https://github.com/vishwa-pandya) \
Yatharth Singh [yatharthsing](http://github.com/yatharthsing) \
Atreyi Pal Chowdhury [palchowdhuryatreyi06-collab](http://github.com/palchowdhuryatreyi06-collab) \
SaiAmrit [sas-987](https://github.com/sas-987/Git-Task-2026) \
Subhashree Mohanty [subhashreemohanty1507](https://github.com/subhashreemohanty1507) \
Mukesh Nikap [mukeshnikap-dotcom](https://github.com/mukeshnikap-dotcom) \
RupashiBansal [rupashibansal1298](http://github.com/rupashibansal1298) \
Ayush Patnaik [patnaikayush425-cyber](http://github.com/patnaikayush425-cyber) \
Disha Bhavsar [dishabhavsar-25](http://github.com/dishabhavsar-25) \
Kharanshu Dash [kharanshuuuu](http://github.com/kharanshuuuu) \
Ahan Porwal [ahanporwal](http://github.com/ahanporwal) \
saswat saiprasad kar [saswatskar](http://github.com/saswatskar) \
Ruhi Shanbhag [ruhishan](http://github.com/ruhishan) \
Viraat Alegaonkar https://github.com/viraat240507 \
Arpit Aggarwal [arpitaggarwal9584](http://github.com/arpitaggarwal0584) \
Aashi Asmita [aashiasmita1357](http://github.com/aashiasmita1357) \
Sambit Mukhopadhyay [SambitMukhopadhyay](http://github.com/SambitMukhopadhyay) \
Kashyap Tandel [kashyaptandel1](http://github.com/kashyaptandel1) \
Aashna [aashna0908](http://github.com/aashna0908) \
Rudraksh Gupta [rudraksh168](https://github.com/rudraksh168) \
Hanuma Hari Kiran [Harikiran1413h](https://github.com/Harikiran1413h)


## Task 2

After all of you send a Pull Request, I'll add my name to 'Entries'. 

- Configure a remote that points to the upstream repository in Git to sync changes you make in a fork with the original repository. 
- Try to merge upstream changes into your downstream repository. You'll get 'merge conflicts'. 
- [Remove the merge conflicts](https://help.github.com/en/articles/resolving-a-merge-conflict-using-the-command-line) and create another pull request.


## Task 3

- Create a new branch (called Task3) in your fork. Add a dummy piece of code and push it to the current branch. 
- You've now realized that you pushed something wrong. Instead of removing the commit altogether, **push another commit that will undo the changes made**. 
- Create a pull request.

Why not remove the commit altogether? \
This prevents Git from losing history, which is important for the integrity of your revision history and for reliable collaboration.

##  Task 4

- Create a new branch (called Task4) in your fork. Add a dummy piece of code and push it to the current branch. 
- You've now realized that you've pushed something that is not only wrong but also stupid. You regret it so much that you want the commit to vanish altogether. 
Use reset to **remove this commit**. 

## Task 5

- Create a new branch (called Task5) in your fork. Add a dummy piece of code and commit it to this branch. Do this 5 more times. 
- Now you want to **remove some intermediate commits**. Remove commit no. 2 and 4 using rebase.
- Push all the commits into Task5 and create a Pull Request.


Some guidelines for the tasks:

* Your Pull Request must be rebased on the latest master.  
* This commit must have a message that is explanatory. For eg. for Task 1: `Add name to README (Name here)`.
* Name of the PR must be informative. For eg. for Task 1: `(Task1) Add my name to the README (Name here)`.
