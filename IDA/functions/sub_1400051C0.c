#include "../winhttp.h"

//----- (00000001400051C0) ----------------------------------------------------
__int64 __fastcall sub_1400051C0(__int64 a1, __int64 a2)
{
	unsigned int i; // edi
	unsigned __int64 v5; // rdx
	_DWORD* v6; // r15
	unsigned __int64 v7; // rax
	_DWORD* v8; // rcx
	_DWORD* v9; // rcx
	unsigned __int64 v10; // r14
	__int64 v11; // rbp
	int* v12; // rax
	int* v13; // rdx
	int* v14; // rsi
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rax
	int v18; // r9d
	int v20; // [rsp+20h] [rbp-48h] BYREF
	__int64 v21; // [rsp+28h] [rbp-40h]
	void(__fastcall * v22)(__int64); // [rsp+30h] [rbp-38h]
	__int64 v23; // [rsp+38h] [rbp-30h]

	for (i = 0; i < *(_DWORD*)a2; ++i)
	{
		v5 = *(_QWORD*)(a1 + 144);
		v6 = (_DWORD*)(*(_QWORD*)(a2 + 8) + 8i64 * i);
		v7 = 0i64;
		if (!v5)
			goto LABEL_8;
		v8 = *(_DWORD**)(a1 + 136);
		while (*v8 != *v6)
		{
			++v7;
			v8 += 2;
			if (v7 >= v5)
				goto LABEL_8;
		}
		v9 = (_DWORD*)(*(_QWORD*)(a1 + 136) + 8 * v7);
		if (!v9)
		{
		LABEL_8:
			v10 = v5 + 1;
			v11 = *(_QWORD*)(a1 + 144);
			v12 = sub_14018DB00(*(_QWORD*)(a1 + 136), v5 + 1, 8i64);
			v13 = *(int**)(a1 + 136);
			v14 = v12;
			if (v13 != v12)
			{
				sub_1407DB590(v12, v13, 8i64 * *(_QWORD*)(a1 + 144));
				v15 = *(_QWORD*)(a1 + 136);
				if (v15)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
				*(_QWORD*)(a1 + 136) = v14;
			}
			v16 = *(_QWORD*)(a1 + 136);
			*(_QWORD*)(a1 + 144) = v10;
			v9 = (_DWORD*)(v16 + 8 * v11);
			*v9 = *v6;
		}
		v9[1] = dword_140C636A8 + 1000 * v6[1];
		if (qword_140C65898)
		{
			v17 = *(_QWORD*)(qword_140C65898 + 29504) + 5896i64;
			if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5976i64))
			{
				v18 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5952i64);
				v20 = 0;
				v21 = v17;
				v22 = sub_1400A8020;
				v23 = 0i64;
				sub_140195960(v17 + 64, 0, (__int64)&v20, v18);
			}
		}
	}
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

