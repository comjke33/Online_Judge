-- 코드를 작성해주세요
SELECT ROUND(
    AVG(
        CASE
            WHEN LENGTH > 10 THEN LENGTH
            ELSE 10
        END
        ), 
    2) AS AVERAGE_LENGTH -- 소숫점 3째자리에서 반올림이면, 3-1인 2로 작성해야됨
FROM FISH_INFO;
