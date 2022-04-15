#include "../winhttp.h"

//----- (00000001400FC330) ----------------------------------------------------
void __fastcall sub_1400FC330(__int64 a1)
{
	_QWORD* v2; // rax
	__int64 v3; // r10
	__int64 v4; // rdx
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	__int64 v8; // rbx
	__int64 v9; // rbx
	__int64 v10; // rdx
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // rdx
	int v14; // esi
	_QWORD* v15; // rax
	_DWORD* v16; // r10
	int v17; // eax
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rax
	int v21; // ecx
	__int64 v22; // rax
	unsigned __int64 v23; // [rsp+50h] [rbp+8h] BYREF

	v2 = sub_14005C3C0(
		*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) + 32i64) + 160i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	v4 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v4 = *v2;
	*(_DWORD*)(v4 + 8) = *((_DWORD*)v2 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v7 = *(_QWORD*)(v6 + 16);
	*(_QWORD*)v7 = *v5;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	v8 = *(_QWORD*)(a1 + 16);
	if ((unsigned int)sub_14005BA70(v8, *(_QWORD*)(*(_QWORD*)(v8 + 16) - 32i64), *(_QWORD*)(v8 + 16) - 16i64))
	{
		*(_QWORD*)(v8 + 16) += 16i64;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 16i64))(a1, 4294967294i64);
		v9 = *(_QWORD*)(a1 + 16);
		sub_1400579E0(v9, v10, -2);
		v11 = *(_QWORD*)(v9 + 16);
		*(_QWORD*)v11 = *(_QWORD*)(v11 - 16);
		*(_DWORD*)(v11 + 8) = *(_DWORD*)(v11 - 8);
		*(_QWORD*)(v9 + 16) += 16i64;
		v12 = sub_1400578C0(v9);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 48i64;
		v14 = v12;
		if (v12 != -2)
		{
			v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v12);
			v13 = *(_QWORD*)(v9 + 16);
			*(_QWORD*)v13 = *v15;
			*(_DWORD*)(v13 + 8) = *((_DWORD*)v15 + 2);
			*(_QWORD*)(v9 + 16) += 16i64;
			v16 = (_DWORD*)(*(_QWORD*)(v9 + 16) - 16i64);
			v17 = v16 == dword_140A12138 ? -1 : v16[2];
			*(_QWORD*)(v9 + 16) = v16;
			if (v17 == 3)
			{
				v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v14);
				*(_QWORD*)v19 = *v18;
				*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
				*(_QWORD*)(v9 + 16) += 16i64;
				v20 = *(_QWORD*)(v9 + 16);
				v21 = *(_DWORD*)(v20 - 8);
				v22 = v20 - 16;
				if (v21 == 3 || v21 == 4 && sub_14005AC80((char*)(*(_QWORD*)v22 + 32i64), &v23))
					*(_QWORD*)(v9 + 16) -= 16i64;
				else
					*(_QWORD*)(v9 + 16) -= 16i64;
			}
		}
		sub_1400579E0(v9, v13, v14);
	}
	else
	{
		*(_QWORD*)(v8 + 16) -= 16i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
}
// 1400FC358: variable 'v3' is possibly undefined
// 1400FC384: variable 'v6' is possibly undefined
// 1400FC3E3: variable 'v10' is possibly undefined
// 1400FC480: variable 'v19' is possibly undefined
// 1400FC4F8: variable 'v13' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

