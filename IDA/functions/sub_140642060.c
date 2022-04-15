#include "../winhttp.h"

//----- (0000000140642060) ----------------------------------------------------
__int64 __fastcall sub_140642060(__int64 a1, unsigned int* a2)
{
	_DWORD* v3; // rsi
	int* v4; // rax
	__int64 v5; // rax
	int* v6; // rdi
	int* v7; // rbp
	__int64 v8; // rbx
	unsigned __int64 v9; // rbx
	int v10; // r9d
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v14[24]; // [rsp+40h] [rbp-E8h] BYREF
	__int128 v15; // [rsp+100h] [rbp-28h]
	int* v16; // [rsp+110h] [rbp-18h]

	v3 = (_DWORD*)sub_1402402C0(*a2);
	if (v3)
	{
		sub_1400B6F30((__int64)v14);
		v14[0] = (__int64)off_140B69230;
		v15 = 0i64;
		v16 = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v15 = v4;
		*((_QWORD*)&v15 + 1) = v4;
		v16 = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		if ((int)sub_1406416D0((__int64)v14, (__int64)a2, v3[1]) >= 0)
		{
			v5 = sub_1400B7660(v14);
			v6 = 0i64;
			v7 = *(int**)(v5 + 8);
			v8 = (__int64)(*(_QWORD*)(v5 + 16) - (_QWORD)v7) >> 1;
			if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v6 = sub_14018B280(2 * (v8 + 1), 0);
			v9 = 2 * v8;
			sub_1407DB590(v6, v7, v9);
			if ((int*)((char*)v6 + v9))
				*(_WORD*)((char*)v6 + v9) = 0;
			if (v6)
			{
				v10 = v3[4];
				if (v10)
				{
					sub_14042A360(*(_QWORD*)(qword_140C65898 + 29504), v3[3], (__int16*)v6, v10, v3[6]);
					sub_140003890((__int64*)qword_140C658A0, 0x17u, 0i64, v6, 0, 0i64);
				}
			}
			v11 = (unsigned int)v3[2];
			if ((_DWORD)v11)
			{
				v12 = *(_QWORD*)(qword_140C63628 + 728);
				if (v12)
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v12 + 16i64))(
						v12,
						v11,
						0i64,
						0i64,
						0i64,
						0i64,
						0i64);
			}
			if (v6)
				sub_14018B900((__int64)v6, 0);
		}
		if ((_QWORD)v15)
			sub_14018B900(v15, 0);
		sub_1400B7390(v14);
	}
	return 0i64;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

