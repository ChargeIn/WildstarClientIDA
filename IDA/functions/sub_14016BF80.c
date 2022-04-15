#include "../winhttp.h"

//----- (000000014016BF80) ----------------------------------------------------
void __fastcall sub_14016BF80(__int64 a1, int* a2, unsigned int* a3)
{
	__int64 v3; // rdi
	__int64 v6; // rax
	int* v8; // rbp
	__int64 v9; // rbx
	signed __int64 v10; // rbx
	unsigned __int64 i; // rcx

	if (a2)
	{
		v3 = 0i64;
		v6 = 0i64;
		v8 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v6;
			while (*((_WORD*)a2 + v6));
		}
		v9 = (2 * v6) >> 1;
		if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v8 = sub_14018B280(2 * (v9 + 1), 0);
		v10 = 2 * v9;
		sub_1407DB590(v8, a2, v10);
		if ((int*)((char*)v8 + v10))
			*(_WORD*)((char*)v8 + v10) = 0;
		for (i = 0i64; aBarcolor[i]; ++i)
			;
		if (v10 >> 1 == i)
		{
			if (!i)
			{
			LABEL_14:
				sub_140168590(a1, a3);
				goto LABEL_18;
			}
			while (*((_WORD*)v8 + v3) == aBarcolor[v3])
			{
				if (++v3 >= i)
					goto LABEL_14;
			}
		}
		sub_1400D3240(a1, (unsigned __int16*)a2, a3);
	LABEL_18:
		if (v8)
			sub_14018B900((__int64)v8, 0);
	}
}
// 14016C07A: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140A37210: using guessed type wchar_t aBarcolor[9];

