#include "../winhttp.h"

//----- (00000001408CC280) ----------------------------------------------------
int* __fastcall sub_1408CC280(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	float v5; // xmm1_4
	_BYTE* v6; // rcx
	char v7; // al
	char v8; // al
	char v9; // cl
	int v10; // xmm1_4
	__int64 v11; // rdx
	int* result; // rax
	_BYTE* v13; // rcx
	char v14; // al
	int* v15; // rdi
	float v16; // [rsp+30h] [rbp+8h] BYREF
	int v17; // [rsp+34h] [rbp+Ch]

	v2 = a1 + 864;
	sub_1408CCE70(*(_DWORD**)(a1 + 8), (_DWORD*)(a1 + 864));
	if (*(_BYTE*)(a1 + 1013))
		*(_DWORD*)(v2 + 48) = 0;
	if (!*(_BYTE*)(v2 + 60))
	{
		*(_DWORD*)(v2 + 4) = 0;
		*(_DWORD*)(v2 + 16) = 0;
	}
	if (!*(_BYTE*)(v2 + 61))
	{
		*(_DWORD*)(v2 + 8) = 0;
		*(_DWORD*)(v2 + 20) = 0;
	}
	v5 = (float)*(int*)(a1 + 1008) / (float)*(int*)(a1 + 1004);
	if (v5 > *(float*)v2)
		*(float*)v2 = v5;
	if (v5 > *(float*)(v2 + 12))
		*(float*)(v2 + 12) = v5;
	v6 = *(_BYTE**)(a1 + 8);
	v7 = v6[8];
	if ((v7 & 1) != 0
		|| (v7 & 2) != 0
		|| (v8 = v6[9], (v8 & 4) != 0)
		|| (v8 & 8) != 0
		|| (v8 & 0x10) != 0
		|| (v8 & 0x40) != 0
		|| (v6[9] & 0x80) != 0
		|| (v6[10] & 1) != 0)
	{
		sub_1408CC470(a1);
	}
	v9 = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 9i64);
	if ((v9 & 0x40) != 0 || (v9 & 4) != 0)
	{
		v10 = *(_DWORD*)(a1 + 876);
		v11 = *(_QWORD*)(a1 + 16);
		v16 = *(float*)v2;
		v17 = v10;
		sub_1408CD0D0(a1 + 32, v11);
		result = (int*)sub_1408CCF70((_DWORD*)(a1 + 32), *(_QWORD*)(a1 + 16), &v16, *(_DWORD*)(a1 + 1004));
		if ((_DWORD)result != 1)
			return result;
		sub_1408CD110(a1 + 32);
		sub_1408CD0D0(a1 + 448, *(_QWORD*)(a1 + 16));
		result = (int*)sub_1408CCF70((_DWORD*)(a1 + 448), *(_QWORD*)(a1 + 16), &v16, *(_DWORD*)(a1 + 1004));
		if ((_DWORD)result != 1)
			return result;
		sub_1408CD110(a1 + 448);
	}
	v13 = *(_BYTE**)(a1 + 8);
	v14 = v13[8];
	*(_BYTE*)(a1 + 1012) = (v14 & 0x20) != 0 || (v14 & 0x40) != 0 || (v13[8] & 0x80) != 0 || (v13[9] & 1) != 0;
	*((_WORD*)v13 + 4) = 0;
	v13[10] = 0;
	result = (int*)(*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 8i64))(
		*(_QWORD*)(a1 + 16),
		16i64 * *(unsigned __int16*)(a2 + 16));
	v15 = result;
	if (result)
	{
		sub_1408CD650(a2, a1 + 32, result);
		return (int*)(*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16), v15);
	}
	return result;
}

