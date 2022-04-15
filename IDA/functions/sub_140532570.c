#include "../winhttp.h"

//----- (0000000140532570) ----------------------------------------------------
__int64 __fastcall sub_140532570(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	__int64* v4; // rcx
	__int64 v5; // rdi
	int v6; // eax
	int v7; // ebx
	_QWORD* v8; // r10
	_QWORD* v9; // rax
	unsigned __int64 v10; // r9
	unsigned __int64 v11; // rdx
	__int64 v12; // r8
	float v13; // xmm0_4
	__int64 v14; // rax
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]
	__int64 v17; // [rsp+48h] [rbp+10h] BYREF

	result = sub_14052E9B0(a1);
	v3 = result;
	if (!result)
		return result;
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (__int64*)(a1[3] + 16i64);
	v5 = 0i64;
	v6 = *((_DWORD*)v4 + 2);
	if (v6 != 3)
	{
		if (v6 != 4 || !sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v17))
		{
			v7 = 0;
			goto LABEL_9;
		}
		v16 = 3;
		v4 = &v15;
		v15 = v17;
	}
	v7 = (int)*(double*)v4;
LABEL_9:
	LODWORD(v17) = (***(__int64(__fastcall****)(_QWORD))(v3 + 1152))(*(_QWORD*)(v3 + 1152));
	v8 = (_QWORD*)*((_QWORD*)sub_140538120(v3 + 1376, (int*)&v17) + 7);
	v9 = (_QWORD*)*v8;
	if ((_QWORD*)*v8 != v8)
	{
		while (1)
		{
			v10 = v9[4];
			v11 = 0i64;
			if (v10)
				break;
		LABEL_14:
			v9 = (_QWORD*)*v9;
			if (v9 == v8)
				goto LABEL_18;
		}
		v12 = v9[3];
		while (*(_DWORD*)(*(_QWORD*)v12 + 8i64) != v7)
		{
			++v11;
			v12 += 8i64;
			if (v11 >= v10)
				goto LABEL_14;
		}
		v5 = *(_QWORD*)(v9[3] + 8 * v11);
	}
LABEL_18:
	v13 = 0.0;
	if (v5)
		v13 = *(float*)(v5 + 176);
	v14 = a1[2];
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = v13;
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

