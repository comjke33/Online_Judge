-- 코드를 입력하세요
SELECT ANIMAL_TYPE, count(ANIMAL_TYPE) as `count`
from ANIMAL_INS
GROUP BY ANIMAL_TYPE
order by ANIMAL_TYPE asc