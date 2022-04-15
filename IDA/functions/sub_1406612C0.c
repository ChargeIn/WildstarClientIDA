//----- (00000001406612C0) ----------------------------------------------------
__int64 __fastcall sub_1406612C0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	int v5; // edx
	int v6; // eax
	bool v7; // zf
	_DWORD* v8; // rcx
	__int64 result; // rax
	_DWORD* v10; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = *(_QWORD*)(v3 + 24);
		v5 = 0;
		if (v4 && (*(_DWORD*)(v4 + 144) & 0x40000000) != 0)
		{
			v6 = 0;
		}
		else if (*(_DWORD*)(v3 + 292) || (v7 = *(_QWORD*)(v3 + 296) == 0i64, v6 = 0, !v7))
		{
			v6 = 1;
		}
		v8 = *(_DWORD**)(a1 + 16);
		v7 = v6 == 0;
		result = 1i64;
		LOBYTE(v5) = !v7;
		v8[2] = 1;
		*v8 = v5;
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

