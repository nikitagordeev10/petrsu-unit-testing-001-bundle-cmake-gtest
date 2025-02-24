[![CI/CD GitHub Actions](https://github.com/nikitagordeev10/petrsu-unit-testing-001-bundle-cmake-gtest/actions/workflows/test-action.yml/badge.svg)](https://github.com/nikitagordeev10/petrsu-unit-testing-001-bundle-cmake-gtest/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/github/nikitagordeev10/petrsu-unit-testing-001-bundle-cmake-gtest/badge.svg?branch=main)](https://coveralls.io/github/nikitagordeev10/petrsu-unit-testing-001-bundle-cmake-gtest?branch=main)
[![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=nikitagordeev10_petrsu_unit_testing_001_bundle_qt_gtest&metric=alert_status)](https://sonarcloud.io/dashboard?id=nikitagordeev10_petrsu_unit_testing_001_bundle_qt_gtest)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=nikitagordeev10_petrsu_unit_testing_001_bundle_qt_gtest&metric=bugs)](https://sonarcloud.io/summary/new_code?id=nikitagordeev10_petrsu_unit_testing_001_bundle_qt_gtest)
[![Code smells](https://sonarcloud.io/api/project_badges/measure?project=nikitagordeev10_petrsu_unit_testing_001_bundle_qt_gtest&metric=code_smells)](https://sonarcloud.io/dashboard?id=nikitagordeev10_petrsu_unit_testing_001_bundle_qt_gtest)


### О репозитории
Отчет по курсу: "Основы тестирования ПО"\
Лабораторная работа 1: "Математический калькулятор"

Цель работы: Изучение сред и технологий. Связка cmake + Google Test (gtest)

### Задачи:
- Зарегистрироваться на Github и скачать проект-шаблон с исходным кодом тестового окружения. Рекомендуется скачивать в виде архива.
- Открыть проект-шаблон, изучить исходный код, запустить тесты (меню "инструменты" → "тесты" → "Запустить все"), проверить результат запуска тестов.
- Реализаовать в отдельном файле функцию вычисления корней квадратного уравнения (ax2+bx+c=0), добавить вызов функции в программу (main), обновить qmake файлы, проверить компиляцию приложения.
- Составить перечень тестов (шаблон документа) проверяющую правильность работы функции (позитивные тесты) и его реакцию на возможные отклонения от стандартного поведения (негативные тесты).
- Реализовать запланированые тесты. Выполнить тестирование. В случае обнаружения ошибки сформировать протокол ошибки (шаблон протокола), выполнить отладку и повторное тестирование.
- Создать на GitHub проект, загрузить полученный проект (код приложения и тестов).
- Подключить автоматический запуск тестов (Github actions), оценку покрытия кода тестами (https://coveralls.io/) и статический анализ кода (https://sonarcloud.io). Добавить ссылки на отчеты о тестировании и оценке покрытия в файл README.md.

### Создание проекта на базе примера

1. Необходимо установить git

2. Для работы Cmake необходимо установить пакеты:

```
sudo apt install libgtest-dev libgmock-dev
```

3. Для подгрузки gtest необходимо выполнить команды:
```
git submodule init
git submodule update
```

4. Запустить создание Make файлов:
```shell
cmake .
```
5. выполнить сборку приложения:
```shell
make
```
6. Выполнить запуск тестов
```shell
./tests/ctest-tests 
```

7. Выполнить модификацию приложения в каталоге `app/`: 
   - создать модуль(и) со своими функциями, 
   - исправить подключение заголовочных файлов и работуглавной функции (файл `main.c`) 
   - обновить перечень файлов проекта (файл `app.pro`, секции `SOURCES` и `HEADERS`)

8. Выполнить модификацию тестов в каталоге `tests/`:
   - удалить примеры тестов
   - добавить заголовочные файлы со своими тестами
   - обновить список подключений заголовочных файлов в main.cpp
   - обновить перечень файлов проекта включая файлы приложения (файл `tests.pro`, секции `SOURCES` и `HEADERS`)
9. Подключить внешний репозиторий следуя инструкциям Github

10. Загрузить код на Github

### Запуск тестов на Github actions
1. Сборка и запуск приложения осуществляется с помощью github actions.
2. Конфигурационный скрипт лежит в каталоге .gihub/workflows
3. Необходимо удостовериться что выполняется сборка и запуск тестов до секции с отправкой статистик
4. Обновить бейдж сборки в соответствии с названием профиля и репозитория

### Соединение с coveralls.io

1. Необходимо зайти на сайт coveralls.io и авторизоваться через github
2. Подключить репозиторий с своим проектом
3. В настройках репозитория скопировать токен
4. В настройках гитхаба в разделе `secrets - actions` создать ключ `coveralls_token` со значением токена
5. Запустить github actions, проверить успешное выполнение задания gtest-tests
6. проверить появление статистики на coveralls.io
7. Обновить бейдж покрытия в соответствии с названием профиля и репозитория

### Соединение с sonarcloud
1. Необходимо зайти на сайт https://sonarcloud.io и авторизоваться через github
2. Создать новый проект, выбрать github actions, указать свой репозиторий
3. Скопировать токен проекта, в настройках github в разделе `secrets - actions` создать ключ `sonar_token` со значением токена
4. продолжить настройку проекта на sonarcloud до раздела с конфигурационным файлом
5. Изменить значения названия проекта и организации в файле sonar-project.properties в соответствии с предложенными
6. Запустить github actions, проверить успешное выполнение задания gtest-tests
7. проверить появление результатов на sonarcloud
8. Обновить бейджи статистик в соответствии с названием профиля и репозитория
