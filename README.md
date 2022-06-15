# 오픈소스 시험 공부

enter 2번은 띄어쓰기

`---` 나 `***` 이렇게 3번 이상 입력할 경우, 가로줄이 삽입됨

---
***

```C
#define MAX_SIZE 100
int sorted[MAX_SIZE];

void merge(int list[], int left, int mid, int right)
{
	int i, j, k, l;
	i = left; j = mid+1; k = left;

	while(i <= mid && j <= right) {
		if(list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}
	if (i>mid)
		for(l = j; l <= right; l++)
			sorted[k++] = list[l];
	else
		for(l = i; l <= mid; l++)
			sorted[k++] = list[l];
	for(l = left; l <= right; l++)
		list[l] = sorted[l];
}

void merge_sort(int list[], int left, int right)


{
	int mid;
	if(left<right) {
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}

int main()
{

	return 0;
}
```



1) 제가 어렸을떄 말이죠

2) 전 말이였어요

3) 그거 무슨 말이냐면요

+ 조랑말 같은 거거였어요

- 아닌가? 얼룩말인가??

* 아몰랑

> 제가 어렸을떄 말이죠
>> 전 말이였어요
>>> 그거 무슨 말이냐면요
>>>조랑말 같은 거거였어요
>>>
>>> 아닌가? 얼룩말인가??
>>> 
>>> 아몰랑




# 기울리기 혹은 굶게 일지도?

*제가 어렸을떄 말이죠*

_전 말이였어요_

**그거 무슨 말이냐면요**

__조랑말 같은 거거였어요__

___아닌가? 얼룩말인가??___

***아몰랑***


# 링크 주소

<www.naver.com>

[네이버](www.naver.com)

[네이버](www.naver.com"네이버바로가기")

|자라자라 잔잔|임임임 박박 임박하는 친박|박근혜입니다. 람쥐오오오 람쥐쥐쥐 베이베|
|:--------|:-------:|--------:|
|ㅇ|ㄴ|ㅇ|
|ㅇ|ㄴ|ㅇ|
|ㅇ|ㄴ|ㅇ|

