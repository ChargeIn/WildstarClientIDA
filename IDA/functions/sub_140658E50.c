//----- (0000000140658E50) ----------------------------------------------------
__int64 __fastcall sub_140658E50(__int64 a1)
{
	int v1; // ebx
	int v3; // esi
	int* v4; // rax
	__int64 v5; // rax
	_DWORD* v6; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = 0;
	v4 = (int*)sub_1406622C0(a1, 1);
	if (v4)
	{
		v5 = sub_1403D90D0(qword_140C65898, *v4);
		if (v5)
			LOBYTE(v3) = *(_QWORD*)(v5 + 6184) != 0i64;
	}
	v6 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v3 != 0;
	v6[2] = 1;
	result = 1i64;
	*v6 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

