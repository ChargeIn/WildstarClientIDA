//----- (00000001404CFB60) ----------------------------------------------------
_QWORD* __fastcall sub_1404CFB60(__int64 a1)
{
	_QWORD** v3; // rax
	_QWORD* v4; // rdi
	unsigned __int64 v5; // rdx
	_QWORD* v6; // r8

	if (!*(_QWORD*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD***)(a1 + 8);
	v4 = *v3;
	**v3 = 0i64;
	v5 = *(_QWORD*)(a1 + 16) - 1i64;
	if (*(_QWORD*)(a1 + 16) == 1i64)
	{
		sub_1403D8090((__int64*)(a1 + 8), 0i64);
	}
	else
	{
		v6 = *(_QWORD**)(a1 + 8);
		*v6 = v6[2 * v5];
		v6[1] = v6[2 * v5 + 1];
		sub_1403D8090((__int64*)(a1 + 8), v5);
		v4 = **(_QWORD***)(a1 + 8);
		v4[1] = 0i64;
		sub_1403D7F70(a1, (__int64)v4);
	}
	return v4;
}

