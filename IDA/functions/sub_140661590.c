//----- (0000000140661590) ----------------------------------------------------
__int64 __fastcall sub_140661590(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	int v4; // eax
	_DWORD* v5; // rcx
	bool v6; // zf
	__int64 result; // rax
	_DWORD* v8; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = sub_14043EDC0(qword_140C65898, *(_DWORD*)(qword_140C65898 + 29008), *(_DWORD*)(v3 + 6120));
		v5 = *(_DWORD**)(a1 + 16);
		v6 = v4 == 0;
		v5[2] = 1;
		result = 1i64;
		*v5 = !v6;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v8 = *(_DWORD**)(a1 + 16);
		*v8 = 0;
		v8[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

