-- 코드를 입력하세요
SELECT ANIMAL_INS.ANIMAL_ID, ANIMAL_INS.NAME
from ANIMAL_INS left join ANIMAL_OUTS on ANIMAL_INS.ANIMAL_ID = ANIMAL_OUTS.ANIMAL_ID
where (ANIMAL_INS.DATETIME - ANIMAL_OUTS.DATETIME)>0
order by ANIMAL_INS.DATETIME asc