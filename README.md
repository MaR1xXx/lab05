## Homework

1. Создайте модульные тесты на классы `Transaction` и `Account` и создайте файл `CMakeLists.txt` для библиотеки *banking* и для запуска тестов.

 - Модульный тест на класс `Transaction`: https://github.com/aakx000/lab05/blob/ba65e5f1792794510cf0628c7effba5d48ae252c/tests/test_transaction.cpp
 - Модульный тест на класс `Account`: https://github.com/aakx000/lab05/blob/ba65e5f1792794510cf0628c7effba5d48ae252c/tests/test_account.cpp
 - `CMakeLists.txt`: https://github.com/aakx000/lab05/blob/ba65e5f1792794510cf0628c7effba5d48ae252c/CMakeLists.txt

В ходе проверки обнаруживается ошибка в исходном коде `Transaction.cpp` (строка 39)
```sh
 bool success = Debit(from, sum + fee_); //изначально было Debit(to, sum + fee_)
```

2. Настройте сборочную процедуру на **Github Actions**.

- Создаем файл `CI.yml` в директории .github/workflows

```sh
$ mkdir .github && cd .github
$ mkdir workflows && cd workflows
$ touch CI.yml
```

- Файл CI.yml: https://github.com/aakx000/lab05/blob/ba65e5f1792794510cf0628c7effba5d48ae252c/.github/workflows/CI.yml

3. Настройте [Coveralls.io](https://coveralls.io/).

[![Coverage Status](https://coveralls.io/repos/github/aakx000/lab05/badge.svg)](https://coveralls.io/github/aakx000/lab05)

## Links

- [C++ CI: Travis, CMake, GTest, Coveralls & Appveyor](http://david-grs.github.io/cpp-clang-travis-cmake-gtest-coveralls-appveyor/)
- [Boost.Tests](http://www.boost.org/doc/libs/1_63_0/libs/test/doc/html/)
- [Catch](https://github.com/catchorg/Catch2)

```
Copyright (c) 2015-2021 The ISC Authors
```
