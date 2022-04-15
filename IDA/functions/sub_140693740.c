//----- (0000000140693740) ----------------------------------------------------
__int64 __fastcall sub_140693740(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	int* v5; // rcx
	int* v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	__int64 v14; // [rsp+20h] [rbp-108h] BYREF
	__int64 v15; // [rsp+28h] [rbp-100h]
	__int64(__fastcall * *v16)(); // [rsp+40h] [rbp-E8h] BYREF
	char v17[8]; // [rsp+48h] [rbp-E0h] BYREF
	_WORD* v18; // [rsp+50h] [rbp-D8h]
	_WORD* v19; // [rsp+58h] [rbp-D0h]
	__int128 v20; // [rsp+100h] [rbp-28h]
	int* v21; // [rsp+110h] [rbp-18h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		sub_1400B6F30((__int64)&v16);
		v21 = 0i64;
		v20 = 0i64;
		v16 = off_140B69230;
		v5 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v20 = v5;
		*((_QWORD*)&v20 + 1) = v5;
		v21 = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		v6 = (int*)sub_14034BDD0((__int64)v5, *(_DWORD*)(*(_QWORD*)v4 + 24i64));
		if (v6)
		{
			v7 = 0i64;
			if (*(_WORD*)v6)
			{
				do
					++v7;
				while (*((_WORD*)v6 + v7));
			}
			sub_14001C480((__int64)v17, v6, (int*)((char*)v6 + 2 * v7));
		}
		else if (v18 != v19)
		{
			*v18 = 0;
			v19 = v18;
		}
		v8 = sub_1400B7660(&v16);
		v9 = (unsigned __int64*)sub_14018F0E0(&v14, *(unsigned __int16**)(v8 + 8))[1];
		if (v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			sub_140058710((__int64)a1, v9, v10);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v15)
			sub_14018B900(v15, 0);
		if ((_QWORD)v20)
			sub_14018B900(v20, 0);
		sub_1400B7390(&v16);
	}
	else
	{
		v11 = (unsigned __int64*)sub_14018F0E0(&v14, word_1409F605C)[1];
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
		if (v15)
			sub_14018B900(v15, 0);
	}
	return 1i64;
}
// 1409F605C: using guessed type unsigned __int16 word_1409F605C[2];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140693740: using guessed type char var_E0[8];

