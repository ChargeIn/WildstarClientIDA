#include "../winhttp.h"

//----- (000000014043BBC0) ----------------------------------------------------
void __fastcall sub_14043BBC0(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5, int a6)
{
	int* v8; // rax
	int* v9; // rbp
	int* v10; // rbx
	int* v11; // rax
	__int64 v12; // r8
	int* v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rdx
	int v19; // eax
	int v20; // [rsp+30h] [rbp-88h] BYREF
	__int64 v21; // [rsp+38h] [rbp-80h]
	__int64 v22; // [rsp+50h] [rbp-68h] BYREF
	int v23; // [rsp+58h] [rbp-60h]
	__int64 v24; // [rsp+68h] [rbp-50h]
	__int64 v25; // [rsp+70h] [rbp-48h]
	__int64 v26; // [rsp+78h] [rbp-40h]
	int v27; // [rsp+80h] [rbp-38h]
	int v28; // [rsp+84h] [rbp-34h]
	int v29; // [rsp+88h] [rbp-30h]
	__int64 v30; // [rsp+8Ch] [rbp-2Ch]
	__int64 v31; // [rsp+94h] [rbp-24h]
	__int64 v32; // [rsp+9Ch] [rbp-1Ch]

	v8 = sub_14018B280(16i64, 0);
	v9 = v8 + 4;
	v10 = v8;
	if (v8)
		*(_WORD*)v8 = 0;
	v22 = 0i64;
	v23 = a2;
	v27 = 0;
	v28 = a6;
	v11 = (int*)sub_1404835C0(qword_140C65918, a2);
	v13 = sub_14054F9E0(&v20, a3, v12, 0i64, v11, 0i64);
	v14 = *((_QWORD*)v13 + 1);
	*((_QWORD*)v13 + 1) = v10;
	v24 = v14;
	v15 = *((_QWORD*)v13 + 2);
	*((_QWORD*)v13 + 2) = v10;
	v25 = v15;
	v16 = *((_QWORD*)v13 + 3);
	*((_QWORD*)v13 + 3) = v9;
	v26 = v16;
	if (v21)
		sub_14018B900(v21, 0);
	v17 = sub_140211280(a3);
	v18 = v17;
	if (v17)
	{
		if ((*(_DWORD*)(v17 + 24) & *(_DWORD*)(qword_140C63628 + 1524)) == 0
			|| *(_DWORD*)(qword_140C635F0 + 5784) != 1
			|| (v19 = *(_DWORD*)(v17 + 8)) == 0)
		{
			v19 = *(_DWORD*)(v18 + 4);
		}
	}
	else
	{
		v19 = 0;
	}
	v29 = v19;
	v30 = 0i64;
	v31 = 0i64;
	v32 = 0i64;
	sub_14043BF30(dword_140C7CC70, (__int64)&v22);
	if (v24)
		sub_14018B900(v24, 0);
}
// 14043BC40: variable 'v12' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];

