#include "../winhttp.h"

//----- (00000001404D1570) ----------------------------------------------------
__int64 __fastcall sub_1404D1570(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 result; // rax

	v1 = (_QWORD*)a1[20];
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = (void(__fastcall***)(_QWORD, __int64))v3[5];
			if (v4)
				(**v4)(v4, 1i64);
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != (_QWORD*)a1[20]);
	}
	sub_140008410((__int64)(a1 + 19));
	result = 0i64;
	a1[23] = 0i64;
	a1[24] = 0i64;
	a1[25] = 0i64;
	a1[26] = 0i64;
	a1[27] = 0i64;
	return result;
}

