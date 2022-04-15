//----- (00000001406540C0) ----------------------------------------------------
__int64 __fastcall sub_1406540C0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // edx
	__int64 v5; // rcx
	int v6; // r8d
	_DWORD* v7; // rcx
	__int64 result; // rax
	_DWORD* v9; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0 && *(_DWORD*)(v3 + 60))
	{
		v4 = 0;
		v5 = *(_QWORD*)(qword_140C65898 + 29272);
		v6 = 0;
		if (!v5 || !*(_DWORD*)(v5 + 20))
			v6 = 1;
		v7 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		LOBYTE(v4) = v6 != 0;
		v7[2] = 1;
		*v7 = v4;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v9 = *(_DWORD**)(a1 + 16);
		*v9 = 0;
		v9[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

