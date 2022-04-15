//----- (00000001407785E0) ----------------------------------------------------
__int64 __fastcall sub_1407785E0(__int64 a1, int a2)
{
	__int64 v2; // rdi
	__int64 v3; // rbx
	__int64 v4; // rdx
	int* v5; // rax
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	_QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
	int* v10; // [rsp+40h] [rbp+8h] BYREF
	int v11; // [rsp+48h] [rbp+10h] BYREF
	int* v12; // [rsp+50h] [rbp+18h] BYREF

	v11 = a2;
	v2 = a1 + 24;
	v3 = a2;
	v4 = *(_QWORD*)(a1 + 32);
	v5 = (int*)v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < (int)v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = (int*)v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == (int*)v4 || (int)v3 < v5[8])
	{
		LODWORD(v9[0]) = v3;
		v9[1] = 0i64;
		v10 = v5;
		sub_14004F0D0(v2, &v12, (__int64*)&v10, v9);
		v5 = v12;
	}
	v7 = (_QWORD*)*((_QWORD*)v5 + 5);
	if (v7)
		sub_140777E10(v7);
	sub_140779270(v2, &v11);
	return (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29504) + 64i64))(
		*(_QWORD*)(qword_140C65898 + 29504),
		1029i64,
		0i64,
		v3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

