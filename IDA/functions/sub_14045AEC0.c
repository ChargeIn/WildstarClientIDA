#include "../winhttp.h"

//----- (000000014045AEC0) ----------------------------------------------------
__int64 __fastcall sub_14045AEC0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // r14
	unsigned int* v4; // rsi
	int v5; // eax
	unsigned int v6; // eax
	int v7; // edx
	unsigned int v8; // ebx
	unsigned int v9; // eax
	__int64 v10; // rax
	__int64 result; // rax

	v2 = sub_14022D500(*(_DWORD*)(a1 + 216));
	v3 = *(_QWORD*)(a1 + 5512);
	v4 = (unsigned int*)v2;
	if (!v3)
		goto LABEL_10;
	v5 = *(_DWORD*)(a1 + 52);
	if (!v5)
	{
		v6 = sub_1400518A0(qword_140C63628, 61, 4, 1);
		v7 = 61;
	LABEL_6:
		v8 = v6;
		v9 = sub_1400518A0(qword_140C63628, v7, 4, 0);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v3 + 72i64))(v3, v9, v8);
		goto LABEL_7;
	}
	if (v5 == 1)
	{
		v6 = sub_1400518A0(qword_140C63628, 60, 4, 1);
		v7 = 60;
		goto LABEL_6;
	}
LABEL_7:
	if (!v4)
		goto LABEL_15;
	v10 = sub_1402358C0(v4[30]);
	if (v10)
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 5512) + 72i64))(
			*(_QWORD*)(a1 + 5512),
			*(unsigned int*)(v10 + 8),
			*(unsigned int*)(v10 + 4));
LABEL_10:
	if (v4)
	{
		if (*(_DWORD*)(a1 + 52))
			result = v4[18];
		else
			result = v4[17];
		*(_DWORD*)(a1 + 308) = result;
		return result;
	}
LABEL_15:
	result = *(_QWORD*)(a1 + 24);
	if (result)
	{
		result = *(unsigned int*)(result + 292);
		*(_DWORD*)(a1 + 308) = result;
		if (!(_DWORD)result)
		{
			result = *(_QWORD*)(a1 + 208);
			if (result)
			{
				result = *(unsigned int*)(result + 12);
				*(_DWORD*)(a1 + 308) = result;
			}
		}
	}
	else
	{
		*(_DWORD*)(a1 + 308) = 0;
	}
	return result;
}
// 140C63628: using guessed type __int64 qword_140C63628;

