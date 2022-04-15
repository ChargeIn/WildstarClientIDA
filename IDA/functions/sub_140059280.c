#include "../winhttp.h"

//----- (0000000140059280) ----------------------------------------------------
void* __fastcall sub_140059280(__int64 a1)
{
	_DWORD* v1; // rax
	__int64 v2; // r10
	__int64 v3; // r11
	__int64 v4; // rdx
	void* v5; // r8
	__int64 v6; // r10
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // r9
	__int64 v13; // rax
	__int64 v14; // r8
	void* result; // rax
	char v16; // cl

	v1 = sub_1400580E0(a1, 1);
	if (v1[2] != 6)
		return 0i64;
	v4 = *(_QWORD*)v1;
	if (!*(_BYTE*)(*(_QWORD*)v1 + 10i64))
	{
		v7 = *(_QWORD*)(v4 + 32);
		if ((int)v2 >= 1 && (int)v2 <= *(_DWORD*)(v7 + 72))
		{
			v8 = v2;
			v6 = *(_QWORD*)(*(_QWORD*)(v4 + 8 * v2 + 32) + 16i64);
			v5 = (void*)(*(_QWORD*)(*(_QWORD*)(v7 + 56) + 8 * v8 - 8) + 32i64);
			if (v5)
				goto LABEL_9;
			return v5;
		}
		return 0i64;
	}
	if ((int)v2 < 1 || (int)v2 > *(unsigned __int8*)(v4 + 11))
		return 0i64;
	v5 = &unk_140C635FD;
	v6 = v4 + 16i64 * ((int)v2 - 1) + 40;
LABEL_9:
	*(_QWORD*)(v3 + 16) -= 16i64;
	v9 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v6 = *(_QWORD*)v9;
	*(_DWORD*)(v6 + 8) = *(_DWORD*)(v9 + 8);
	v10 = *(_QWORD*)(v3 + 16);
	if (*(int*)(v10 + 8) < 4)
		return v5;
	v11 = *(_QWORD*)v10;
	if ((*(_BYTE*)(v11 + 9) & 3) == 0)
		return v5;
	v12 = *(_QWORD*)v1;
	if ((*(_BYTE*)(*(_QWORD*)v1 + 9i64) & 4) == 0)
		return v5;
	v13 = *(_QWORD*)(v3 + 32);
	if (*(_BYTE*)(v13 + 33) == 1)
	{
		sub_14005C960(*(_QWORD*)(v3 + 32), v11);
		return (void*)v14;
	}
	else
	{
		v16 = *(_BYTE*)(v12 + 9) & 0xF8 | *(_BYTE*)(v13 + 32) & 3;
		result = v5;
		*(_BYTE*)(v12 + 9) = v16;
	}
	return result;
}
// 1400592AE: variable 'v2' is possibly undefined
// 14005930F: variable 'v3' is possibly undefined
// 140059354: variable 'v14' is possibly undefined

