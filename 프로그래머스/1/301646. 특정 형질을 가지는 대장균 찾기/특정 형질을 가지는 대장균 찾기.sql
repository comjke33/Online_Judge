-- 코드를 작성해주세요
SELECT count(ID) AS COUNT
FROM ECOLI_DATA
WHERE (GENOTYPE & 2) != 2 and ((GENOTYPE & 1) = 1 or (GENOTYPE & 4) = 4);

-- SQL에서 비트 연산의 결과는 0 또는 1이 아니라, 0 또는 N(AND으로 연산한 값)이다. 
