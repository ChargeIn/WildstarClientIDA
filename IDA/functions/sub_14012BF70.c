#include "../winhttp.h"

//----- (000000014012BF70) ----------------------------------------------------
__int64 __fastcall sub_14012BF70(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // r14
	unsigned int v4; // ebx
	__int64 v5; // rax
	_QWORD* v6; // rdi
	_QWORD* v7; // rbp
	__int64 v8; // rax
	unsigned __int64 v9; // rdx
	__int64 v10; // r9
	__int64 v11; // rcx
	_DWORD* v12; // rax
	__int64 v13; // rbx
	_QWORD* v14; // rdi
	__int64 v15; // rax
	_QWORD* v16; // rax

	v2 = sub_14012AAF0(a1, 1u);
	v3 = (_QWORD*)v2;
	if (v2)
	{
		sub_14012A290(v2);
		v4 = 0;
		if (!v3[82])
		{
			v5 = (*(__int64(__fastcall**)(_QWORD*))(v3[18] + 16i64))(v3 + 18);
			v6 = (_QWORD*)v5;
			if (v5)
			{
				*(_QWORD*)(v5 + 8) = v3 + 2;
				*(_QWORD*)(v5 + 16) = 0i64;
				*(_DWORD*)(v5 + 24) = 0;
				*(_QWORD*)(v5 + 32) = 0i64;
				*(_QWORD*)(v5 + 40) = 0i64;
				*(_QWORD*)(v5 + 48) = 0i64;
				*(_QWORD*)(v5 + 56) = 0i64;
				*(_QWORD*)(v5 + 64) = 0i64;
				*(_QWORD*)(v5 + 72) = 0i64;
				*(_QWORD*)(v5 + 80) = 0i64;
				*(_DWORD*)(v5 + 88) = 0;
				*(_QWORD*)v5 = off_140B5EBA0;
				*(_QWORD*)(v5 + 96) = 0i64;
			}
			else
			{
				v6 = 0i64;
			}
			v6[10] = v3 + 18;
			sub_1401A4C50((__int64)(v6 + 3), (int*)L"Root");
			v3[82] = v6;
			sub_1401A5A70(v3 + 2, v6);
		}
		v7 = (_QWORD*)sub_14012B2B0((__int64)v3, a1);
		if (v7)
		{
			v8 = sub_14012AAF0(a1, 2u);
			v9 = *(_QWORD*)(qword_140C63650 + 768);
			v10 = v8;
			if (v9)
			{
				v11 = 0i64;
				do
				{
					if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v11) + 400i64) == a1)
						break;
					v11 = ++v4;
				} while (v4 < v9);
			}
			v12 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64))
			{
				v13 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10) + 48);
				if (v13)
				{
					while (1)
					{
						v14 = (_QWORD*)(**(__int64(__fastcall***)(__int64))v13)(v13);
						if (v14)
							break;
						v13 = *(_QWORD*)(v13 + 72);
						if (!v13)
							return 0i64;
					}
					v15 = (*(__int64(__fastcall**)(_QWORD*))(*v3 + 16i64))(v3);
					v16 = (_QWORD*)sub_1401A5CA0(v14, v15);
					sub_1401A5A70(v7, v16);
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A20870: using guessed type wchar_t aRoot_3[5];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140C63650: using guessed type __int64 qword_140C63650;

