# scanf特点

## 1、输入后换行键启动执行

## 2、读取字符型变量时，不会跳过\n

- 因此需要先`fflush(stdin)`清除缓存区域  
```c
int i = 0;
char c = 'a';
scanf("%d", &i); //scanf需要输入换行启动执行
printf("i=%d\n", i);
fflush(stdin); //清空标准输入缓冲区，避免下一个scanf读取剩余的\n
scanf("%c", &c);
printf("c=%c\n", c);
```

## 3、读取浮点型、整型、字符串时，会忽略\n、\0
```c
int i = 0;
float j = 10.999;
scanf("%d", &i); //scanf需要输入换行启动执行
printf("i=%d\n", i);
scanf("%f", &j); //读取浮点型、整型、字符串时忽略\n和\0
printf("j=%.2f", j);
```

## 4、scanf的返回值
- scanf返回值为数据类型匹配成功的个数
- 想要正确匹配输入值，在%c前加空格即可
```c
int i = 0,ret = 0;
float f = 0.0;
char c = 'a';

ret = scanf("%d %c%f", &i, &c, &f); //ret值为scanf匹配成功的个数，想要正确匹配输入值，在%c前加空格即可
printf("i=%d, c=%c, f=%.2f", i, c, f);

system("pause");
return 0;
```