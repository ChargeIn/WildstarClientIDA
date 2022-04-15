//----- (0000000140653700) ----------------------------------------------------
__int64 __fastcall sub_140653700(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // r8
	int v4; // edx
	__int64 v5; // rcx
	int v6; // eax
	_DWORD* v7; // rcx
	bool v8; // zf
	__int64 result; // rax
	_DWORD* v10; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = 0;
		v5 = *(_QWORD*)(qword_140C65898 + 120);
		v6 = 0;
		if (v5)
			LOBYTE(v6) = *(_DWORD*)(v3 + 8) == *(_DWORD*)(v5 + 8);
		v7 = *(_DWORD**)(a1 + 16);
		v8 = v6 == 0;
		result = 1i64;
		LOBYTE(v4) = !v8;
		v7[2] = 1;
		*v7 = v4;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v10 = *(_DWORD**)(a1 + 16);
		*v10 = 0;
		v10[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

