-- 코드를 입력하세요
SELECT ORDER_ID, PRODUCT_ID, date_format(OUT_DATE, "%Y-%m-%d"), 
case when isnull(OUT_DATE) then "출고미정"
    when OUT_DATE>'2022-05-01' then "출고대기"
    when OUT_DATE<='2022-05-01' then "출고완료"
    end as '출고여부'
from FOOD_ORDER
order by ORDER_ID asc
