#include "../winhttp.h"

//----- (0000000140519EC0) ----------------------------------------------------
__int64 __fastcall sub_140519EC0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // r9
	__int64 v3; // rdi
	unsigned __int64 v5; // r8
	unsigned int v7; // edx
	__int64 v8; // r9
	__int64 v9; // rax
	_DWORD* v10; // rax
	__int64** v11; // rax
	__int64** v12; // r14
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rax
	_QWORD* v18; // rcx
	__int64 v19; // rsi
	const char* v20; // r8
	unsigned int v21; // edx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax

	v2 = qword_140C63650;
	v3 = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	v5 = *(_QWORD*)(v2 + 768);
	v7 = 0;
	if (v5)
	{
		v8 = *(_QWORD*)(v2 + 760);
		v9 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(v8 + 8 * v9) + 400i64) == a2)
				break;
			v9 = ++v7;
		} while (v7 < v5);
	}
	v10 = (_DWORD*)(a2[3] + 32i64);
	if ((unsigned __int64)v10 < a2[2] && v10 != dword_140A12138 && !*(_DWORD*)(a2[3] + 40i64)
		|| (v11 = (__int64**)sub_140056AB0(a2, 3u), (v12 = v11) == 0i64)
		|| !*v11
		|| (v13 = **v11) == 0)
	{
		sub_140056570(a2, 3u, "item is not valid");
	}
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v13 + 96i64))(v13)
		|| (!*v12 ? (v14 = 0i64) : (v14 = **v12), (unsigned int)sub_140569F10(v14))
		|| ((v15 = *v12) == 0i64 || !*((_DWORD*)v15 + 296) ? (v16 = 0i64) : (v16 = v15[1]), !sub_14041FB40(v16)))
	{
		sub_140056570(a2, 3u, "item is not auctionable");
	}
	v17 = sub_140056AB0(a2, 4u);
	v18 = a2;
	v19 = v17;
	if (*(_DWORD*)(v17 + 8) != 1)
	{
		v20 = "must be in credits";
		v21 = 4;
		goto LABEL_28;
	}
	if (*(__int64*)v17 < 1)
	{
		v20 = "must be greater than zero";
		v21 = 4;
		goto LABEL_28;
	}
	v22 = sub_140056AB0(a2, 5u);
	v23 = v22;
	if (*(_DWORD*)(v22 + 8) != 1)
	{
		v20 = "must be in credits";
	LABEL_27:
		v21 = 5;
		v18 = a2;
	LABEL_28:
		sub_140056570(v18, v21, v20);
	}
	v24 = *(_QWORD*)v22;
	if (v24 && v24 < *(_QWORD*)v19)
	{
		v20 = "must be greater than bid";
		goto LABEL_27;
	}
	*(_QWORD*)(a1 + 16) = *(_QWORD*)v19;
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(v19 + 8);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(v19 + 12);
	*(_QWORD*)(a1 + 40) = *(_QWORD*)v23;
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(v23 + 8);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(v23 + 12);
	if (*v12)
		v3 = **v12;
	*(_QWORD*)(a1 + 64) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 48i64))(v3);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

