리눅스 명령어 정리

pwd   #현재 폴더의 위치 확인

mkdir linux_ex   #linux_ex라는 폴더 생성
mkdir linux_ex/report1   #linux_ex라는 폴더 안에 report1이라는 폴더 생성

cd linux_ex/report1   #report1이라는 폴더에 진입

mkdir one two three   #현재 위치에 있는 폴더에 one, two, three라는 폴더 세 개 생성
dir   #현재 위치에 있는 폴더, 파일명들 확인

mkdir -p tmp/test   #mkdir의 경우 A폴더 생성/A폴더 안에 B폴더 생성이 불가능
                    #mkdir -p의 경우 A폴더 생성/A폴더 안에 B폴더 생성도 가능

ls -R   #현재 위치에 있는 폴더와, 그 폴더들의 하위 폴더까지 확인

rmdir tmp/test   #현재 위치에 있는 tmp 폴더 안에 있는 test 폴더 삭제
rmdir one two three   #현재 위치에 있는 one, two, three 폴더 삭제

ls -A   #현재 위치에 있는 폴더 확인(숨김처리 한 폴더는 확인 불가능)

cd   #최상위 폴더로 귀환(ex.배경화면)

cat problem   #현재 위치에 있는 problem 파일 내용 읽음
more problem_cp   #현재 위치에 있는 problem_cp 파일 내용 읽음
tell +3 problem_mv   #현재 위치에 있는 problem_mv 파일의 3번째 줄을 읽음

cp problem problem_cp   #현재 위치에 있는 problem 파일을 복사해 problem_cp라는 이름으로 붙여넣기
mv problem problem_mv   #현재 위치에 있는 problem 파일을 잘라내서(ctrl + x) problem_mv라는 이름으로 

grep ^안 problem   #현재 위치에 있는 problem 파일에서 안으로 시작되는 행 찾기
grep 걸까요?$ problem   #현재 위치에 있는 problem 파일에서 걸까요?로 끝나는 행 찾기