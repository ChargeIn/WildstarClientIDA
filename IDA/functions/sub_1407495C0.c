//----- (00000001407495C0) ----------------------------------------------------
__int64 __fastcall sub_1407495C0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	unsigned int v4; // eax
	__int16 v5; // di
	__int64 v6; // rcx
	_DWORD* v7; // rcx
	int v9; // eax
	__int64 v10; // rcx
	_DWORD* v11; // rax

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(v2 + 684)
		|| (unsigned int)sub_1403BB8D0())
	{
		v11 = *(_DWORD**)(a1 + 16);
		*v11 = 0;
		v11[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		v3 = sub_1400E93D0(a1);
		v4 = sub_1400F26A0(v3 + 384, 1);
		v5 = v4;
		if (sub_1401FD7A0(v4))
		{
			v9 = sub_1403D1B10(v6, v5);
			v10 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v10 + 8) = 3;
			*(double*)v10 = (double)v9;
		}
		else
		{
			v7 = *(_DWORD**)(a1 + 16);
			*v7 = 0;
			v7[2] = 1;
		}
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 14074964B: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

