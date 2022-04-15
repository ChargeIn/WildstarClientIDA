#include "../winhttp.h"

//----- (000000014056DCE0) ----------------------------------------------------
int* __fastcall sub_14056DCE0(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	unsigned int v4; // edx
	__int64 v5; // rax
	__int64 v7; // r8
	__int64* v9; // rax
	__int64* v10; // rsi
	__int64 v11; // r8
	unsigned int* v12; // r9
	__int64 v13; // rax
	unsigned int v14; // edx
	__int64 v15; // rcx
	int v16; // ebx
	unsigned int v17; // eax
	__int64 v18; // r10
	__int64 v19; // rcx
	unsigned int v20; // r9d
	__int64 v21; // r8
	int v22; // edx
	bool v23; // al
	int v24; // eax
	bool v25; // al
	int* v26; // rbx
	__int64 v27; // [rsp+40h] [rbp+8h]
	__int64 v28; // [rsp+40h] [rbp+8h]
	__int64 v29; // [rsp+40h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 16);
	v4 = *(_DWORD*)a2;
	v5 = *(_QWORD*)(v2 + 8);
	v7 = v2;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v4)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v7 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v7 == v2 || (v27 = v7, v4 < *(_DWORD*)(v7 + 32)))
		v27 = *(_QWORD*)(a1 + 16);
	if (v27 != v2 && *(_QWORD*)(v27 + 40))
		return 0i64;
	v9 = (__int64*)sub_140491C60(qword_140C65968, v4);
	v10 = v9;
	if (!v9)
		return 0i64;
	v11 = *(_QWORD*)(a1 + 16);
	v12 = (unsigned int*)*v9;
	v13 = *(_QWORD*)(v11 + 8);
	v14 = *v12;
	v15 = v11;
	while (v13)
	{
		if (*(_DWORD*)(v13 + 32) < v14)
		{
			v13 = *(_QWORD*)(v13 + 24);
		}
		else
		{
			v15 = v13;
			v13 = *(_QWORD*)(v13 + 16);
		}
	}
	if (v15 == v11 || (v28 = v15, v14 < *(_DWORD*)(v15 + 32)))
		v28 = *(_QWORD*)(a1 + 16);
	if (v28 != v11)
		return 0i64;
	v16 = v12[3];
	v17 = sub_140496390(v10);
	v18 = *(_QWORD*)(a1 + 48);
	v19 = *(_QWORD*)(v18 + 8);
	v20 = v17;
	v21 = v18;
	while (v19)
	{
		v22 = *(_DWORD*)(v19 + 32);
		if (v22 == v16)
			v23 = *(_DWORD*)(v19 + 36) < v20;
		else
			v23 = v22 < v16;
		if (v23)
		{
			v19 = *(_QWORD*)(v19 + 24);
		}
		else
		{
			v21 = v19;
			v19 = *(_QWORD*)(v19 + 16);
		}
	}
	if (v21 == v18
		|| ((v24 = *(_DWORD*)(v21 + 32), v16 == v24) ? (v25 = v20 < *(_DWORD*)(v21 + 36)) : (v25 = v16 < v24),
			v29 = v21,
			v25))
	{
		v29 = *(_QWORD*)(a1 + 48);
	}
	if (v29 != v18)
		return 0i64;
	v26 = sub_14018B280(64i64, 0);
	if (v26)
	{
		sub_14056B0F0((__int64)v26, (int**)v10, *(_DWORD*)(a2 + 4), *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 12));
		v26[14] = 0;
		*(_QWORD*)v26 = off_140B6C950;
	}
	else
	{
		v26 = 0i64;
	}
	sub_140573060(a1, (_QWORD**)v26);
	if (*(_DWORD*)(a1 + 80))
		(*(void(__fastcall**)(int*))(*(_QWORD*)v26 + 24i64))(v26);
	return v26;
}
// 140B6C950: using guessed type __int64 (__fastcall *off_140B6C950[29])();
// 140C65968: using guessed type __int64 qword_140C65968;

