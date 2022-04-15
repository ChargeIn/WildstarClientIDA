#include "../winhttp.h"

//----- (00000001404C78E0) ----------------------------------------------------
__int64 __fastcall sub_1404C78E0(__int64 a1, __int64 a2)
{
	int v5; // ecx
	int v6; // ecx
	__int64 v7; // rax
	int* v8; // rax
	__int64 v9; // r8
	unsigned int v10; // eax
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rcx
	_QWORD* v15; // rax
	unsigned __int64 v16; // rax
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rax
	unsigned int v20; // eax
	__int64 v21; // [rsp+38h] [rbp+10h] BYREF

	if (!a2)
		return 0i64;
	v5 = *(_DWORD*)(a1 + 40);
	if (!v5)
		goto LABEL_8;
	v6 = v5 - 1;
	if (!v6)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a2 + 24i64))(a2, 2i64, *(unsigned int*)(a1 + 20));
		goto LABEL_8;
	}
	if (v6 == 1)
		LABEL_8:
	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a2 + 24i64))(a2, 3i64, *(unsigned int*)(a1 + 20));
	if (((*(_DWORD*)(a2 + 128) - 5) & 0xFFFFFFFA) == 0)
	{
		v7 = sub_140203DA0(*(_DWORD*)(a2 + 96));
		if (v7)
		{
			if (*(_DWORD*)(v7 + 44))
			{
				v8 = sub_140032640(a1 + 200, (_DWORD*)(v7 + 44));
				--* v8;
			}
		}
	}
	v9 = *(_QWORD*)(a1 + 88);
	v10 = *(_DWORD*)(a2 + 496);
	v11 = *(_QWORD*)(v9 + 8);
	v12 = v9;
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < v10)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v12 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v12 == v9 || (v21 = v12, v10 < *(_DWORD*)(v12 + 32)))
		v21 = v9;
	if (v21 != v9)
		sub_1404CB6C0(a1 + 80, &v21);
	v13 = *(_QWORD*)(a1 + 56);
	v14 = v13;
	v15 = *(_QWORD**)(v13 + 8);
	while (v15)
	{
		if (v15[4] < *(_QWORD*)(a2 + 88))
		{
			v15 = (_QWORD*)v15[3];
		}
		else
		{
			v14 = (__int64)v15;
			v15 = (_QWORD*)v15[2];
		}
	}
	if (v14 == v13 || (v16 = *(_QWORD*)(v14 + 32), v21 = v14, *(_QWORD*)(a2 + 88) < v16))
		v21 = v13;
	if (v21 != v13)
		sub_1404CB5C0(a1 + 48, &v21);
	v17 = *(_QWORD*)(a1 + 120);
	v18 = v17;
	v19 = *(_QWORD*)(v17 + 8);
	while (v19)
	{
		if (*(_DWORD*)(v19 + 32) < *(_DWORD*)(a2 + 104))
		{
			v19 = *(_QWORD*)(v19 + 24);
		}
		else
		{
			v18 = v19;
			v19 = *(_QWORD*)(v19 + 16);
		}
	}
	if (v18 == v17 || (v20 = *(_DWORD*)(v18 + 32), v21 = v18, *(_DWORD*)(a2 + 104) < v20))
		v21 = v17;
	if (v21 != v17)
		sub_1404CB8B0(a1 + 112, &v21);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, 1i64);
	return 1i64;
}

