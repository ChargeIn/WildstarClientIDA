#include "../winhttp.h"

//----- (0000000140764050) ----------------------------------------------------
__int64 __fastcall sub_140764050(_QWORD* a1)
{
	char* v2; // rax
	_DWORD* v3; // rcx
	int* v4; // rbp
	__int64 v5; // rdi
	_DWORD* v6; // rax
	__int64 v7; // r14
	unsigned int v8; // ebx
	__int64 v9; // rax
	void(__fastcall * **v10)(_QWORD); // rax
	__int64 v11; // rbx
	_QWORD* v12; // r14
	int* v13; // rax
	__int64 v14; // rax
	__int64 v15; // r9
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	int* v18; // [rsp+28h] [rbp-20h]
	__int64 v19; // [rsp+30h] [rbp-18h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v17, v2);
	v4 = v18;
	v5 = 0i64;
	if ((unsigned __int64)((v19 - (__int64)v18) >> 1) > 4)
	{
		v6 = (_DWORD*)(a1[3] + 16i64);
		v7 = 0i64;
		if ((unsigned __int64)v6 >= a1[2] || (v3 = dword_140A12138, v6 == dword_140A12138) || *(int*)(a1[3] + 24i64) <= 0)
		{
			v8 = 1;
		}
		else
		{
			v8 = sub_140056D60(a1, 2u);
			if (v8 == 3)
			{
				v9 = sub_140056AB0(a1, 3u);
				if (v9)
					v7 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64);
				else
					v7 = MEMORY[8];
			}
		}
		v10 = (void(__fastcall***)(_QWORD))sub_140631010((__int64)v3, v8, v4, v7);
		v11 = (__int64)v10;
		if (v10)
			(**v10)(v10);
		v12 = (_QWORD*)sub_140059170(a1, 0x10ui64);
		v13 = sub_14018B280(128i64, 0);
		if (v13)
			v5 = sub_1406A4060((__int64)v13, v11);
		*v12 = 14672i64;
		v12[1] = v5;
		v5 = a1[4];
		v14 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.ICComm", 0xBui64);
		v15 = a1[2];
		v17 = v14;
		LODWORD(v18) = 4;
		sub_14005E8E0((__int64)a1, v5 + 160, (int*)&v17, v15);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		LODWORD(v5) = 1;
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	}
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return (unsigned int)v5;
}
// 14076410A: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

