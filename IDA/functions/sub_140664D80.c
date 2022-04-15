#include "../winhttp.h"

//----- (0000000140664D80) ----------------------------------------------------
__int64 __fastcall sub_140664D80(_QWORD* a1)
{
	__int64* v1; // rax
	__int64* v2; // rbx
	int v3; // eax
	__int64 v4; // r10
	__int64 v5; // r9
	__int64 v6; // rax
	unsigned int v7; // r8d
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rdi
	__int64 v12; // [rsp+38h] [rbp+10h]

	v1 = (__int64*)sub_140056AB0(a1, 1u);
	v2 = v1;
	if (v1)
	{
		v3 = sub_14054F480(*v1);
		sub_1405FCB80(*(_QWORD*)qword_140C65B80, **(_DWORD**)(v4 + 8), v3 == 0);
		v5 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
		v6 = *(_QWORD*)(v5 + 8);
		v7 = **(_DWORD**)(*v2 + 8);
		v8 = v5;
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < v7)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v8 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v8 == v5 || (v12 = v8, v7 < *(_DWORD*)(v8 + 32)))
			v12 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
		if (v12 == v5 || v12 == -40 || (*(_DWORD*)(v12 + 108) & 2) == 0)
		{
			v9 = qword_140C7E830;
			v10 = qword_140C7E828;
			dword_140C65C38 = 0;
			if (qword_140C7E828 != qword_140C7E830)
			{
				sub_1407DB590((int*)qword_140C7E828, (int*)qword_140C7E830, 2ui64);
				qword_140C7E830 -= 2 * ((v9 - v10) >> 1);
			}
		}
	}
	return 0i64;
}
// 140664DBD: variable 'v4' is possibly undefined
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65C38: using guessed type int dword_140C65C38;
// 140C7E828: using guessed type __int64 qword_140C7E828;
// 140C7E830: using guessed type __int64 qword_140C7E830;

