#include "../winhttp.h"

//----- (0000000140603610) ----------------------------------------------------
__int64 __fastcall sub_140603610(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	int* v6; // rax
	int* v7; // rax
	_QWORD* v8; // rsi
	__int64 v9; // rax
	int* v10; // rdi
	__int64 v11; // r15
	int* v12; // rax
	__int64* v13; // rax
	__int64* v14; // rsi
	int* v15; // rdi
	__int64 v16; // rax
	__int64 v18; // r15
	int* v19; // rax
	int v20; // eax
	__int64 v21; // rcx
	int* v22; // rdx
	__int64 v23; // rax
	__int64 v24; // rax
	char v26[8]; // [rsp+30h] [rbp-D0h] BYREF
	int* v27; // [rsp+38h] [rbp-C8h]
	int* v28; // [rsp+40h] [rbp-C0h]
	__int64 v29; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v30)(); // [rsp+50h] [rbp-B0h] BYREF
	char v31[8]; // [rsp+58h] [rbp-A8h] BYREF
	_WORD* v32; // [rsp+60h] [rbp-A0h]
	_WORD* v33; // [rsp+68h] [rbp-98h]
	__int128 v34; // [rsp+110h] [rbp+10h]
	int* v35; // [rsp+120h] [rbp+20h]

	v3 = *(_QWORD*)(qword_140C65898 + 120);
	if (v3)
	{
		v4 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 12));
		if (sub_1405A8A40(v5, *(_DWORD*)a2))
		{
			sub_1400B6F30((__int64)&v30);
			v34 = 0i64;
			v30 = off_140B69230;
			v35 = 0i64;
			v6 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v34 = v6;
			*((_QWORD*)&v34 + 1) = v6;
			v35 = v6 + 4;
			if (v6)
				*(_WORD*)v6 = 0;
			v7 = sub_14018B280(96i64, 0);
			if (v7)
			{
				if (v4)
					v3 = v4;
				v8 = (_QWORD*)sub_1404DB7E0((__int64)v7, v3);
			}
			else
			{
				v8 = 0i64;
			}
			v9 = 0i64;
			v10 = 0i64;
			v27 = 0i64;
			v28 = 0i64;
			v29 = 0i64;
			do
				++v9;
			while (word_140B0A7C8[v9]);
			v11 = (2 * v9) >> 1;
			if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v10 = sub_14018B280(2 * (v11 + 1), 0);
				v27 = v10;
				v28 = v10;
				v29 = (__int64)v10 + 2 * v11 + 2;
			}
			sub_1407DB590(v10, (int*)word_140B0A7C8, 2 * v11);
			v12 = (int*)((char*)v10 + 2 * v11);
			v28 = v12;
			if (v12)
				*(_WORD*)v12 = 0;
			sub_1400B7480((__int64)&v30, v8);
			(*(void(__fastcall**)(_QWORD*, char*))(*v8 + 72i64))(v8, v26);
			if (v27)
				sub_14018B900((__int64)v27, 0);
			v13 = (__int64*)sub_14018B280(88i64, 0);
			if (v13)
				v14 = sub_1404DD130(v13, *(_DWORD*)a2);
			else
				v14 = 0i64;
			v15 = 0i64;
			v27 = 0i64;
			v28 = 0i64;
			v29 = 0i64;
			v16 = 0i64;
			while (aQuest_6[++v16] != 0)
				;
			v18 = (2 * v16) >> 1;
			if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v15 = sub_14018B280(2 * (v18 + 1), 0);
				v27 = v15;
				v28 = v15;
				v29 = (__int64)v15 + 2 * v18 + 2;
			}
			sub_1407DB590(v15, (int*)L"quest", 2 * v18);
			v19 = (int*)((char*)v15 + 2 * v18);
			v28 = v19;
			if (v19)
				*(_WORD*)v19 = 0;
			sub_1400B7480((__int64)&v30, v14);
			(*(void(__fastcall**)(__int64*, char*))(*v14 + 72))(v14, v26);
			if (v27)
				sub_14018B900((__int64)v27, 0);
			v20 = sub_14079FC20(*(_DWORD*)(a2 + 4), *(_DWORD*)(a2 + 8));
			if (v20)
			{
				v22 = (int*)sub_14034BDD0(v21, v20);
				if (v22)
				{
					v23 = 0i64;
					if (*(_WORD*)v22)
					{
						do
							++v23;
						while (*((_WORD*)v22 + v23));
					}
					sub_14001C480((__int64)v31, v22, (int*)((char*)v22 + 2 * v23));
				}
				else if (v32 != v33)
				{
					*v32 = 0;
					v33 = v32;
				}
				v24 = sub_1400B7660(&v30);
				sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v24 + 8), 0, 0i64);
			}
			if ((_QWORD)v34)
				sub_14018B900(v34, 0);
			sub_1400B7390(&v30);
		}
	}
	return 0i64;
}
// 14060364E: variable 'v5' is possibly undefined
// 1406038C0: variable 'v21' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B24BC8: using guessed type wchar_t aQuest_6[6];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140603610: using guessed type char var_120[8];
// 140603610: using guessed type char var_F8[8];

