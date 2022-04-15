#include "../winhttp.h"

//----- (00000001402F9480) ----------------------------------------------------
__int64 __fastcall sub_1402F9480(__int64 a1, unsigned int* a2)
{
	int v3; // r15d
	int v5; // edi
	__int64 result; // rax
	__int64 v7; // rbp
	int* v8; // rax
	int* v9; // rbx
	__int64* v10; // rdi
	__int64 v11; // rcx
	int v12; // r10d
	unsigned int v13; // r9d
	int v14; // edx
	int v15; // eax
	__int64 v16; // rcx

	v3 = dword_140B63958[*a2];
	if ((*(_BYTE*)(a1 + 40) & 0x10) != 0)
		v5 = 0;
	else
		v5 = (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * 65536.0);
	result = sub_1402F6C40((__int64*)a1, v3, v5);
	v7 = (unsigned int)result;
	if ((unsigned int)result < *(_DWORD*)(*(_QWORD*)(a1 + 64) + 16i64))
	{
		v8 = sub_14018B280(104i64, 0);
		v9 = v8;
		if (v8)
		{
			v8[7] = 0;
			*((_QWORD*)v8 + 11) = 0i64;
			*((_QWORD*)v8 + 12) = 0i64;
		}
		else
		{
			v9 = 0i64;
		}
		v9[10] = v7;
		*v9 = v3;
		v9[1] = v5;
		v10 = (__int64*)(a2 + 2);
		v9[2] = 1065353216;
		v9[3] = 0;
		v9[4] = 0;
		v9[5] = 4;
		v9[6] = 0;
		v9[7] = 0;
		v11 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64) + 112 * v7;
		v9[11] = 0;
		*((_QWORD*)v9 + 4) = v11;
		if (*((_QWORD*)a2 + 1))
			v12 = *(unsigned __int16*)(v11 + 10);
		else
			v12 = 0;
		v13 = *(_DWORD*)(v11 + 16) - *(_DWORD*)(v11 + 12);
		if (!v13 || *(float*)(v11 + 20) == 0.0)
			v9[5] &= ~4u;
		if (v13 && !*v10)
			v9[3] = v9[1] % v13;
		v14 = v9[3];
		v9[12] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
		v9[13] = v13 + *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64) - v14;
		v9[14] = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
		v15 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 208i64);
		v9[16] = v14;
		v9[15] = v12 + v15;
		if (v11)
			v9[16] = v14 + *(_DWORD*)(v11 + 12);
		v9[17] = 0;
		result = *v10;
		if (*v10)
		{
			v16 = *(_QWORD*)(result + 96);
			if (v16)
				result = sub_1402F1720(v16);
		}
		if (!*((_QWORD*)v9 + 11))
		{
			*((_QWORD*)v9 + 11) = v10;
			*((_QWORD*)v9 + 12) = *v10;
			*v10 = (__int64)v9;
			result = *((_QWORD*)v9 + 12);
			if (result)
				*(_QWORD*)(result + 88) = v9 + 24;
		}
	}
	return result;
}
// 140B63958: using guessed type _DWORD dword_140B63958[6];
// 140C77890: using guessed type __int64 qword_140C77890;

