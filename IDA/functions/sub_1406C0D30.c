#include "../winhttp.h"

//----- (00000001406C0D30) ----------------------------------------------------
__int64 __fastcall sub_1406C0D30(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rsi
	_DWORD* v4; // r14
	__int64(__fastcall * **v5)(); // rcx
	int v6; // eax
	unsigned int v7; // edi
	_QWORD* v8; // rdx
	unsigned __int64 v9; // rcx
	int v10; // eax
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // r8
	__int64 v14; // rdx
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-30h] BYREF
	int v17; // [rsp+28h] [rbp-28h]
	_QWORD* v18; // [rsp+30h] [rbp-20h]
	__int64(__fastcall * *v19)(); // [rsp+38h] [rbp-18h] BYREF
	int v20; // [rsp+40h] [rbp-10h]
	_QWORD* v21; // [rsp+48h] [rbp-8h]
	__int64(__fastcall * *v22)(); // [rsp+78h] [rbp+28h] BYREF

	v3 = sub_1406C01C0(a1);
	if (!v3)
		return 0i64;
	v4 = dword_140A12138;
	v5 = (__int64(__fastcall***)())dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int64(__fastcall***)())(a1[3] + 16i64);
	v6 = *((_DWORD*)v5 + 2);
	if (v6 != 3)
	{
		if (v6 != 4 || !sub_14005AC80((char*)*v5 + 32, (unsigned __int64*)&v22))
		{
			v7 = 0;
			goto LABEL_9;
		}
		v17 = 3;
		v5 = &v16;
		v16 = v22;
	}
	v7 = (int)*(double*)v5;
LABEL_9:
	v21 = a1;
	v20 = -2;
	v19 = off_140B56A08;
	sub_1400579E0((__int64)a1, v2, -2);
	v8 = v21;
	v9 = v21[2];
	if (v21[3] + 32i64 < v9)
		v4 = (_DWORD*)(v21[3] + 32i64);
	*(_QWORD*)v9 = *(_QWORD*)v4;
	*(_DWORD*)(v9 + 8) = v4[2];
	v8[2] += 16i64;
	v10 = sub_1400578C0((__int64)v21);
	v16 = off_140B56A08;
	v20 = v10;
	v17 = -2;
	v18 = v21;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v19[1])(&v19))
	{
		v11 = sub_14005C3C0(*(_QWORD*)(v21[4] + 160i64), v20);
		v13 = *(_QWORD*)(v12 + 16);
		*(_QWORD*)v13 = *v11;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
		*(_QWORD*)(v12 + 16) += 16i64;
		v17 = sub_1400578C0((__int64)v18);
	}
	sub_140774670(v3 + 1024, v7, (__int64)&v16);
	v19 = off_140B56A08;
	if (v21)
		sub_1400579E0((__int64)v21, v14, v20);
	return 0i64;
}
// 1406C0DDF: variable 'v2' is possibly undefined
// 1406C0E5A: variable 'v12' is possibly undefined
// 1406C0EAC: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

