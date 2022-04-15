#include "../winhttp.h"

//----- (0000000140178190) ----------------------------------------------------
__int64 __fastcall sub_140178190(_QWORD* a1)
{
	char* v2; // rdi
	int v3; // esi
	_DWORD* v4; // rax
	int v5; // ecx
	BOOL v6; // r14d
	int v7; // ebp
	_DWORD* v8; // rdx
	int v9; // ecx
	int v10; // eax
	__int64 v11; // rbx
	void* v12; // rax
	__int64 v14; // [rsp+20h] [rbp-38h]
	__int64 v15; // [rsp+28h] [rbp-30h]
	int v16; // [rsp+68h] [rbp+10h] BYREF

	v2 = (char*)sub_140177AC0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 32i64);
	v5 = v4[2];
	v6 = v5 && (v5 != 1 || *v4);
	v7 = *(_DWORD*)(*((_QWORD*)v2 + 130) + 1032i64);
	(*(void(__fastcall**)(char*))(*(_QWORD*)v2 + 432i64))(v2);
	v16 = 1;
	sub_1400D4070((__int64)v2, 0x30u, v2, "ii>b", v3, v7, &v16);
	if (v16)
	{
		v8 = (_DWORD*)*((_QWORD*)v2 + 130);
		v9 = v8[290] - 1;
		if (v3 < v9)
			v9 = v3;
		v10 = -1;
		if (v9 > -1)
			v10 = v9;
		v8[258] = v10;
		v8[260] = v10;
		v11 = *(_QWORD*)v2;
		v12 = sub_1401774A0((__int64)v2, *(_DWORD*)(*((_QWORD*)v2 + 130) + 1032i64));
		(*(void(__fastcall**)(char*, void*))(v11 + 80))(v2, v12);
		if (v6 && v3 != v7)
		{
			LODWORD(v15) = v7;
			LODWORD(v14) = v3;
			sub_1400D4070((__int64)v2, 0x31u, v2, byte_1409DE0D4, v14, v15);
		}
	}
	return 0i64;
}
// 1401782AC: variable 'v14' is possibly undefined
// 1401782AC: variable 'v15' is possibly undefined
// 1409DE0D4: using guessed type _BYTE byte_1409DE0D4[136];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

