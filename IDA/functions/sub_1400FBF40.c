#include "../winhttp.h"

//----- (00000001400FBF40) ----------------------------------------------------
__int64 __fastcall sub_1400FBF40(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rsi
	__int64 v11; // rdx
	__int64 v12; // rcx
	_DWORD* v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rax
	__int64(__fastcall * *v18)(); // rax
	int v19; // edx
	__int64 v20; // rcx
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	__int64 v24; // rcx
	__int64 v25; // rcx
	int v26; // r8d
	__int64(__fastcall * *v28)(); // [rsp+20h] [rbp-28h] BYREF
	int v29; // [rsp+28h] [rbp-20h]
	__int64 v30; // [rsp+30h] [rbp-18h]
	int v31; // [rsp+38h] [rbp-10h]

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
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 16i64))(a1, 4294967294i64);
		v12 = *(_QWORD*)(a1 + 16);
		v30 = v12;
		v28 = off_140B569F0;
		v31 = 1;
		v29 = -2;
		v13 = (_DWORD*)(*(_QWORD*)(v12 + 16) - 16i64);
		if (v13 != dword_140A12138 && v13[2] == 5)
		{
			sub_1400579E0(v12, (__int64)dword_140A12138, -2);
			v14 = v30;
			v15 = *(_QWORD*)(v30 + 16);
			*(_QWORD*)v15 = *(_QWORD*)(v15 - 16);
			*(_DWORD*)(v15 + 8) = *(_DWORD*)(v15 - 8);
			*(_QWORD*)(v14 + 16) += 16i64;
			v29 = sub_1400578C0(v30);
		}
		v16 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)a2 = off_140B569F0;
		*(_QWORD*)(v16 + 16) -= 48i64;
		v17 = v30;
		*(_DWORD*)(a2 + 24) = 1;
		*(_QWORD*)(a2 + 16) = v17;
		v18 = v28;
		*(_DWORD*)(a2 + 8) = -2;
		if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v18[1])(&v28))
		{
			v19 = v29;
			v20 = *(_QWORD*)(v30 + 32);
			*(_DWORD*)(a2 + 24) = v31;
			v21 = sub_14005C3C0(*(_QWORD*)(v20 + 160), v19);
			v23 = *(_QWORD*)(v22 + 16);
			*(_QWORD*)v23 = *v21;
			v24 = *(_QWORD*)(a2 + 16);
			*(_DWORD*)(v23 + 8) = *((_DWORD*)v21 + 2);
			*(_QWORD*)(v22 + 16) += 16i64;
			*(_DWORD*)(a2 + 8) = sub_1400578C0(v24);
		}
		v25 = v30;
		v28 = off_140B56A08;
		if (v30)
		{
			v26 = v29;
		LABEL_11:
			sub_1400579E0(v25, v11, v26);
		}
	}
	else
	{
		*(_QWORD*)(v10 + 16) -= 16i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v25 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)a2 = off_140B569F0;
		*(_QWORD*)(a2 + 16) = v25;
		*(_DWORD*)(a2 + 24) = 1;
		*(_DWORD*)(a2 + 8) = -2;
		if (v25)
		{
			v26 = -2;
			goto LABEL_11;
		}
	}
	return a2;
}
// 1400FBF70: variable 'v5' is possibly undefined
// 1400FBF9C: variable 'v8' is possibly undefined
// 1400FC0AB: variable 'v22' is possibly undefined
// 1400FC122: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

