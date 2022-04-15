#include "../winhttp.h"

//----- (00000001405BA2F0) ----------------------------------------------------
__int64 __fastcall sub_1405BA2F0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	int* v4; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	int* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rbx
	int* v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rbx
	int* v16; // rax
	_QWORD* v17; // rsi
	int* v18; // rdi
	__int64 v19; // rax
	__int64 v21; // r15
	int* v22; // rax
	__int64 v23; // rax
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	__int64 v26; // [rsp+20h] [rbp-E0h] BYREF
	int* v27; // [rsp+28h] [rbp-D8h]
	int* v28; // [rsp+30h] [rbp-D0h]
	__int64 v29; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v30)(); // [rsp+40h] [rbp-C0h] BYREF
	char v31[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v32; // [rsp+50h] [rbp-B0h]
	_WORD* v33; // [rsp+58h] [rbp-A8h]
	__int128 v34; // [rsp+100h] [rbp+0h]
	int* v35; // [rsp+110h] [rbp+10h]

	result = sub_1405BA190(a1);
	v3 = result;
	if (result)
	{
		sub_1400B6F30((__int64)&v30);
		v30 = off_140B69230;
		v34 = 0i64;
		v35 = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v34 = v4;
		*((_QWORD*)&v34 + 1) = v4;
		v35 = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v5 = sub_1405BA0B0(v3);
		if (v5 && (v7 = (int*)sub_14034BDD0(v6, *(_DWORD*)(v5 + 24))) != 0i64)
		{
			v8 = 0i64;
			if (*(_WORD*)v7)
			{
				do
					++v8;
				while (*((_WORD*)v7 + v8));
			}
			sub_14001C480((__int64)v31, v7, (int*)((char*)v7 + 2 * v8));
		}
		else if (v32 != v33)
		{
			*v32 = 0;
			v33 = v32;
		}
		v9 = sub_1405BA0B0(v3);
		v10 = v9;
		if (v9 && *(_DWORD*)(v9 + 16))
		{
			v11 = sub_14018B280(88i64, 0);
			v12 = v11 ? (_QWORD*)sub_1404DDA70((__int64)v11, *(_DWORD*)(v10 + 16)) : 0i64;
			sub_1400B7480((__int64)&v30, v12);
			v13 = *(_QWORD*)(v10 + 72);
			if (v13)
			{
				v14 = sub_140561C30(qword_140C65B70, *(_DWORD*)(*(_QWORD*)(v10 + 64) + 4 * v13 - 4));
				v15 = v14;
				if (v14)
				{
					if (*(_WORD*)(v14 + 136))
					{
						v16 = sub_14018B280(88i64, 0);
						if (v16)
							v17 = (_QWORD*)sub_1404DDA70((__int64)v16, *(unsigned __int16*)(v15 + 136));
						else
							v17 = 0i64;
						v18 = 0i64;
						v27 = 0i64;
						v28 = 0i64;
						v29 = 0i64;
						v19 = 0i64;
						while (aCasteritemleve_0[++v19] != 0)
							;
						v21 = (2 * v19) >> 1;
						if ((unsigned __int64)(v21 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v18 = sub_14018B280(2 * (v21 + 1), 0);
							v27 = v18;
							v28 = v18;
							v29 = (__int64)v18 + 2 * v21 + 2;
						}
						sub_1407DB590(v18, (int*)L"CasterItemLevel", 2 * v21);
						v22 = (int*)((char*)v18 + 2 * v21);
						v28 = v22;
						if (v22)
							*(_WORD*)v22 = 0;
						sub_1400B7480((__int64)&v30, v17);
						(*(void(__fastcall**)(_QWORD*, __int64*))(*v17 + 72i64))(v17, &v26);
						if (v27)
							sub_14018B900((__int64)v27, 0);
					}
				}
			}
		}
		v23 = sub_1400B7660(&v30);
		v24 = (unsigned __int64*)sub_14018F0E0(&v26, *(unsigned __int16**)(v23 + 8))[1];
		if (v24)
		{
			v25 = -1i64;
			do
				++v25;
			while (*((_BYTE*)v24 + v25));
			sub_140058710((__int64)a1, v24, v25);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v27)
			sub_14018B900((__int64)v27, 0);
		if ((_QWORD)v34)
			sub_14018B900(v34, 0);
		sub_1400B7390(&v30);
		return 1i64;
	}
	return result;
}
// 1405BA37D: variable 'v6' is possibly undefined
// 140B21360: using guessed type wchar_t aCasteritemleve_0[16];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1405BA2F0: using guessed type char var_F8[8];

