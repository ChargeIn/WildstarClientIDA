#include "../winhttp.h"

//----- (00000001404C8320) ----------------------------------------------------
__int64 __fastcall sub_1404C8320(__int64 a1, float a2, float a3, float a4, __int64 a5)
{
	_QWORD* v5; // rdx
	_QWORD* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rcx
	_QWORD* i; // rcx
	__int64 j; // rcx

	v5 = *(_QWORD**)(a1 + 88);
	v6 = (_QWORD*)v5[2];
	if (v6 == v5)
		return 1i64;
	while (1)
	{
		v7 = v6[5];
		if (a5 != v7
			&& (float)(a2 * a2) >= (float)((float)((float)(*(float*)(v7 + 168) - a4) * (float)(*(float*)(v7 + 168) - a4))
				+ (float)((float)(*(float*)(v7 + 160) - a3) * (float)(*(float*)(v7 + 160) - a3))))
		{
			break;
		}
		v8 = v6[3];
		if (v8)
		{
			v6 = (_QWORD*)v6[3];
			for (i = *(_QWORD**)(v8 + 16); i; i = (_QWORD*)i[2])
				v6 = i;
		}
		else
		{
			for (j = v6[1]; v6 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v6 = (_QWORD*)j;
			if (v6[3] != j)
				v6 = (_QWORD*)j;
		}
		if (v6 == v5)
			return 1i64;
	}
	return 0i64;
}

