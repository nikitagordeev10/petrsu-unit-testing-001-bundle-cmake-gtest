[![CI/CD GitHub Actions](https://github.com/nikitagordeev10/unit-testing-lab-1/actions/workflows/test-action.yml/badge.svg)](https://github.com/nikitagordeev10/unit-testing-lab-1/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/github/nikitagordeev10/unit-testing-lab-1/badge.svg)](https://coveralls.io/github/nikitagordeev10/unit-testing-lab-1)
[![Quality gate](https://sonarcloud.io/api/project_badges/quality_gate?project=nikitagordeev10_unit-testing-lab-1)](https://sonarcloud.io/summary/new_code?id=nikitagordeev10_unit-testing-lab-1)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=nikitagordeev10_unit-testing-lab-1&metric=bugs)](https://sonarcloud.io/summary/new_code?id=nikitagordeev10_unit-testing-lab-1)
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=nikitagordeev10_unit-testing-lab-1&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=nikitagordeev10_unit-testing-lab-1)

Лабораторная работа 1: Изучение сред и технологий
Цель работы: изучение программных инструментальных средств (github, googletest, Qt IDE, github actions, coveralls, sonarcloud) и апробация на практике.

Задачи:
- Зарегистрироваться на Github и скачать проект-шаблон с исходным кодом тестового окружения. Рекомендуется скачивать в виде архива.
- Открыть проект-шаблон в Qt creator, изучить исходный код, запустить тесты (меню "инструменты" → "тесты" → "Запустить все"), проверить результат запуска тестов.
- Реализаовать в отдельном файле функцию вычисления корней квадратного уравнения (ax2+bx+c=0), добавить вызов функции в программу (main), обновить qmake файлы, проверить компиляцию приложения.
- Составить перечень тестов (шаблон документа) проверяющую правильность работы функции (позитивные тесты) и его реакцию на возможные отклонения от стандартного поведения (негативные тесты).
- Реализовать запланированые тесты. Выполнить тестирование. В случае обнаружения ошибки сформировать протокол ошибки (шаблон протокола), выполнить отладку и повторное тестирование.
- Создать на GitHub проект, загрузить полученный проект (код приложения и тестов).
- Подключить автоматический запуск тестов (Github actions), оценку покрытия кода тестами (https://coveralls.io/) и статический анализ кода (https://sonarcloud.io). Добавить ссылки на отчеты о тестировании и оценке покрытия в файл README.md.