//----- (000000014067C750) ----------------------------------------------------
__int64 __fastcall sub_14067C750(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	int* v4; // rax
	int* v5; // rax
	_QWORD* v6; // rax
	int* v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rax
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	__int64 v15; // [rsp+20h] [rbp-108h] BYREF
	__int64 v16; // [rsp+28h] [rbp-100h]
	__int64(__fastcall * *v17)(); // [rsp+40h] [rbp-E8h] BYREF
	char v18[8]; // [rsp+48h] [rbp-E0h] BYREF
	_WORD* v19; // [rsp+50h] [rbp-D8h]
	_WORD* v20; // [rsp+58h] [rbp-D0h]
	__int128 v21; // [rsp+100h] [rbp-28h]
	int* v22; // [rsp+110h] [rbp-18h]

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		sub_1400B6F30((__int64)&v17);
		v22 = 0i64;
		v21 = 0i64;
		v17 = off_140B69230;
		v4 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v21 = v4;
		*((_QWORD*)&v21 + 1) = v4;
		v22 = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v5 = sub_14018B280(96i64, 0);
		if (v5)
			v6 = (_QWORD*)sub_1404DB7E0((__int64)v5, *(_QWORD*)(qword_140C65898 + 120));
		else
			v6 = 0i64;
		sub_1400B7480((__int64)&v17, v6);
		v7 = (int*)sub_14034BDD0(**(_QWORD**)(v3 + 48), *(_DWORD*)(**(_QWORD**)(v3 + 48) + 64i64));
		if (v7)
		{
			v8 = 0i64;
			if (*(_WORD*)v7)
			{
				do
					++v8;
				while (*((_WORD*)v7 + v8));
			}
			sub_14001C480((__int64)v18, v7, (int*)((char*)v7 + 2 * v8));
		}
		else if (v19 != v20)
		{
			*v19 = 0;
			v20 = v19;
		}
		v9 = sub_1400B7660(&v17);
		v10 = (unsigned __int64*)sub_14018F0E0(&v15, *(unsigned __int16**)(v9 + 8))[1];
		if (v10)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v10 + v11));
			sub_140058710((__int64)a1, v10, v11);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v16)
			sub_14018B900(v16, 0);
		if ((_QWORD)v21)
			sub_14018B900(v21, 0);
		sub_1400B7390(&v17);
	}
	else
	{
		v12 = (unsigned __int64*)sub_14018F0E0(&v15, word_1409F4F54)[1];
		if (v12)
		{
			v13 = -1i64;
			do
				++v13;
			while (*((_BYTE*)v12 + v13));
			sub_140058710((__int64)a1, v12, v13);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v16)
			sub_14018B900(v16, 0);
	}
	return 1i64;
}
// 1409F4F54: using guessed type unsigned __int16 word_1409F4F54[2];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 14067C750: using guessed type char var_E0[8];

