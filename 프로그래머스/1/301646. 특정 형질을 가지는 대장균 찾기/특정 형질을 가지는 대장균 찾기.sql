-- 코드를 작성해주세요
SELECT count(ID) AS COUNT
FROM ECOLI_DATA
WHERE (GENOTYPE & 2) != 2 and ((GENOTYPE & 1) = 1 or (GENOTYPE & 4) = 4);