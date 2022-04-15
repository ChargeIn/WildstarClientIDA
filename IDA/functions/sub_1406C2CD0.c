#include "../winhttp.h"

//----- (00000001406C2CD0) ----------------------------------------------------
__int64 __fastcall sub_1406C2CD0(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rbx
	unsigned __int64 v4; // rdx
	_DWORD* v5; // rcx
	int v6; // eax
	__int64 v7; // rdx
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	__int64(__fastcall * *v12)(); // [rsp+20h] [rbp-38h] BYREF
	int v13; // [rsp+28h] [rbp-30h]
	_QWORD* v14; // [rsp+30h] [rbp-28h]
	__int64(__fastcall * *v15)(); // [rsp+38h] [rbp-20h] BYREF
	int v16; // [rsp+40h] [rbp-18h]
	_QWORD* v17; // [rsp+48h] [rbp-10h]

	v3 = sub_1406C01C0(a1);
	if (v3)
	{
		v14 = a1;
		v13 = -2;
		v12 = off_140B56A08;
		sub_1400579E0((__int64)a1, v2, -2);
		v4 = a1[2];
		v5 = dword_140A12138;
		if (a1[3] + 16i64 < v4)
			v5 = (_DWORD*)(v14[3] + 16i64);
		*(_QWORD*)v4 = *(_QWORD*)v5;
		*(_DWORD*)(v4 + 8) = v5[2];
		a1[2] += 16i64;
		v6 = sub_1400578C0((__int64)v14);
		v13 = v6;
		if (v6)
		{
			v15 = off_140B56A08;
			v17 = v14;
			v16 = -2;
			if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v12[1])(&v12))
			{
				v8 = sub_14005C3C0(*(_QWORD*)(v14[4] + 160i64), v13);
				v10 = *(_QWORD*)(v9 + 16);
				*(_QWORD*)v10 = *v8;
				*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
				*(_QWORD*)(v9 + 16) += 16i64;
				v16 = sub_1400578C0((__int64)v17);
			}
			sub_140774020(v3 + 1024, (__int64)&v15);
			v6 = v13;
		}
		v12 = off_140B56A08;
		if (v14)
			sub_1400579E0((__int64)v14, v7, v6);
	}
	return 0i64;
}
// 1406C2D15: variable 'v2' is possibly undefined
// 1406C2D9D: variable 'v9' is possibly undefined
// 1406C2DEC: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

