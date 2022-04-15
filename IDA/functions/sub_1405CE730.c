#include "../winhttp.h"

//----- (00000001405CE730) ----------------------------------------------------
void __fastcall sub_1405CE730(__int64 a1, __int64 a2)
{
	_DWORD* v2; // rdi
	int v3; // eax
	int v4; // eax
	_DWORD* v5; // rcx
	int v6; // eax
	__int64 v7; // rdi
	int v8; // eax
	int v9; // eax
	int v10; // eax

	if (*(_DWORD*)(a2 + 8))
	{
		if (*(_DWORD*)(a2 + 12))
		{
			v2 = (_DWORD*)qword_140C65898;
			v3 = *(_DWORD*)(qword_140C65898 + 29820);
			if (v3 <= 0)
			{
				if (*(float*)(qword_140C65898 + 29760) != 1.0 || (float)0.0 != *(float*)(qword_140C65898 + 29764))
				{
					v4 = dword_140C636A8;
					*(_QWORD*)(qword_140C65898 + 29760) = 1065353216i64;
					v2[7438] = 1065353216;
					v2[7436] = v4;
				}
			}
			else
			{
				sub_1400C3230(qword_140C65898 + 29736, 0.0, 1.0, 1000.0 / (float)v3);
			}
			v2[7442] = 1;
			v2[7443] = 1065353216;
			v2[7444] = 1;
			return;
		}
		v5 = (_DWORD*)qword_140C65898;
		if (*(float*)(qword_140C65898 + 29760) != 1.0 || (float)0.0 != *(float*)(qword_140C65898 + 29764))
		{
			v6 = dword_140C636A8;
			*(_QWORD*)(qword_140C65898 + 29760) = 1065353216i64;
			v5[7438] = 1065353216;
			v5[7436] = v6;
		}
		v5[7443] = 1065353216;
		v5[7444] = 1;
	LABEL_24:
		v5[7442] = 1;
		return;
	}
	if (!*(_DWORD*)(a2 + 12))
	{
		v5 = (_DWORD*)qword_140C65898;
		if (*(float*)(qword_140C65898 + 29760) != 0.0 || (float)0.0 != *(float*)(qword_140C65898 + 29764))
		{
			v10 = dword_140C636A8;
			*(_QWORD*)(qword_140C65898 + 29760) = 0i64;
			v5[7438] = 0;
			v5[7436] = v10;
		}
		*(_QWORD*)(v5 + 7443) = 1065353216i64;
		goto LABEL_24;
	}
	v7 = qword_140C65898;
	v8 = *(_DWORD*)(qword_140C65898 + 29820);
	if (v8 <= 0)
	{
		if (*(float*)(qword_140C65898 + 29760) != 0.0 || (float)0.0 != *(float*)(qword_140C65898 + 29764))
		{
			v9 = dword_140C636A8;
			*(_QWORD*)(qword_140C65898 + 29760) = 0i64;
			*(_DWORD*)(v7 + 29752) = 0;
			*(_DWORD*)(v7 + 29744) = v9;
		}
	}
	else
	{
		sub_1400C3230(qword_140C65898 + 29736, 1.0, 0.0, 1000.0 / (float)v8);
	}
	*(_DWORD*)(v7 + 29768) = 1;
	*(_QWORD*)(v7 + 29772) = 1065353216i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

