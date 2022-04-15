//----- (000000014088D8D0) ----------------------------------------------------
__int64 __fastcall sub_14088D8D0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	__int64 v8; // rax
	_QWORD* v9; // rbx
	unsigned int v10; // edi
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rcx
	char v16[264]; // [rsp+20h] [rbp-138h] BYREF
	__int64 v17[5]; // [rsp+128h] [rbp-30h] BYREF

	sub_140890370((__int64)v16, *(_QWORD*)(a1 + 16), 0);
	if (!v17[0])
		goto LABEL_8;
	for (; a3; --a3)
		(*(void(__fastcall**)(_QWORD, char*, _QWORD))(**(_QWORD**)(a1 + 16) + 96i64))(*(_QWORD*)(a1 + 16), v16, 0i64);
	v8 = sub_1408819F0(dword_140C10F20, 32i64);
	v9 = (_QWORD*)v8;
	if (v8)
	{
		v10 = 1;
		*(_DWORD*)(v8 + 8) = 1;
		v11 = sub_1408904A0((__int64)v16, 0);
		v12 = sub_14088FAE0(v17, a4 - v11);
		v9[2] = a2;
		*v9 = v12;
		v13 = v17[0];
		v14 = *(_QWORD*)(v17[0] + 16);
		if (v14)
		{
			v9[3] = v14;
			*(_QWORD*)(v13 + 16) = v9;
		}
		else
		{
			*(_QWORD*)(v17[0] + 16) = v9;
			v9[3] = 0i64;
		}
	}
	else
	{
	LABEL_8:
		v10 = 2;
	}
	nullsub_1(v16);
	return v10;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;
// 14088D8D0: using guessed type __int64 var_30[5];

