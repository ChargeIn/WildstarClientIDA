//----- (0000000140652BF0) ----------------------------------------------------
__int64 __fastcall sub_140652BF0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		sub_140649870(a1, *(_DWORD*)(v3 + 264));
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

