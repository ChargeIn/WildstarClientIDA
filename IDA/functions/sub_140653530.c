//----- (0000000140653530) ----------------------------------------------------
__int64 __fastcall sub_140653530(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	int v6; // esi
	__int64 v7; // rax
	_DWORD* v8; // rcx
	bool v9; // zf
	__int64 result; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		return 0i64;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	v4 = v3;
	if (!v3)
		return 0i64;
	v5 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v3 + 5632));
	v6 = 0;
	if (!v5 && *(_QWORD*)(qword_140C65898 + 120) == v4)
	{
		v7 = sub_14039DF50(qword_140C65898);
		if (v7)
			v5 = sub_1404695E0(v7);
		else
			v5 = 0i64;
	}
	v8 = *(_DWORD**)(a1 + 16);
	v9 = v5 == 0;
	result = 1i64;
	LOBYTE(v6) = !v9;
	v8[2] = 1;
	*v8 = v6;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

