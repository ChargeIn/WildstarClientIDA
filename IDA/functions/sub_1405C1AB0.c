//----- (00000001405C1AB0) ----------------------------------------------------
__int64 __fastcall sub_1405C1AB0(__int64 a1, int* a2)
{
	int v4; // ecx
	int v5; // eax
	__int64 v6; // rcx
	__int16* v7; // rax
	int v9; // eax
	int* v10; // rax
	int* v11; // rax
	int* v12; // rsi
	int v13; // ebx
	__int64 v14; // rcx
	int v15; // edx
	int* v16; // rdx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-E8h] BYREF
	char v20[8]; // [rsp+38h] [rbp-E0h] BYREF
	_WORD* v21; // [rsp+40h] [rbp-D8h]
	_WORD* v22; // [rsp+48h] [rbp-D0h]
	__int128 v23; // [rsp+F0h] [rbp-28h]
	int* v24; // [rsp+100h] [rbp-18h]

	v4 = *a2;
	if (((*a2 - 20) & 0xFFFFFFFB) != 0)
	{
		v5 = sub_1405C42C0(v4);
		if (v5)
		{
			v7 = sub_14034BDD0(v6, v5);
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v7, 0, 0i64);
			return 0i64;
		}
	}
	else
	{
		v9 = dword_140C636A8;
		*(_DWORD*)(a1 + 24) = v4;
		*(_DWORD*)(a1 + 28) = v9;
		sub_1400B6F30((__int64)&v19);
		v23 = 0i64;
		v19 = off_140B69230;
		v24 = 0i64;
		v10 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v23 = v10;
		*((_QWORD*)&v23 + 1) = v10;
		v24 = v10 + 4;
		if (v10)
			*(_WORD*)v10 = 0;
		v11 = sub_14018B280(88i64, 0);
		v12 = v11;
		if (v11)
		{
			v13 = a2[1];
			sub_1400B6390(v11);
			v12[2] = v13;
			*(_QWORD*)v12 = off_140B69300;
			*((float*)v12 + 3) = (float)v13;
		}
		else
		{
			v12 = 0i64;
		}
		sub_1400B7480((__int64)&v19, v12);
		v15 = 421178;
		if (*a2 == 20)
			v15 = 406777;
		v16 = (int*)sub_14034BDD0(v14, v15);
		if (v16)
		{
			v17 = 0i64;
			if (*(_WORD*)v16)
			{
				do
					++v17;
				while (*((_WORD*)v16 + v17));
			}
			sub_14001C480((__int64)v20, v16, (int*)((char*)v16 + 2 * v17));
		}
		else if (v21 != v22)
		{
			*v21 = 0;
			v22 = v21;
		}
		v18 = sub_1400B7660(&v19);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v18 + 8), 0, 0i64);
		if ((_QWORD)v23)
			sub_14018B900(v23, 0);
		sub_1400B7390(&v19);
	}
	return 0i64;
}
// 1405C1AE0: variable 'v6' is possibly undefined
// 1405C1BF1: variable 'v14' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 1405C1AB0: using guessed type char var_E0[8];

