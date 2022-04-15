#include "../winhttp.h"

//----- (00000001405F8420) ----------------------------------------------------
__int64 __fastcall sub_1405F8420(_QWORD* a1, __int64 a2)
{
	int v4; // eax
	unsigned int v5; // ebp
	unsigned int v6; // eax
	__int64 v7; // r8
	__int64 v8; // rcx
	unsigned __int64 v9; // rbx
	int v10; // edx
	__int64 v11; // rdi
	int v12; // eax
	bool v13; // al
	int v14; // eax
	bool v15; // al
	int* v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	_QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
	char v21[40]; // [rsp+30h] [rbp-28h] BYREF

	v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 344i64))(a2);
	v20[1] = a2;
	LODWORD(v20[0]) = v4;
	sub_140055F80((__int64)(a1 + 11), (__int64)v21, v20);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 352i64))(a2);
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 336i64))(a2);
	v7 = a1[8];
	v8 = *(_QWORD*)(v7 + 8);
	v9 = __PAIR64__(v5, v6);
	v10 = v6;
	v11 = v7;
	while (v8)
	{
		v12 = *(_DWORD*)(v8 + 32);
		v11 = v8;
		if (v10 == v12)
			v13 = v5 < *(_DWORD*)(v8 + 36);
		else
			v13 = v10 < v12;
		if (v13)
			v8 = *(_QWORD*)(v8 + 16);
		else
			v8 = *(_QWORD*)(v8 + 24);
	}
	if (v11 == v7
		|| ((v14 = *(_DWORD*)(v11 + 32), v10 == v14) ? (v15 = v5 < *(_DWORD*)(v11 + 36)) : (v15 = v10 < v14), v15))
	{
		v16 = sub_14018B280(48i64, 0);
		if (v16 != (int*)-32i64)
		{
			*((_QWORD*)v16 + 4) = v9;
			*((_QWORD*)v16 + 5) = a2;
		}
		*(_QWORD*)(v11 + 16) = v16;
		v18 = a1[8];
		if (v11 == v18)
		{
			*(_QWORD*)(v18 + 8) = v16;
			*(_QWORD*)(a1[8] + 24i64) = v16;
		}
		else if (v11 == *(_QWORD*)(v18 + 16))
		{
			*(_QWORD*)(v18 + 16) = v16;
		}
	}
	else
	{
		v16 = sub_14018B280(48i64, 0);
		if (v16 != (int*)-32i64)
		{
			*((_QWORD*)v16 + 4) = v9;
			*((_QWORD*)v16 + 5) = a2;
		}
		*(_QWORD*)(v11 + 24) = v16;
		v17 = a1[8];
		if (v11 == *(_QWORD*)(v17 + 24))
			*(_QWORD*)(v17 + 24) = v16;
	}
	*((_QWORD*)v16 + 1) = v11;
	*((_QWORD*)v16 + 2) = 0i64;
	*((_QWORD*)v16 + 3) = 0i64;
	sub_1400081C0((__int64)v16, (_QWORD*)(a1[8] + 8i64));
	++a1[9];
	return (*(__int64(__fastcall**)(_QWORD*, __int64))(*a1 + 208i64))(a1, a2);
}
// 1405F84D0: conditional instruction was optimized away because rcx.8==0
// 1405F8420: using guessed type char var_28[40];

