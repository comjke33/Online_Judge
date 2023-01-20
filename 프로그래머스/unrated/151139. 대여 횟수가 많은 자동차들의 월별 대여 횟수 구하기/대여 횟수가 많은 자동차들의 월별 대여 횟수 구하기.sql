select month(START_DATE) as MONTH, q.CAR_ID as car_ID, count(*) as RECORDS
from CAR_RENTAL_COMPANY_RENTAL_HISTORY q
inner join (select CAR_ID, count(*) as z from CAR_RENTAL_COMPANY_RENTAL_HISTORY where START_DATE>='2022-08-01' and START_DATE< '2022-11-01' group by CAR_ID having count(*)>=5)w on q.CAR_ID = w.CAR_ID
where START_DATE>='2022-08-01' and START_DATE <'2022-11-01'
group by MONTH, CAR_ID
having count(*)!=0
order by MONTH asc, CAR_ID desc