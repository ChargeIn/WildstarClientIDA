#include "../winhttp.h"

//----- (0000000140884B70) ----------------------------------------------------
__int64 __fastcall sub_140884B70(
	__int64 a1,
	__int64 a2,
	_DWORD* a3,
	int a4,
	__int64 a5,
	unsigned int* a6,
	unsigned int a7)
{
	__int64 result; // rax
	unsigned int v10; // eax
	int v11; // xmm0_4
	__int64 v12; // rax
	char v13; // cl
	char v14; // al

	*(_QWORD*)(a1 + 96) = a2;
	if (*(__int64*)a3 >= 0)
	{
		*(_DWORD*)(a1 + 136) = a4;
		v10 = (*(__int64(__fastcall**)(_QWORD, _DWORD*))(**(_QWORD**)(a2 + 256) + 16i64))(*(_QWORD*)(a2 + 256), a3);
		if (!v10 || v10 > a7 || a7 % v10)
		{
			*(_BYTE*)(a1 + 117) = *(_BYTE*)(a1 + 117) & 0xB7 | 8;
			return 2i64;
		}
		else
		{
			*(_DWORD*)(a1 + 112) = v10;
			*(_DWORD*)(a1 + 164) = v10;
			v11 = *(_DWORD*)a5;
			if (*(float*)a5 <= 1.0)
				v11 = 1065353216;
			*(_DWORD*)(a1 + 140) = v11;
			*(_DWORD*)(a1 + 144) = *(_DWORD*)(a5 + 4) - *(_DWORD*)(a5 + 4) % v10;
			v12 = *(unsigned int*)(a5 + 8);
			if (v12 > *(_QWORD*)a3)
				LODWORD(v12) = *a3;
			*(_DWORD*)(a1 + 148) = v12;
			v13 = *(_BYTE*)(a5 + 12);
			if (!v13)
				v13 = 1;
			*(_BYTE*)(a1 + 193) = v13;
			v14 = *(_BYTE*)(a5 + 13);
			*(_QWORD*)(a1 + 128) = 0i64;
			*(_BYTE*)(a1 + 116) = v14;
			if (!*(_QWORD*)a3)
				*(_BYTE*)(a1 + 117) = *(_BYTE*)(a1 + 117) & 0xBB | 4;
			result = sub_140885660((_DWORD*)a1, a6, a7);
			if ((_DWORD)result != 1)
				*(_BYTE*)(a1 + 117) = *(_BYTE*)(a1 + 117) & 0xB7 | 8;
		}
	}
	else
	{
		*(_BYTE*)(a1 + 117) = *(_BYTE*)(a1 + 117) & 0xB7 | 8;
		return 31i64;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

