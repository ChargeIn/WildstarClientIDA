//----- (000000014057C970) ----------------------------------------------------
__int64 __fastcall sub_14057C970(__int64 a1, __int64 a2)
{
	int v2; // eax
	int v4; // ecx
	int v5; // ebx
	int v6; // eax
	int v7; // edi
	int* v8; // rax
	int* v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // rcx
	int* v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rax
	int* v15; // rax
	int* v16; // rax
	_QWORD* v17; // rax
	__int64 v18; // rcx
	int* v19; // rdx
	__int64 v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64(__fastcall * *v24)(); // [rsp+38h] [rbp-D0h] BYREF
	__int64 v25; // [rsp+40h] [rbp-C8h] BYREF
	_WORD* v26; // [rsp+48h] [rbp-C0h]
	_WORD* v27; // [rsp+50h] [rbp-B8h]
	__int128 v28; // [rsp+F8h] [rbp-10h]
	int* v29; // [rsp+108h] [rbp+0h]

	v2 = *(_DWORD*)(a2 + 16);
	v4 = *(_DWORD*)(a1 + 560);
	*(_DWORD*)(a1 + 560) = v2;
	v5 = 771889;
	if (v4 == v2)
		return 0i64;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildQueueStateChanged", byte_1409EA874, a1, v4, v2);
	v6 = *(_DWORD*)(a1 + 560);
	if (v6 == 3)
	{
		v7 = 435957;
	}
	else
	{
		if (v6 != 4)
		{
			if ((unsigned int)(v6 - 5) > 1)
			{
				v7 = 435964;
			}
			else
			{
				v7 = 435963;
				v5 = 435962;
			}
			goto LABEL_10;
		}
		v7 = 435959;
	}
	v5 = 435961;
LABEL_10:
	sub_1400B6F30((__int64)&v24);
	v24 = off_140B69230;
	v28 = 0i64;
	v29 = 0i64;
	v8 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v28 = v8;
	*((_QWORD*)&v28 + 1) = v8;
	v29 = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	v9 = sub_14018B280(96i64, 0);
	if (v9)
		v10 = (_QWORD*)sub_1404DDB40((__int64)v9, *(int**)(a1 + 8));
	else
		v10 = 0i64;
	sub_1400B7480((__int64)&v24, v10);
	v12 = (int*)sub_14034BDD0(v11, v7);
	if (v12)
	{
		v13 = 0i64;
		if (*(_WORD*)v12)
		{
			do
				++v13;
			while (*((_WORD*)v12 + v13));
		}
		sub_14001C480((__int64)&v25, v12, (int*)((char*)v12 + 2 * v13));
	}
	else if (v26 != v27)
	{
		*v26 = 0;
		v27 = v26;
	}
	v14 = sub_1400B7660(&v24);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v14 + 8), 0, 0i64);
	if ((_QWORD)v28)
		sub_14018B900(v28, 0);
	sub_1400B7390(&v24);
	if (*(_DWORD*)(a1 + 16) == 3 && v5 != 771889)
	{
		sub_1400B6F30((__int64)&v24);
		v24 = off_140B69230;
		v29 = 0i64;
		v28 = 0i64;
		v15 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v28 = v15;
		*((_QWORD*)&v28 + 1) = v15;
		v29 = v15 + 4;
		if (v15)
			*(_WORD*)v15 = 0;
		v16 = sub_14018B280(96i64, 0);
		if (v16)
			v17 = (_QWORD*)sub_1404DDB40((__int64)v16, *(int**)(a1 + 8));
		else
			v17 = 0i64;
		sub_1400B7480((__int64)&v24, v17);
		v19 = (int*)sub_14034BDD0(v18, v5);
		if (v19)
		{
			v20 = 0i64;
			if (*(_WORD*)v19)
			{
				do
					++v20;
				while (*((_WORD*)v19 + v20));
			}
			sub_14001C480((__int64)&v25, v19, (int*)((char*)v19 + 2 * v20));
		}
		else if (v26 != v27)
		{
			*v26 = 0;
			v27 = v26;
		}
		v21 = sub_1400B7660(&v24);
		v22 = sub_140580040((__int64*)a1);
		sub_140003890(
			(__int64*)qword_140C658A0,
			**(_DWORD**)(v22 + 8),
			*(_QWORD*)(v22 + 16),
			*(int**)(v21 + 8),
			0,
			0i64);
		if ((_QWORD)v28)
			sub_14018B900(v28, 0);
		sub_1400B7390(&v24);
	}
	return 0i64;
}
// 14057CA89: variable 'v11' is possibly undefined
// 14057CBA2: variable 'v18' is possibly undefined
// 1409EA874: using guessed type _BYTE byte_1409EA874[32];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

