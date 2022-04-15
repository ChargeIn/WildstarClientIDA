//----- (000000014045D890) ----------------------------------------------------
_DWORD* __fastcall sub_14045D890(__int64 a1, int a2, int a3)
{
	__int64 v5; // r10
	__int64 v6; // r14
	__int64 v7; // r8
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rbx
	int* v11; // rax
	__int64* v12; // rdi
	unsigned __int64 v13; // rcx
	_DWORD* result; // rax
	_QWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
	char v16[40]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v17; // [rsp+70h] [rbp+8h]
	int v18; // [rsp+80h] [rbp+18h] BYREF

	v18 = a3;
	sub_1400035B0();
	v6 = v5 + 1168;
	v7 = *(_QWORD*)(v5 + 1176);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a2)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v17 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v17 = *(_QWORD*)(v5 + 1176);
	v10 = 0i64;
	if (v17 == *(_QWORD*)(v5 + 1176))
	{
		v11 = sub_14018B280(16i64, 0);
		v12 = (__int64*)v11;
		if (v11)
		{
			*((_QWORD*)v11 + 1) = 0i64;
			*(_QWORD*)v11 = 0i64;
		}
		else
		{
			v12 = 0i64;
		}
		LODWORD(v15[0]) = a2;
		v15[1] = v12;
		sub_14004F4F0(v6, (__int64)v16, v15);
	}
	else
	{
		v12 = *(__int64**)(v17 + 40);
	}
	v13 = v12[1];
	if (!v13)
		return (_DWORD*)sub_140003460(v12, &v18);
	for (result = (_DWORD*)*v12; *result != a3; ++result)
	{
		if (++v10 >= v13)
			return (_DWORD*)sub_140003460(v12, &v18);
	}
	return result;
}
// 14045D8D7: variable 'v5' is possibly undefined
// 14045D890: using guessed type char var_28[40];

