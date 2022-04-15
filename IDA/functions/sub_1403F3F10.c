//----- (00000001403F3F10) ----------------------------------------------------
__int64 __fastcall sub_1403F3F10(__int64 a1, int* a2)
{
	int v2; // ecx
	unsigned int v3; // ebx
	int v4; // edi
	int* v5; // rax
	int* v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rcx
	int* v9; // rsi
	__int16* v10; // rax
	_QWORD* v11; // rsi
	int* v12; // rdi
	__int64 v13; // rax
	__int64 v15; // r14
	int* v16; // rax
	__int64 v17; // rax
	char v19[8]; // [rsp+30h] [rbp-D0h] BYREF
	int* v20; // [rsp+38h] [rbp-C8h]
	int* v21; // [rsp+40h] [rbp-C0h]
	__int64 v22; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v23)(); // [rsp+50h] [rbp-B0h] BYREF
	char v24[8]; // [rsp+58h] [rbp-A8h] BYREF
	_WORD* v25; // [rsp+60h] [rbp-A0h]
	_WORD* v26; // [rsp+68h] [rbp-98h]
	__int128 v27; // [rsp+110h] [rbp+10h]
	int* v28; // [rsp+120h] [rbp+20h]

	v2 = 0x7FFFFFFF;
	v3 = 0x80000000;
	if (*a2 != 0x7FFFFFFF)
		v2 = *a2;
	if (v2 != 0x80000000)
		v3 = v2;
	if (v3 / 0xE10)
	{
		v4 = 445719;
		v3 /= 0xE10u;
	}
	else if (v3 / 0x3C)
	{
		v4 = 445720;
		v3 /= 0x3Cu;
	}
	else
	{
		v4 = 569266;
	}
	sub_1400B6F30((__int64)&v23);
	v23 = off_140B69230;
	v27 = 0i64;
	v28 = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v27 = v5;
	*((_QWORD*)&v27 + 1) = v5;
	v28 = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	v6 = (int*)sub_14034BDD0((__int64)(v5 + 4), 569267);
	if (v6)
	{
		v7 = 0i64;
		if (*(_WORD*)v6)
		{
			do
				++v7;
			while (*((_WORD*)v6 + v7));
		}
		sub_14001C480((__int64)v24, v6, (int*)((char*)v6 + 2 * v7));
	}
	else if (v25 != v26)
	{
		*v25 = 0;
		v26 = v25;
	}
	v9 = sub_14018B280(96i64, 0);
	if (v9)
	{
		v10 = sub_14034BDD0(v8, v4);
		v11 = (_QWORD*)sub_1404DDC40((__int64)v9, (int*)v10, v3);
	}
	else
	{
		v11 = 0i64;
	}
	v12 = 0i64;
	v20 = 0i64;
	v21 = 0i64;
	v22 = 0i64;
	v13 = 0i64;
	while (aTime_2[++v13] != 0)
		;
	v15 = (2 * v13) >> 1;
	if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v12 = sub_14018B280(2 * (v15 + 1), 0);
		v20 = v12;
		v21 = v12;
		v22 = (__int64)v12 + 2 * v15 + 2;
	}
	sub_1407DB590(v12, (int*)L"time", 2 * v15);
	v16 = (int*)((char*)v12 + 2 * v15);
	v21 = v16;
	if (v16)
		*(_WORD*)v16 = 0;
	sub_1400B7480((__int64)&v23, v11);
	(*(void(__fastcall**)(_QWORD*, char*))(*v11 + 72i64))(v11, v19);
	if (v20)
		sub_14018B900((__int64)v20, 0);
	v17 = sub_1400B7660(&v23);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v17 + 8), 0, 0i64);
	if ((_QWORD)v27)
		sub_14018B900(v27, 0);
	sub_1400B7390(&v23);
	return 0i64;
}
// 1403F402C: variable 'v8' is possibly undefined
// 140AF83A8: using guessed type wchar_t aTime_2[5];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 1403F3F10: using guessed type char var_E8[8];
// 1403F3F10: using guessed type char var_110[8];

