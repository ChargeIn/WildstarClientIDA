#include "../winhttp.h"

//----- (00000001405342C0) ----------------------------------------------------
__int64 __fastcall sub_1405342C0(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // r15
	_DWORD* v4; // rdi
	__int64* v5; // rcx
	int v6; // eax
	int v7; // ebp
	__int64 v8; // rdx
	unsigned __int64 v9; // rcx
	__int64 v10; // rdx
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	unsigned __int64 v13; // rdi
	__int64 v14; // rsi
	__int64 v15; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v19; // [rsp+20h] [rbp-58h] BYREF
	int v20; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v21)(); // [rsp+30h] [rbp-48h] BYREF
	int v22; // [rsp+38h] [rbp-40h]
	_QWORD* v23; // [rsp+40h] [rbp-38h]
	__int64 v24; // [rsp+88h] [rbp+10h] BYREF

	v3 = sub_14052E9B0(a1);
	if (!v3)
		return 0i64;
	v4 = dword_140A12138;
	v5 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int64*)(a1[3] + 16i64);
	v6 = *((_DWORD*)v5 + 2);
	if (v6 != 3)
	{
		if (v6 != 4 || !sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v24))
		{
			v7 = 0;
			goto LABEL_9;
		}
		v20 = 3;
		v5 = &v19;
		v19 = v24;
	}
	v7 = (int)*(double*)v5;
LABEL_9:
	v23 = a1;
	v22 = -2;
	v21 = off_140B56A08;
	sub_1400579E0((__int64)a1, v2, -2);
	v8 = (__int64)v23;
	v9 = v23[2];
	if (v23[3] + 32i64 < v9)
		v4 = (_DWORD*)(v23[3] + 32i64);
	*(_QWORD*)v9 = *(_QWORD*)v4;
	*(_DWORD*)(v9 + 8) = v4[2];
	*(_QWORD*)(v8 + 16) += 16i64;
	v22 = sub_1400578C0((__int64)v23);
	v11 = *(_QWORD**)(v3 + 1384);
	v12 = (_QWORD*)v11[2];
	if (v12 != v11)
	{
		do
		{
			v13 = 0i64;
			while (v13 < v12[107])
			{
				v14 = *(_QWORD*)(v12[106] + 8 * v13);
				if (*(_DWORD*)(v14 + 4) == v7 && sub_1400F9CB0(v14 + 8, (__int64)&v21))
				{
					sub_14076F7C0(v14, v10);
					sub_14018B900(v14, 0);
					sub_140007270((__int64)(v12 + 106), v13);
				}
				else
				{
					++v13;
				}
			}
			v15 = v12[3];
			if (v15)
			{
				v12 = (_QWORD*)v12[3];
				for (i = *(_QWORD**)(v15 + 16); i; i = (_QWORD*)i[2])
					v12 = i;
			}
			else
			{
				for (j = v12[1]; v12 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v12 = (_QWORD*)j;
				if (v12[3] != j)
					v12 = (_QWORD*)j;
			}
		} while (v12 != *(_QWORD**)(v3 + 1384));
	}
	*(_DWORD*)(v3 + 1568) = 1;
	v21 = off_140B56A08;
	if (v23)
		sub_1400579E0((__int64)v23, v10, v22);
	return 0i64;
}
// 140534377: variable 'v2' is possibly undefined
// 140534405: variable 'v10' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

