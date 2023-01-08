-- 코드를 입력하세요
SELECT PT_NAME, PT_NO, GEND_CD, AGE, ifnull(TLNO, 'NONE') as TLNO from PATIENT where (PATIENT.GEND_CD='W' and PATIENT.AGE<='12') order by PATIENT.AGE desc, PATIENT.PT_NAME asc