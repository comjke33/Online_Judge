SELECT HISTORY_ID, CAR_ID, date_format(start_date,'%Y-%m-%d') as START_DATE, date_format(end_date,'%Y-%m-%d')as END_DATE, CASE WHEN TIMESTAMPDIFF(day, START_DATE, END_DATE) >=29 THEN '장기 대여' ELSE '단기 대여' END RENT_TYPE 
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY 
where START_DATE like '2022-09%'
order by HISTORY_ID desc