#include "../winhttp.h"

//----- (00000001400FBD20) ----------------------------------------------------
__int64 __fastcall sub_1400FBD20(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rdi
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rcx
	int v14; // eax
	__int64 v15; // rax
	__int64 v16; // rdx
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	__int64 v20; // rcx
	__int64 v21; // rcx
	int v22; // r8d
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	__int64 v26; // rcx
	__int64(__fastcall * *v28)(); // [rsp+20h] [rbp-38h] BYREF
	int v29; // [rsp+28h] [rbp-30h]
	__int64 v30; // [rsp+30h] [rbp-28h]
	__int64(__fastcall * *v31)(); // [rsp+38h] [rbp-20h] BYREF
	int v32; // [rsp+40h] [rbp-18h]
	__int64 v33; // [rsp+48h] [rbp-10h]

	v4 = sub_14005C3C0(
		*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) + 32i64) + 160i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v9 = *(_QWORD*)(v8 + 16);
	*(_QWORD*)v9 = *v7;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v8 + 16) += 16i64;
	v10 = *(_QWORD*)(a1 + 16);
	if ((unsigned int)sub_14005BA70(v10, *(_QWORD*)(*(_QWORD*)(v10 + 16) - 32i64), *(_QWORD*)(v10 + 16) - 16i64))
	{
		*(_QWORD*)(v10 + 16) += 16i64;
		v30 = *(_QWORD*)(a1 + 16);
		v28 = off_140B56A08;
		v29 = -2;
		sub_1400579E0(v30, v11, -2);
		v12 = v30;
		v13 = *(_QWORD*)(v30 + 16);
		*(_QWORD*)v13 = *(_QWORD*)(v13 - 32);
		*(_DWORD*)(v13 + 8) = *(_DWORD*)(v13 - 24);
		*(_QWORD*)(v12 + 16) += 16i64;
		v14 = sub_1400578C0(v30);
		*(_QWORD*)a2 = off_140B56A08;
		v29 = v14;
		v15 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a2 + 8) = -2;
		*(_QWORD*)(v15 + 16) -= 48i64;
		*(_QWORD*)(a2 + 16) = v30;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v28[1])(&v28))
		{
			v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v30 + 32) + 160i64), v29);
			v19 = *(_QWORD*)(v18 + 16);
			*(_QWORD*)v19 = *v17;
			v20 = *(_QWORD*)(a2 + 16);
			*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
			*(_QWORD*)(v18 + 16) += 16i64;
			*(_DWORD*)(a2 + 8) = sub_1400578C0(v20);
		}
		v21 = v30;
		v28 = off_140B56A08;
		if (v30)
		{
			v22 = v29;
		LABEL_10:
			sub_1400579E0(v21, v16, v22);
		}
	}
	else
	{
		*(_QWORD*)(v10 + 16) -= 16i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v33 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(a2 + 16) = v33;
		v31 = off_140B56A08;
		v32 = -2;
		*(_QWORD*)a2 = off_140B56A08;
		*(_DWORD*)(a2 + 8) = -2;
		if (sub_1400F9C90((__int64)&v31))
		{
			v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v33 + 32) + 160i64), v32);
			v25 = *(_QWORD*)(v24 + 16);
			*(_QWORD*)v25 = *v23;
			v26 = *(_QWORD*)(a2 + 16);
			*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
			*(_QWORD*)(v24 + 16) += 16i64;
			*(_DWORD*)(a2 + 8) = sub_1400578C0(v26);
		}
		v21 = v33;
		v31 = off_140B56A08;
		if (v33)
		{
			v22 = v32;
			goto LABEL_10;
		}
	}
	return a2;
}
// 1400FBD50: variable 'v5' is possibly undefined
// 1400FBD7C: variable 'v8' is possibly undefined
// 1400FBDD9: variable 'v11' is possibly undefined
// 1400FBE4D: variable 'v18' is possibly undefined
// 1400FBEEC: variable 'v24' is possibly undefined
// 1400FBF21: variable 'v16' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

