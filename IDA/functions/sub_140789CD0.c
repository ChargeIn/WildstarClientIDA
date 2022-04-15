#include "../winhttp.h"

//----- (0000000140789CD0) ----------------------------------------------------
__int64 __fastcall sub_140789CD0(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // eax
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // eax
	unsigned int v10; // eax
	__int64 v11; // rcx
	void(__fastcall * v12)(__int64, _QWORD); // rax
	unsigned int v13; // eax
	__int64 v14; // r9
	__int64 v16; // rcx
	__int64 v17; // [rsp+30h] [rbp-20h] BYREF
	__int64 v18; // [rsp+38h] [rbp-18h]
	__int64 v19; // [rsp+40h] [rbp-10h]
	__int64 v20; // [rsp+48h] [rbp-8h]

	v2 = *(_QWORD*)(a1 + 128);
	if (!v2)
		goto LABEL_15;
	LODWORD(v17) = -1;
	v3 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v2 + 256i64))(v2, &v17);
	if (v3 == 537526274)
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD, _DWORD))(**(_QWORD**)(a1 + 128) + 48i64))(
			*(_QWORD*)(a1 + 128),
			*(_QWORD*)(a1 + 24) + 992i64,
			*(_QWORD*)(a1 + 24) + 1008i64,
			*(unsigned int*)(v4 + 12),
			0);
		goto LABEL_15;
	}
	if (v3 != 537526276)
	{
		if (*(_DWORD*)(a1 + 92) != 1 || *(_QWORD*)(a1 + 136))
		{
			if (!v3)
				goto LABEL_15;
		}
		else if (!v3)
		{
			v5 = *(_QWORD*)(a1 + 128);
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 280i64))(v5, 0i64);
			if ((*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 264i64))(v5, 0i64) != v6)
				goto LABEL_15;
			goto LABEL_9;
		}
		v16 = *(_QWORD*)(a1 + 128);
		LODWORD(v17) = 0;
		(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v16 + 248i64))(v16, &v17);
		goto LABEL_15;
	}
LABEL_9:
	v7 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 280i64))(*(_QWORD*)(a1 + 128), 0i64);
	*(_QWORD*)(a1 + 136) = v7;
	(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64*, __int64, __int64, int, int, __int64), __int64))(*(_QWORD*)v7 + 648i64))(
		v7,
		sub_140789F10,
		a1);
	v8 = *(_QWORD*)(a1 + 136);
	v17 = 150i64;
	v18 = 1065353216i64;
	v19 = 0i64;
	v20 = 0i64;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v8 + 584i64))(v8, 0i64, &v17);
	v9 = *(_DWORD*)(a1 + 96);
	*(_DWORD*)(a1 + 92) = v9;
	if (((v9 - 3) & 0xFFFFFFFD) == 0)
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 112) + 896i64))(
			*(_QWORD*)(a1 + 112),
			*(unsigned int*)(a1 + 120),
			*(_QWORD*)(a1 + 136));
	v10 = sub_14078A460(a1);
	if (v10)
	{
		v11 = *(_QWORD*)(a1 + 136);
		v17 = v10;
		v18 = 1065353216i64;
		v19 = 0i64;
		v20 = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v11 + 584i64))(v11, 0i64, &v17);
	}
	v12 = *(void(__fastcall**)(__int64, _QWORD))(a1 + 64);
	if (v12)
		v12(a1, *(_QWORD*)(a1 + 72));
LABEL_15:
	if (*(_QWORD*)(a1 + 136))
	{
		if (((*(_DWORD*)(a1 + 92) - 3) & 0xFFFFFFFD) == 0)
		{
			v13 = sub_14078A460(a1);
			if (v13)
			{
				v17 = v13;
				v18 = 1065353216i64;
				v19 = 0i64;
				v20 = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v14 + 584i64))(v14, 0i64, &v17);
			}
		}
	}
	return 0i64;
}
// 140789ECE: variable 'v14' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;

