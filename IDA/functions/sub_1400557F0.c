#include "../winhttp.h"

//----- (00000001400557F0) ----------------------------------------------------
void __fastcall sub_1400557F0(__int64 a1, __int64 a2, int* a3)
{
	__int64 v3; // rbp
	int v6; // eax
	int* v7; // rdi
	int* v8; // rbx
	bool v9; // zf
	_BYTE* v10; // rbx
	int* v11; // rbx
	_BYTE* v12; // rbx
	__int64 v13; // rax
	char* v14; // rbx
	unsigned __int64 v15; // rbp
	__int64 v16; // r15
	__int64 v17; // rbx
	_BYTE* v18; // rbx
	__int64 v19; // rax
	char v20[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v21; // [rsp+28h] [rbp-50h]
	_BYTE* v22; // [rsp+30h] [rbp-48h]
	__int64 v23; // [rsp+38h] [rbp-40h]
	__int64 v24; // [rsp+40h] [rbp-38h] BYREF
	__int64 v25; // [rsp+48h] [rbp-30h]

	v3 = qword_140C63630;
	if (*(_QWORD*)(a2 + 8) != *(_QWORD*)(a2 + 16) && a3)
	{
		v6 = dword_140C8B690;
		v7 = 0i64;
		if ((dword_140C8B690 & 1) == 0)
		{
			qword_140C8B6A0 = 0i64;
			qword_140C8B6A8 = 0i64;
			qword_140C8B6B0 = 0i64;
			dword_140C8B690 |= 1u;
			v8 = sub_14018B280(13i64, 0);
			qword_140C8B6B0 = (__int64)v8 + 13;
			qword_140C8B6A0 = (__int64)v8;
			qword_140C8B6A8 = (__int64)v8;
			sub_1407DB590(v8, (int*)"{AUTHNTOKEN}", 0xCui64);
			v9 = v8 + 3 == 0i64;
			v10 = v8 + 3;
			qword_140C8B6A8 = (__int64)v10;
			if (!v9)
				*v10 = 0;
			sub_1407DD89C(sub_14094D250);
			v6 = dword_140C8B690;
		}
		if ((v6 & 2) == 0)
		{
			qword_140C8B6C0 = 0i64;
			qword_140C8B6C8 = 0i64;
			qword_140C8B6D0 = 0i64;
			dword_140C8B690 = v6 | 2;
			v11 = sub_14018B280(10i64, 0);
			qword_140C8B6D0 = (__int64)v11 + 10;
			qword_140C8B6C0 = (__int64)v11;
			qword_140C8B6C8 = (__int64)v11;
			sub_1407DB590(v11, (int*)"{STEAMID}", 9ui64);
			v9 = (int*)((char*)v11 + 9) == 0i64;
			v12 = (char*)v11 + 9;
			qword_140C8B6C8 = (__int64)v12;
			if (!v9)
				*v12 = 0;
			sub_1407DD89C(sub_14094D220);
		}
		sub_14018EE90(&v24, (__int64)"%llu", *(_QWORD*)(v3 + 48));
		v21 = 0i64;
		v23 = 0i64;
		v13 = -1i64;
		do
			v9 = *((_BYTE*)a3 + ++v13) == 0;
		while (!v9);
		v14 = (char*)a3 + v13;
		v15 = v13;
		v16 = v13 + 1;
		if (v13 != -2)
		{
			v7 = sub_14018B280(v13 + 1, 0);
			v21 = v7;
			v23 = (__int64)v7 + v16;
		}
		sub_1407DB590(v7, a3, v15);
		v17 = v14 - (char*)a3;
		v9 = (int*)((char*)v7 + v17) == 0i64;
		v18 = (char*)v7 + v17;
		v22 = v18;
		if (!v9)
			*v18 = 0;
		sub_140190180(a2, (__int64)&unk_140C8B698, (__int64)v20, 0);
		if (v7)
			sub_14018B900((__int64)v7, 0);
		sub_140190180(a2, (__int64)&unk_140C8B6B8, (__int64)&v24, 0);
		v19 = SteamFriends();
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v19 + 240i64))(v19, *(_QWORD*)(a2 + 8));
		if (v25)
			sub_14018B900(v25, 0);
	}
}
// 140959C48: using guessed type __int64 SteamFriends(void);
// 140C63630: using guessed type __int64 qword_140C63630;
// 140C8B690: using guessed type int dword_140C8B690;
// 140C8B6A0: using guessed type __int64 qword_140C8B6A0;
// 140C8B6A8: using guessed type __int64 qword_140C8B6A8;
// 140C8B6B0: using guessed type __int64 qword_140C8B6B0;
// 140C8B6C0: using guessed type __int64 qword_140C8B6C0;
// 140C8B6C8: using guessed type __int64 qword_140C8B6C8;
// 140C8B6D0: using guessed type __int64 qword_140C8B6D0;
// 1400557F0: using guessed type char var_58[8];

