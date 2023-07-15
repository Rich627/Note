
  

* 建立Docker Image

* 編寫應用程序

* 推上GitHub

* DockerHub云编译打包

* 下载使用Docker Image



~~~bash
$ sudo docker image pull node:8.16.1

$ sudo docker image ls

# 寫一個node.js應用
$ vim helo.js

#node.js語法
console.log("I love this game.")

# 要运行这个应用，首先建立一个Node.js的运行环境(container/容器)

$ nano Dockerfile

...

FROM node:8.16.1

  

RUN mkdir /src

  

COPY helo.js /src

CMD ["node", "/src/helo.js"]

...

# 编译打包我们的运行环境
$ sudo docker image build -t komavideo/mynode:v01 .

#列出當前的docker image有哪些
$ sudo docker image ls

# 在环境中运行我们的应用
$ sudo docker container run komavideo/mynode:v01

~~~




~~~bash

# 取得運行環境

$ sudo docker image pull komavideo/mynode:latest

$ sudo docker container run komavideo/mynode:latest

$ sudo docker image pull komavideo/mynode:v01

$ sudo docker container run komavideo/mynode:v01

~~~