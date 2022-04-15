//----- (00000001403A9510) ----------------------------------------------------
__int64 __fastcall sub_1403A9510(__int64 a1, int* a2)
{
	__int64 v4; // rbx
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rdi
	int v8; // ebx
	__int64 v9; // rcx
	int* v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int16* v13; // rbx
	__int64 v14; // rax
	__int64(__fastcall * *v16)(); // [rsp+30h] [rbp-E8h] BYREF
	char v17[8]; // [rsp+38h] [rbp-E0h] BYREF
	_WORD* v18; // [rsp+40h] [rbp-D8h]
	_WORD* v19; // [rsp+48h] [rbp-D0h]
	__int128 v20; // [rsp+F0h] [rbp-28h]
	int* v21; // [rsp+100h] [rbp-18h]

	v4 = sub_1407A0FD0(qword_140C65B70, *a2);
	sub_1400B6F30((__int64)&v16);
	v20 = 0i64;
	v16 = off_140B69230;
	v21 = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v20 = v5;
	*((_QWORD*)&v20 + 1) = v5;
	v21 = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	v6 = sub_14018B280(96i64, 0);
	v7 = (__int64)v6;
	if (v6)
	{
		v8 = *(_DWORD*)(*(_QWORD*)(v4 + 8) + 16i64);
		sub_1400B6390(v6);
		*(_QWORD*)v7 = off_140B69170;
		*(_DWORD*)(v7 + 88) = 1;
		sub_1400B6D70(v7, (__int64)L"name", v8);
	}
	else
	{
		v7 = 0i64;
	}
	sub_1400B7480((__int64)&v16, (_QWORD*)v7);
	v10 = (int*)sub_14034BDD0(v9, 751824);
	if (v10)
	{
		v12 = 0i64;
		if (*(_WORD*)v10)
		{
			do
				++v12;
			while (*((_WORD*)v10 + v12));
		}
		sub_14001C480((__int64)v17, v10, (int*)((char*)v10 + 2 * v12));
	}
	else if (v18 != v19)
	{
		*v18 = 0;
		v19 = v18;
	}
	v13 = sub_14034BDD0(v11, 4829);
	v14 = sub_1400B7660(&v16);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v14 + 8), 0, (int*)v13);
	sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "VanityPetUnlocked", "i", (unsigned int)*a2);
	if ((_QWORD)v20)
		sub_14018B900(v20, 0);
	sub_1400B7390(&v16);
	return 0i64;
}
// 1403A95FC: variable 'v9' is possibly undefined
// 1403A964D: variable 'v11' is possibly undefined
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1403A9510: using guessed type char var_E0[8];

