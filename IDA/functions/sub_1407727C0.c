#include "../winhttp.h"

//----- (00000001407727C0) ----------------------------------------------------
void __fastcall sub_1407727C0(__int64 a1, __int64 a2, int a3)
{
	unsigned __int64 i; // rdi
	__int64 v7; // rbp
	__int64 v8; // r10
	_QWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rax
	_DWORD* v17; // rdx
	_DWORD* v18; // r8
	BOOL v19; // ecx

	for (i = 0i64; i < *(_QWORD*)(a1 + 808); ++i)
	{
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8 * i);
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(v7 + 8) + 8i64))(v7 + 8))
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2))
			{
				v8 = *(_QWORD*)(v7 + 24);
				if (v8 == *(_QWORD*)(a2 + 16))
				{
					v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v8 + 32) + 160i64), *(_DWORD*)(v7 + 16));
					v11 = *(_QWORD*)(v10 + 16);
					*(_QWORD*)v11 = *v9;
					*(_DWORD*)(v11 + 8) = *((_DWORD*)v9 + 2);
					*(_QWORD*)(v10 + 16) += 16i64;
					v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
					v14 = *(_QWORD*)(v13 + 16);
					*(_QWORD*)v14 = *v12;
					*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
					*(_QWORD*)(v13 + 16) += 16i64;
					v15 = *(_QWORD*)(v7 + 24);
					v16 = *(_QWORD*)(v15 + 16);
					v17 = (_DWORD*)(v16 - 16);
					v18 = (_DWORD*)(v16 - 32);
					v19 = (_DWORD*)(v16 - 16) != dword_140A12138
						&& v18 != dword_140A12138
						&& v17[2] == v18[2]
						&& (unsigned int)sub_14005F0D0(v15, v17, v18);
					*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16i64) -= 32i64;
					if (v19)
						*(_DWORD*)(v7 + 220) = a3;
				}
			}
		}
	}
}
// 140772850: variable 'v10' is possibly undefined
// 14077287C: variable 'v13' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

