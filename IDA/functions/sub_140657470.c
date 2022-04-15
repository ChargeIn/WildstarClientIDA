//----- (0000000140657470) ----------------------------------------------------
__int64 __fastcall sub_140657470(_QWORD* a1)
{
	int* v2; // rax
	int v3; // ebp
	__int64 v4; // rax
	int v5; // esi
	__int64 v6; // rax
	_DWORD* v7; // rcx

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	v3 = 0;
	if (!v2 || (v4 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v5 = 0;
	if (*(_DWORD*)(v4 + 128) == 14)
	{
		if (*(_BYTE*)(v4 + 9012))
		{
			v5 = 1;
		}
		else
		{
			v6 = *(_QWORD*)(v4 + 24);
			if (*(_DWORD*)(v6 + 332) && (*(_DWORD*)(sub_1402092A0(*(_DWORD*)(v6 + 332)) + 20) & 0xFFFFFFFD) == 0)
				v5 = 1;
		}
	}
	v7 = (_DWORD*)a1[2];
	LOBYTE(v3) = v5 != 0;
	v7[2] = 1;
	*v7 = v3;
	a1[2] += 16i64;
	return 1i64;
}
// 1406574D3: conditional instruction was optimized away because rax.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;

