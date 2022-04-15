//----- (0000000140693520) ----------------------------------------------------
__int64 __fastcall sub_140693520(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	int* v5; // rcx
	int* v6; // rcx
	_QWORD* v7; // rax
	int* v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rax
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	__int64 v16; // [rsp+20h] [rbp-108h] BYREF
	__int64 v17; // [rsp+28h] [rbp-100h]
	__int64(__fastcall * *v18)(); // [rsp+40h] [rbp-E8h] BYREF
	char v19[8]; // [rsp+48h] [rbp-E0h] BYREF
	_WORD* v20; // [rsp+50h] [rbp-D8h]
	_WORD* v21; // [rsp+58h] [rbp-D0h]
	__int128 v22; // [rsp+100h] [rbp-28h]
	int* v23; // [rsp+110h] [rbp-18h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		sub_1400B6F30((__int64)&v18);
		v23 = 0i64;
		v22 = 0i64;
		v18 = off_140B69230;
		v5 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v22 = v5;
		*((_QWORD*)&v22 + 1) = v5;
		v23 = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120))
		{
			v6 = sub_14018B280(96i64, 0);
			if (v6)
				v7 = (_QWORD*)sub_1404DB7E0((__int64)v6, *(_QWORD*)(qword_140C65898 + 120));
			else
				v7 = 0i64;
			sub_1400B7480((__int64)&v18, v7);
		}
		v8 = (int*)sub_14034BDD0((__int64)v5, *(_DWORD*)(*(_QWORD*)v4 + 20i64));
		if (v8)
		{
			v9 = 0i64;
			if (*(_WORD*)v8)
			{
				do
					++v9;
				while (*((_WORD*)v8 + v9));
			}
			sub_14001C480((__int64)v19, v8, (int*)((char*)v8 + 2 * v9));
		}
		else if (v20 != v21)
		{
			*v20 = 0;
			v21 = v20;
		}
		v10 = sub_1400B7660(&v18);
		v11 = (unsigned __int64*)sub_14018F0E0(&v16, *(unsigned __int16**)(v10 + 8))[1];
		if (v11)
		{
			v12 = -1i64;
			do
				++v12;
			while (*((_BYTE*)v11 + v12));
			sub_140058710((__int64)a1, v11, v12);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v17)
			sub_14018B900(v17, 0);
		if ((_QWORD)v22)
			sub_14018B900(v22, 0);
		sub_1400B7390(&v18);
	}
	else
	{
		v13 = (unsigned __int64*)sub_14018F0E0(&v16, word_1409F5B64)[1];
		if (v13)
		{
			v14 = -1i64;
			do
				++v14;
			while (*((_BYTE*)v13 + v14));
			sub_140058710((__int64)a1, v13, v14);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v17)
			sub_14018B900(v17, 0);
	}
	return 1i64;
}
// 140693612: variable 'v5' is possibly undefined
// 1409F5B64: using guessed type unsigned __int16 word_1409F5B64[2];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140693520: using guessed type char var_E0[8];

