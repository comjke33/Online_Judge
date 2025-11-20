-- 코드를 입력하세요
SELECT ANIMAL_ID, NAME, date_format(DATETIME, "%Y-%m-%d") 
from ANIMAL_INS
order by ANIMAL_ID asc