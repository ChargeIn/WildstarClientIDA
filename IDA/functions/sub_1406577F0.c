//----- (00000001406577F0) ----------------------------------------------------
__int64 __fastcall sub_1406577F0(_QWORD* a1)
{
	int* v2; // rax
	unsigned int v3; // esi
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // eax
	__int64 v7; // rcx

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	v3 = 0;
	if (!v2 || (v4 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v5 = *(_QWORD*)(v4 + 24);
	if (v5)
	{
		if (*(_DWORD*)(v4 + 128) == 14 && *(_DWORD*)(v5 + 332))
		{
			v6 = *(_DWORD*)(v4 + 436);
			if (dword_140C636A8 <= v6)
				v3 = v6 - dword_140C636A8;
			v7 = a1[2];
			*(_DWORD*)(v7 + 8) = 3;
			*(double*)v7 = (double)(v3 / 0x3E8);
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
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

