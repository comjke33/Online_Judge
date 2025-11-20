-- 코드를 작성해주세요
SELECT ROUND(
    AVG(
        CASE
            WHEN LENGTH > 10 THEN LENGTH
            ELSE 10
        END
        ), 
    2) AS AVERAGE_LENGTH 
FROM FISH_INFO;