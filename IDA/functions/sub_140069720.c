//----- (0000000140069720) ----------------------------------------------------
__int64 __fastcall sub_140069720(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rax
	__int64 v4; // rdx
	int v5; // ecx
	int v6; // eax
	__int64 v7; // r8
	__int64 result; // rax
	int v9[4]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v10; // [rsp+30h] [rbp-28h]
	int v11[8]; // [rsp+38h] [rbp-20h] BYREF

	v1 = *(_QWORD*)(a1 + 48);
	v3 = sub_140065780(a1);
	sub_140065950(a1, v3, 0);
	v4 = *(_QWORD*)v1;
	v5 = *(_DWORD*)(v1 + 60) + 1;
	v9[2] = *(_DWORD*)(v1 + 60);
	v6 = *(unsigned __int8*)(v4 + 115);
	v10 = -1i64;
	v9[0] = 6;
	if (v5 > v6)
	{
		if (v5 >= 250)
			sub_140062CF0(*(_QWORD*)(v1 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v1 + 24) + 16i64));
		*(_BYTE*)(v4 + 115) = v5;
	}
	++* (_DWORD*)(v1 + 60);
	v7 = *(_QWORD*)(a1 + 48);
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v7 + 48i64)
		+ 16i64 * *(unsigned __int16*)(v7 + 2i64 * (unsigned __int8)++ * (_BYTE*)(v7 + 74) + 194)
		+ 8) = *(_DWORD*)(v7 + 48);
	sub_140067170(a1, (__int64)v11, 0, *(_DWORD*)(a1 + 4));
	sub_14006ACC0(v1, v9, v11);
	result = *(unsigned int*)(v1 + 48);
	*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v1 + 48i64)
		+ 16i64 * *(unsigned __int16*)(v1 + 2i64 * *(unsigned __int8*)(v1 + 74) + 194)
		+ 8) = result;
	return result;
}
// 140069720: using guessed type int var_20[8];

