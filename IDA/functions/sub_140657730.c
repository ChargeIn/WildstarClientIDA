//----- (0000000140657730) ----------------------------------------------------
__int64 __fastcall sub_140657730(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // ecx
	__int64 v6; // rax
	int v7; // ecx
	__int64 v8; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = *(_QWORD*)(v3 + 24);
	if (v4)
	{
		if (*(_DWORD*)(v3 + 128) == 14
			&& (v5 = *(_DWORD*)(v4 + 332)) != 0
			&& (v6 = sub_1402092A0(v5)) != 0
			&& (v7 = *(_DWORD*)(v6 + 16)) != 0)
		{
			v8 = a1[2];
			*(_DWORD*)(v8 + 8) = 3;
			*(double*)v8 = (double)v7;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

