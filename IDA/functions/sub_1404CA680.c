#include "../winhttp.h"

//----- (00000001404CA680) ----------------------------------------------------
void __fastcall sub_1404CA680(__int64 a1, int* a2)
{
	int v2; // eax
	_QWORD* v3; // rbx
	int* v5; // rdx
	int* v6; // [rsp+38h] [rbp+10h] BYREF

	if (a2)
	{
		v6 = a2;
		v2 = a2[1];
		v3 = (_QWORD*)qword_140C659F8;
		if (v2)
		{
			if (v2 == 3)
			{
				sub_1404CA5D0(qword_140C659F8, *a2);
				sub_14018B900((__int64)a2, 0);
				return;
			}
		}
		else
		{
			sub_1404CA5D0(qword_140C659F8, *a2);
		}
		v5 = (int*)v3[2];
		if (v5 == (int*)v3[3])
		{
			sub_1400B9430(v3, v5, &v6);
		}
		else
		{
			if (v5)
				*(_QWORD*)v5 = a2;
			v3[2] += 8i64;
		}
	}
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

