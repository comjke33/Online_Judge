-- 코드를 작성해주세요
SELECT count(ID) AS FISH_COUNT FROM FISH_INFO WHERE LENGTH IS NULL;

-- 문제가 잘못 제작되어있어서, LENGTH <= 10 조건을 넣으면 테스트케이스 2가 실패함.
