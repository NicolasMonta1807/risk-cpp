
# Risk C++

Risk game made with C++ for Data structures and Algorithms implementation.

## Set up your Git client

* Configure Git
```bash
git config --global user.name "Your name"
git config --global user.email "Your email"

# input for linux / true for windows (not recommended)
git config --global core.autocrlf input

# you can use any other editor
git config --global core.editor code
```
* Create an SSH key
```bash
# Press enter until generated (unless you know what you're doing)
ssh-keygen -t ed25519 -C "your_email@domain.com"

# Get your public key
cat ~/.ssh/id_ed25519.pub
``` 
* Copy your key and add it to GitHub: [Here's how](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account)

## How to contribute to this repo

**_NOTE:_** Every <> symbol should be removed and replaced with your case information, files or messages. 
However, every "" symbol should be kept.

### Clone (or update) the repo
If is the first time working with the repo, clone it
```bash
git clone git@github.com:NicolasMonta1807/risk-cpp.git
```
:warning: **Before you work on a new task**: Update the repo 
```bash
git fetch
git pull
```
- Check Git's Workflow [Here](https://uidaholib.github.io/get-git/3workflow.html)

### Create a descriptive branch for the task and move to it
```bash
git branch task_name
git checkout task_name
```

### Once the task is solved, add the changes.
```bash
git add <changed_file_1> <new_file_2> ...
```

### Commit your changes with a descriptive flag
```bash
git commit -m "commit description"
```
Please attend to the following standard commit's messages and apply to the solved task:

    Feat– feature - "feat: countries tree"

    Fix– bug fixes - "fix: perimeter calculation"

    Docs– changes to the documentation like README - "docs: new section to readme.md"

    Style– style or formatting change - "style: user turn menu"

    Perf – improves code performance - "perf: improved remove Node function"

### Publish your changes 
```bash
git publish -u origin <branch_name>
```

### Create a Pull Request
In order to merge your changes with the main branch, that is to accept your changes, create a GitHub Pull Request

- [Creating a Github PR](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request)



