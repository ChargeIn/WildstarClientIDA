#include "../winhttp.h"

//----- (00000001400DDD20) ----------------------------------------------------
__int64 __fastcall sub_1400DDD20(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rbp
	__int64* v4; // rbx
	__int64* v5; // rcx
	int v6; // esi
	int v7; // eax
	int v8; // r14d
	int v9; // eax
	int v10; // esi
	int v11; // ebp
	__int64 v12; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rcx
	__int64* v17; // rax
	__int64 v18; // [rsp+20h] [rbp-28h] BYREF
	int v19; // [rsp+28h] [rbp-20h]
	__int64 v20; // [rsp+58h] [rbp+10h] BYREF

	result = sub_1400D66A0(a1, 1u);
	v3 = result;
	if (!result)
		return result;
	v4 = (__int64*)dword_140A12138;
	v5 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int64*)(a1[3] + 16i64);
	v6 = 0;
	v7 = *((_DWORD*)v5 + 2);
	if (v7 == 3)
		goto LABEL_8;
	if (v7 == 4 && sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v20))
	{
		v19 = 3;
		v5 = &v18;
		v18 = v20;
	LABEL_8:
		v8 = (int)*(double*)v5;
		goto LABEL_9;
	}
	v8 = 0;
LABEL_9:
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (__int64*)(a1[3] + 32i64);
	v9 = *((_DWORD*)v4 + 2);
	if (v9 == 3)
		goto LABEL_15;
	if (v9 == 4 && sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v20))
	{
		v19 = 3;
		v4 = &v18;
		v18 = v20;
	LABEL_15:
		v6 = (int)*(double*)v4;
	}
	v10 = *(_DWORD*)(v3 + 720) + v6;
	v11 = *(_DWORD*)(v3 + 716) + v8;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v12 = a1[2];
	v13 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"x", 1ui64);
	v14 = a1[2];
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = (double)v11;
	a1[2] += 16i64;
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"y", 1ui64);
	v16 = a1[2];
	*(_DWORD*)(v16 + 8) = 3;
	*(double*)v16 = (double)v10;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

