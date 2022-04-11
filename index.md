# devcontainer_cpp

自带 fish-shell & starship 的 DevContainer C/C++ 开发环境基础包

特性：
- cpptools （ms-vscode）
- cmake-tools（ms-vscode）
- GitHub 副驾驶 copilot （人工智能代码提示）
- fish + starship

## 使用

### 配置环境

确保你电脑安有
- `docker`，Windows 用户建议使用基于 WSL2 的 Docker Desktop，或者直接在 WSL2 中安装使用 Docker【更节省内存】
- VScode

### 开始使用

clone 此repo：

```shell
git clone git@github.com:Paxxs/devcontainer_cpp.git
```

使用 VScode 打开克隆的 devcontainer_cpp 文件夹，VScode 会自动弹出询问

![image](https://user-images.githubusercontent.com/10364775/162697698-2919051c-f4d0-418d-af36-1bb4563f2bc8.png)

点击在容器中打开，VScode 会自动配置好开发环境

🎉然后就直接可以使用了

> 目前没有设定默认shell 为 fish，可以输入 fish 进入 fish-shell

### DIY

配置 .devcontainer 文件夹内文件：
- `devcontainer.json` 配置容器内 vscode 的插件、DevContainer 特性等
- `Dockerfile` 容器环境配置
