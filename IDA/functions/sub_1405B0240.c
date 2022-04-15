//----- (00000001405B0240) ----------------------------------------------------
int* __fastcall sub_1405B0240(__int64 a1)
{
	int* result; // rax
	_QWORD* v3; // rdi
	int* v4; // rax
	int* v5; // rax
	_QWORD* v6; // rax
	int* v7; // rax
	_QWORD* v8; // rdi
	int v9; // edx
	int* v10; // rax
	int* v11; // rax
	_QWORD* v12; // rax
	int* v13; // rax
	__int64 v14; // rax
	int* v15; // rax
	__int64 v16; // rcx
	int* v17; // rdi
	__int64 v18[2]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v19[2]; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v20[24]; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v21; // [rsp+120h] [rbp+20h]
	int* v22; // [rsp+130h] [rbp+30h]
	int v23[20]; // [rsp+140h] [rbp+40h] BYREF

	if (*(_DWORD*)(a1 + 8) == *(_DWORD*)(qword_140C65898 + 29952)
		&& *(_QWORD*)(a1 + 16) == *(_QWORD*)(qword_140C65898 + 29960))
	{
		return *(int**)(a1 + 56);
	}
	result = *(int**)(a1 + 488);
	if (!result)
	{
		if (*(_QWORD*)(a1 + 480))
		{
			sub_1400B7090((__int64)v20, 546512);
			v3 = 0i64;
			v22 = 0i64;
			v21 = 0i64;
			v20[0] = (__int64)off_140B69230;
			v4 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v21 = v4;
			*((_QWORD*)&v21 + 1) = v4;
			v22 = v4 + 4;
			if (v4)
				*(_WORD*)v4 = 0;
			v5 = sub_14018B280(96i64, 0);
			if (v5)
				v6 = (_QWORD*)sub_1404DDB40((__int64)v5, *(int**)(a1 + 56));
			else
				v6 = 0i64;
			sub_1400B7480((__int64)v20, v6);
			v7 = sub_14018B280(96i64, 0);
			if (v7)
				v3 = (_QWORD*)sub_1404DDB40((__int64)v7, *(int**)(a1 + 480));
			sub_1400B7480((__int64)v20, v3);
		}
		else
		{
			v8 = 0i64;
			v9 = *(_DWORD*)(qword_140C635F0 + 5760);
			v18[1] = *(_QWORD*)(a1 + 32);
			LODWORD(v18[0]) = v9;
			v19[1] = (__int64)sub_1405B0B60;
			v19[0] = a1;
			if (!(unsigned int)sub_1403F82F0(qword_140C65898, 4, v18, v23, 0x21u, v19, 0i64))
				return *(int**)(a1 + 56);
			sub_1400B7090((__int64)v20, 546512);
			v20[0] = (__int64)off_140B69230;
			v21 = 0i64;
			v22 = 0i64;
			v10 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v21 = v10;
			*((_QWORD*)&v21 + 1) = v10;
			v22 = v10 + 4;
			if (v10)
				*(_WORD*)v10 = 0;
			v11 = sub_14018B280(96i64, 0);
			if (v11)
				v12 = (_QWORD*)sub_1404DDB40((__int64)v11, *(int**)(a1 + 56));
			else
				v12 = 0i64;
			sub_1400B7480((__int64)v20, v12);
			v13 = sub_14018B280(96i64, 0);
			if (v13)
				v8 = (_QWORD*)sub_1404DDB40((__int64)v13, v23);
			sub_1400B7480((__int64)v20, v8);
			*(_QWORD*)(a1 + 480) = sub_14018E9C0(v23);
		}
		v14 = sub_1400B7660(v20);
		v15 = sub_14018E9C0(*(int**)(v14 + 8));
		v16 = v21;
		*(_QWORD*)(a1 + 488) = v15;
		v17 = v15;
		if (v16)
			sub_14018B900(v16, 0);
		sub_1400B7390(v20);
		return v17;
	}
	return result;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405B0240: using guessed type int var_60[20];

