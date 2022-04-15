#include "../winhttp.h"

//----- (00000001405BFE80) ----------------------------------------------------
__int64 __fastcall sub_1405BFE80(__int64 a1, int a2, unsigned int a3)
{
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // r8
	__int64 v11; // rdi
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // [rsp+20h] [rbp-38h] BYREF
	char v17; // [rsp+28h] [rbp-30h]
	int v18[3]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v19; // [rsp+3Ch] [rbp-1Ch]
	int v20; // [rsp+44h] [rbp-14h]
	__int64 v21; // [rsp+78h] [rbp+20h]
	__int64 v22; // [rsp+78h] [rbp+20h]

	if (a2 >= 5)
		return 0i64;
	if (a3 == -1)
		a3 = sub_1403E00E0(a2);
	v6 = *(_QWORD*)(a1 + 40);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a3)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v21 = v7, a3 < *(_DWORD*)(v7 + 32)))
		v21 = *(_QWORD*)(a1 + 40);
	v9 = v21;
	if (v21 == v6)
		return 0i64;
	v10 = *(_QWORD*)(v21 + 48);
	v11 = v21 + 40;
	v12 = *(_QWORD*)(v10 + 8);
	v13 = v10;
	while (v12)
	{
		if (*(_DWORD*)(v12 + 32) < a2)
		{
			v12 = *(_QWORD*)(v12 + 24);
		}
		else
		{
			v13 = v12;
			v12 = *(_QWORD*)(v12 + 16);
		}
	}
	if (v13 == v10 || (v22 = v13, a2 < *(_DWORD*)(v13 + 32)))
		v22 = v10;
	v14 = v22;
	if (v22 != *(_QWORD*)(v9 + 48))
		return v14 + 36;
	if (dword_140C7E0AC)
	{
		LODWORD(v15) = dword_140C7E0A8;
	}
	else
	{
		dword_140C7E0AC = 1;
		v15 = sub_140200220(0x330u);
		if (v15)
		{
			LODWORD(v15) = *(_DWORD*)(v15 + 4);
			dword_140C7E0A8 = v15;
		}
		else
		{
			dword_140C7E0A8 = 0;
		}
	}
	v18[0] = a2;
	v18[1] = a2;
	v18[2] = v15;
	v19 = 0i64;
	v20 = 0;
	sub_1405C5410(v11, (__int64)&v16, v18);
	if (!v17)
		return 0i64;
	v14 = v16;
	return v14 + 36;
}
// 140C7E0A8: using guessed type int dword_140C7E0A8;
// 140C7E0AC: using guessed type int dword_140C7E0AC;

