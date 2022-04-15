//----- (0000000140663470) ----------------------------------------------------
__int64 __fastcall sub_140663470(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	int* v4; // rcx
	int* v5; // rdx
	__int64 v6; // rax
	int* v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rcx
	int* v10; // rbx
	__int64 v11; // rax
	_QWORD* v12; // rax
	__int16* v13; // rax
	__int64 v14; // rax
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-108h] BYREF
	char v18[8]; // [rsp+28h] [rbp-100h] BYREF
	_WORD* v19; // [rsp+30h] [rbp-F8h]
	_WORD* v20; // [rsp+38h] [rbp-F0h]
	__int128 v21; // [rsp+E0h] [rbp-48h]
	int* v22; // [rsp+F0h] [rbp-38h]
	__int64 v23; // [rsp+100h] [rbp-28h] BYREF
	__int64 v24; // [rsp+108h] [rbp-20h]

	result = sub_140056AB0(a1, 1u);
	if (result)
	{
		v3 = *(_QWORD*)result;
		sub_1400B6F30((__int64)&v17);
		v21 = 0i64;
		v17 = off_140B69230;
		v22 = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v21 = v4;
		*((_QWORD*)&v21 + 1) = v4;
		v22 = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v5 = (int*)sub_14034BDD0((__int64)v4, 754984);
		if (v5)
		{
			v6 = 0i64;
			if (*(_WORD*)v5)
			{
				do
					++v6;
				while (*((_WORD*)v5 + v6));
			}
			sub_14001C480((__int64)v18, v5, (int*)((char*)v5 + 2 * v6));
		}
		else if (v19 != v20)
		{
			*v19 = 0;
			v20 = v19;
		}
		v7 = sub_14018B280(96i64, 0);
		if (v7)
			v8 = (_QWORD*)sub_1404DDB40((__int64)v7, dword_1409F47DC);
		else
			v8 = 0i64;
		if (*(_DWORD*)(*(_QWORD*)(v3 + 8) + 20i64) == 3)
			(*(void(__fastcall**)(_QWORD*, __int64))(*v8 + 96i64))(v8, 754985i64);
		sub_1400B7480((__int64)&v17, v8);
		v10 = sub_14018B280(96i64, 0);
		if (v10)
		{
			v11 = *(_QWORD*)(v3 + 8);
			if (v11)
			{
				v13 = sub_14034BDD0(v9, *(_DWORD*)(v11 + 4));
				v12 = (_QWORD*)sub_1404DDB40((__int64)v10, (int*)v13);
			}
			else
			{
				v12 = (_QWORD*)sub_1404DDB40((__int64)v10, dword_1409F28B4);
			}
		}
		else
		{
			v12 = 0i64;
		}
		sub_1400B7480((__int64)&v17, v12);
		v14 = sub_1400B7660(&v17);
		v15 = (unsigned __int64*)sub_14018F0E0(&v23, *(unsigned __int16**)(v14 + 8))[1];
		if (v15)
		{
			v16 = -1i64;
			do
				++v16;
			while (*((_BYTE*)v15 + v16));
			sub_140058710((__int64)a1, v15, v16);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v24)
			sub_14018B900(v24, 0);
		if ((_QWORD)v21)
			sub_14018B900(v21, 0);
		sub_1400B7390(&v17);
		return 1i64;
	}
	return result;
}
// 1406635E4: variable 'v9' is possibly undefined
// 1409F28B4: using guessed type int dword_1409F28B4[12];
// 1409F47DC: using guessed type int dword_1409F47DC[38];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140663470: using guessed type char var_100[8];

