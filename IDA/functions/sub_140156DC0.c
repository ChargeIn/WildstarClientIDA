#include "../winhttp.h"

//----- (0000000140156DC0) ----------------------------------------------------
__int64 __fastcall sub_140156DC0(__int64 a1, _QWORD* a2)
{
	int v4; // ebp
	__int64 v5; // rbx
	__int64 v6; // rax
	_QWORD* v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rdx
	__int64 v10; // rax
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	__int64 v13; // rdx
	__int64 v14; // rax

	v4 = 1;
	if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
		sub_14005E2C0((__int64)a2);
	v5 = a2[2];
	v6 = sub_14005C1B0((__int64)a2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	a2[2] += 16i64;
	v7 = *(_QWORD**)(a1 + 56);
	v8 = (_QWORD*)*v7;
	if ((_QWORD*)*v7 != v7)
	{
		do
		{
			v9 = v8[2];
			if ((*(_BYTE*)(v9 + 28) & 1) != 0)
			{
				v10 = a2[2];
				*(_DWORD*)(v10 + 8) = 3;
				*(double*)v10 = (double)v4;
				a2[2] += 16i64;
				sub_1400D62A0(a2, v9);
				sub_14005EA50((__int64)a2, (__int64*)(a2[2] - 48i64), (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
				a2[2] -= 32i64;
				++v4;
			}
			v8 = (_QWORD*)*v8;
		} while (v8 != *(_QWORD**)(a1 + 56));
	}
	v11 = *(_QWORD**)(a1 + 88);
	v12 = (_QWORD*)*v11;
	if ((_QWORD*)*v11 != v11)
	{
		do
		{
			v13 = v12[2];
			if ((*(_BYTE*)(v13 + 28) & 1) != 0)
			{
				v14 = a2[2];
				*(_DWORD*)(v14 + 8) = 3;
				*(double*)v14 = (double)v4;
				a2[2] += 16i64;
				sub_1400D62A0(a2, v13);
				sub_14005EA50((__int64)a2, (__int64*)(a2[2] - 48i64), (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
				a2[2] -= 32i64;
				++v4;
			}
			v12 = (_QWORD*)*v12;
		} while (v12 != *(_QWORD**)(a1 + 88));
	}
	return 1i64;
}

