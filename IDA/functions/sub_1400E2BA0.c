#include "../winhttp.h"

//----- (00000001400E2BA0) ----------------------------------------------------
__int64 __fastcall sub_1400E2BA0(__int64 a1, __int64 a2, int* a3, int a4, char a5)
{
	int* v9; // rax
	int* v10; // rax
	__int64 v11; // r8
	_QWORD* v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rdx
	__int64 v15; // rdx
	int v16; // edx
	__int64 v18; // [rsp+20h] [rbp-38h] BYREF
	__int64 v19; // [rsp+28h] [rbp-30h]
	void(__fastcall * v20)(__int64); // [rsp+30h] [rbp-28h]
	__int64 v21; // [rsp+38h] [rbp-20h]

	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v9 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 16) = v9;
	*(_QWORD*)(a1 + 24) = v9;
	*(_QWORD*)(a1 + 32) = v9 + 2;
	if (v9)
		*(_BYTE*)v9 = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	v10 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 48) = v10;
	*(_QWORD*)(a1 + 56) = v10;
	*(_QWORD*)(a1 + 64) = v10 + 2;
	if (v10)
		*(_BYTE*)v10 = 0;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_DWORD*)(a1 + 80) = 1414420037;
	*(_DWORD*)(a1 + 148) = 0;
	*(_QWORD*)a1 = a2;
	v11 = -1i64;
	do
		++v11;
	while (*((_BYTE*)a3 + v11));
	sub_14001B1A0(a1 + 8, a3, (int*)((char*)a3 + v11));
	*(_BYTE*)(a1 + 76) = a5;
	*(_DWORD*)(a1 + 72) = a4;
	v12 = sub_1400E2DB0(&v18, a3);
	v13 = *(_QWORD*)(a1 + 48);
	*(_QWORD*)(a1 + 48) = v12[1];
	v12[1] = v13;
	v14 = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(a1 + 56) = v12[2];
	v12[2] = v14;
	v15 = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(a1 + 64) = v12[3];
	v12[3] = v15;
	if (v19)
		sub_14018B900(v19, 0);
	if (!*(_QWORD*)(a1 + 96))
	{
		v16 = *(_DWORD*)(a1 + 72);
		v20 = sub_1400E2D20;
		LODWORD(v18) = 0;
		v19 = a1;
		v21 = 0i64;
		sub_140195960(a1 + 80, v16, (__int64)&v18, 4);
	}
	return a1;
}

