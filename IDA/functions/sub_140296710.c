#include "../winhttp.h"

//----- (0000000140296710) ----------------------------------------------------
__int64 __fastcall sub_140296710(__int64 a1, int* a2)
{
	int* v3; // rax
	bool v4; // cc
	__int64 result; // rax
	__int64 v6; // rdi
	unsigned __int64 v7; // rbp
	int** v8; // r14
	int* v9; // rax
	int* v10; // rcx
	__int64 v11; // rcx
	__int64* v12; // rcx
	__int64 v13; // rax
	__int64 v14; // [rsp+20h] [rbp-48h] BYREF
	int v15; // [rsp+28h] [rbp-40h]
	__int64 v16; // [rsp+30h] [rbp-38h]
	int(__fastcall * v17)(__int64); // [rsp+38h] [rbp-30h]
	__int64 v18; // [rsp+40h] [rbp-28h]
	__int64 v19; // [rsp+48h] [rbp-20h]

	*(_QWORD*)(a1 + 24) = *(unsigned int*)(*(_QWORD*)(a1 + 16) + 180i64);
	v3 = sub_14018E9C0(a2);
	v4 = *(_DWORD*)(a1 + 40) < 1;
	*(_QWORD*)(a1 + 32) = v3;
	if (!v4 || (result = sub_140296860(a1), (int)result >= 0))
	{
		v6 = *(_QWORD*)(a1 + 16) + 7448i64;
		*(_DWORD*)(a1 + 40) = 2;
		if (*(_QWORD*)v6 == *(_QWORD*)(v6 + 8))
			sub_1400290D0(v6);
		v7 = (*(__int64(__fastcall**)(__int64))(v6 + 24))(a1 + 32);
		v8 = (int**)(*(_QWORD*)(v6 + 16) + 8 * (v7 % *(_QWORD*)(v6 + 8)));
		v9 = sub_14018B280(32i64, 0);
		if (v9)
		{
			v10 = *v8;
			*(_QWORD*)v9 = v7;
			*((_QWORD*)v9 + 1) = v10;
			v11 = *(_QWORD*)(a1 + 32);
			*((_QWORD*)v9 + 3) = a1;
			*((_QWORD*)v9 + 2) = v11;
		}
		else
		{
			v9 = 0i64;
		}
		*v8 = v9;
		++* (_QWORD*)v6;
		v12 = (__int64*)(*(_QWORD*)(a1 + 16) + 7248i64);
		if (!*(_QWORD*)(a1 + 144))
		{
			*(_QWORD*)(a1 + 144) = v12;
			*(_QWORD*)(a1 + 152) = *v12;
			*v12 = a1;
			v13 = *(_QWORD*)(a1 + 152);
			if (v13)
				*(_QWORD*)(v13 + 144) = a1 + 152;
		}
		v14 = *(_QWORD*)(a1 + 32);
		v15 = 0;
		v16 = a1;
		v18 = 0i64;
		v19 = 0i64;
		v17 = sub_140296D50;
		sub_1401B6BF0((__int64)v12, &v14, (int**)(a1 + 88));
		return 0i64;
	}
	return result;
}

