#include "../winhttp.h"

//----- (00000001405EA630) ----------------------------------------------------
__int64 __fastcall sub_1405EA630(__int64 a1)
{
	__int64 v2; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rbp
	_DWORD* v8; // rsi
	float v9; // xmm0_4

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v4 = sub_1405E9400(a1, 1);
		v5 = v4;
		if (v4)
		{
			v7 = qword_140C65898;
			v8 = *(_DWORD**)(v4 + 56);
			if (v8)
			{
				LODWORD(v8) = *v8;
				if ((unsigned int)sub_1404823C0(v4))
					LODWORD(v8) = (int)(float)((float)(int)v8 * *(float*)(*(_QWORD*)(v7 + 120) + 2564i64));
			}
			v9 = (float)(int)sub_14046A890(*(_QWORD*)(v7 + 120), v5, (unsigned int)v8);
			v6 = *(_QWORD*)(a1 + 16);
			*(double*)v6 = (float)(v9 * 0.001);
		}
		else
		{
			v6 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v6 = 0i64;
		}
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v2 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v2 = 0i64;
		*(_DWORD*)(v2 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

