//----- (000000014047B710) ----------------------------------------------------
__int64 __fastcall sub_14047B710(_DWORD* a1, __int64 a2, double a3, double a4)
{
	__int64 v6; // r10
	__int64 v7; // rax
	int v8; // edi
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 result; // rax

	a1[48] = *(_DWORD*)(a2 + 4);
	a1[49] = *(_DWORD*)(a2 + 8);
	a1[50] = *(unsigned __int8*)(a2 + 12);
	sub_14039E4D0((__int64)a1, (__int64)a1, a3, a4);
	v6 = qword_140C65898;
	if (a1[48] && a1 == *(_DWORD**)(qword_140C65898 + 120))
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Mount", "b", 1i64);
		v6 = qword_140C65898;
	}
	a1[1578] = 1;
	v7 = *(_QWORD*)(v6 + 120);
	v8 = 0;
	if (v7 && a1[2] == *(_DWORD*)(v7 + 8))
		*(_DWORD*)(v6 + 28568) = 1;
	v9 = sub_1403D90D0(v6, *(_DWORD*)(a2 + 4));
	if (!v9)
		return 0i64;
	v10 = qword_140C65898;
	*(_DWORD*)(v9 + 6312) = 1;
	v11 = *(_QWORD*)(v10 + 120);
	if (!v11)
		return 0i64;
	LOBYTE(v8) = *(_DWORD*)(v9 + 8) == *(_DWORD*)(v11 + 8);
	result = 0i64;
	if (v8)
		*(_DWORD*)(v10 + 28568) = 1;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

