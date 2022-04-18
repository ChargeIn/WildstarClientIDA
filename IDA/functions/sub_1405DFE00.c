#include "../winhttp.h"

//----- (00000001405DFE00) ----------------------------------------------------
__int64 __fastcall sub_1405DFE00(__int64 a1, __int64* a2)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	int* v6; // rax
	int v7; // esi
	__int64 v8; // rbx
	unsigned __int64 v9; // rbp
	int** v10; // r15
	int* v11; // rax
	int* v12; // rcx
	__int64 v13; // rcx
	unsigned __int64 v14; // r12
	int** v15; // rbp
	int* v16; // rax
	int* v17; // rcx
	unsigned int* v18; // rdi
	__int64 v19; // rcx
	int v20; // edx
	__int64 v21; // r9
	__int64 v22; // rdx
	__int64 v23; // rcx
	__int64 v25; // [rsp+30h] [rbp-38h] BYREF
	void* v26; // [rsp+38h] [rbp-30h]
	__int64 v27; // [rsp+70h] [rbp+8h] BYREF

	v4 = (*(__int64(__fastcall**)(__int64*))(a1 + 144))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 136) + 8 * (v4 % *(_QWORD*)(a1 + 128)));
	if (!v5)
		goto LABEL_7;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(a1 + 152))(a2, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			goto LABEL_7;
	}
	if (v5 == (_QWORD*)-24i64)
	{
	LABEL_7:
		v6 = sub_14018B280(280i64, 0);
		v7 = 0;
		if (v6)
		{
			v8 = sub_1405DA9F0((__int64)v6, a2, (_QWORD*)(a1 + 600), ++ * (_DWORD*)(a1 + 648));
			v27 = v8;
		}
		else
		{
			v8 = 0i64;
			v27 = 0i64;
		}
		if (*(_QWORD*)(a1 + 120) == *(_QWORD*)(a1 + 128))
			sub_1400290D0(a1 + 120);
		v9 = (*(__int64(__fastcall**)(__int64))(a1 + 144))(v8);
		v10 = (int**)(*(_QWORD*)(a1 + 136) + 8 * (v9 % *(_QWORD*)(a1 + 128)));
		v11 = sub_14018B280(32i64, 0);
		if (v11)
		{
			v12 = *v10;
			*(_QWORD*)v11 = v9;
			*((_QWORD*)v11 + 1) = v12;
			v13 = *(_QWORD*)v8;
			*((_QWORD*)v11 + 3) = v8;
			*((_QWORD*)v11 + 2) = v13;
		}
		else
		{
			v11 = 0i64;
		}
		*v10 = v11;
		++* (_QWORD*)(a1 + 120);
		if (*(_QWORD*)(a1 + 80) == *(_QWORD*)(a1 + 88))
			sub_1400290D0(a1 + 80);
		v14 = (*(__int64(__fastcall**)(__int64))(a1 + 104))(v8 + 8);
		v15 = (int**)(*(_QWORD*)(a1 + 96) + 8 * (v14 % *(_QWORD*)(a1 + 88)));
		v16 = sub_14018B280(32i64, 0);
		if (v16)
		{
			v17 = *v15;
			*(_QWORD*)v16 = v14;
			*((_QWORD*)v16 + 1) = v17;
			LODWORD(v17) = *(_DWORD*)(v8 + 8);
			*((_QWORD*)v16 + 3) = v8;
			v16[4] = (int)v17;
		}
		else
		{
			v16 = 0i64;
		}
		*v15 = v16;
		++* (_QWORD*)(a1 + 80);
		sub_1404BC4D0(a1 + 160, (_QWORD*)(v8 + 184), &v27);
		v18 = (unsigned int*)v27;
		v19 = *(unsigned int*)(v27 + 208);
		v20 = 1;
		if (!(_DWORD)v19 || (_DWORD)v19 == 4)
		{
			v20 = 2;
		}
		else if ((_DWORD)v19 == 3 || (LOBYTE(v7) = (_DWORD)v19 == 4, v7))
		{
			v20 = 3;
		}
		v26 = sub_1405E2A30;
		v25 = a1;
		sub_1403F8660(v19, v20, (__int64*)(v27 + 184), &v25);
		v21 = v18[2];
		v22 = v18[46];
		v25 = a1;
		v26 = sub_1405E2C10;
		sub_1403F87B0(qword_140C65898, v22, &v25, v21);
		v23 = qword_140C65898;
		v18[64] = 1;
		Apollo_LUAEvent(*(_QWORD*)(v23 + 29504), "FriendshipAdd", byte_1409EA97C, v18[2]);
		sub_1405E28C0(a1, (__int64)(v18 + 46));
	}
	return 0i64;
}
// 1409EA97C: using guessed type _BYTE byte_1409EA97C[16];
// 140C65898: using guessed type __int64 qword_140C65898;

