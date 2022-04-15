//----- (000000014050C1D0) ----------------------------------------------------
__int64 __fastcall sub_14050C1D0(_QWORD* a1)
{
	int v3; // ebx
	__int64 v4; // rax
	__int64 v5; // rcx

	if (!*(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	v3 = *(_DWORD*)(qword_140C65898 + 25796);
	v4 = sub_1403D90D0(qword_140C65898, v3);
	if (v4 && *(_DWORD*)(v4 + 128) == 7 && (unsigned int)sub_14045B6B0(v4))
		v3 = sub_14045B6B0(v5);
	if (v3 && sub_1403D90D0(qword_140C65898, v3))
		return sub_140649870(a1, v3);
	else
		return 0i64;
}
// 14050C21B: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

