#include "../winhttp.h"

//----- (000000014004B360) ----------------------------------------------------
__int64 __fastcall sub_14004B360(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v3; // esi
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned __int16* v6; // rbx
	int v7; // eax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	unsigned __int16* v13; // [rsp+58h] [rbp+10h] BYREF

	v1 = (_DWORD*)a1[3];
	v3 = 1;
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2]) && (v4 = sub_140056AB0(a1, 1u)) != 0)
		v5 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	else
		v5 = 0i64;
	v6 = 0i64;
	v13 = 0i64;
	if (v5 && (v7 = sub_1400300F0(v5 + 32, (int**)&v13), v6 = v13, v7 >= 0))
	{
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, v13)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			sub_140058710((__int64)a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v12)
			sub_14018B900(v12, 0);
	}
	else
	{
		v3 = 0;
	}
	if (v6)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 8);
	return v3;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

