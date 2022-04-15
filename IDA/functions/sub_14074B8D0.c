//----- (000000014074B8D0) ----------------------------------------------------
__int64 __fastcall sub_14074B8D0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rsi
	unsigned __int64 v5; // rbx
	__int64 v6; // r14
	__int64 v7; // rcx

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v4 = *(_QWORD*)(qword_140C65898 + 26392);
	if (v4)
	{
		v5 = 0i64;
		if (*(_QWORD*)(v4 + 32))
		{
			v6 = 0i64;
			do
			{
				v7 = a1[2];
				*(_DWORD*)(v7 + 8) = 3;
				*(double*)v7 = (double)((int)v5 + 1);
				a1[2] += 16i64;
				sub_14074B1D0(a1, v6 + *(_QWORD*)(v4 + 24));
				sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
				++v5;
				v6 += 80i64;
			} while (v5 < *(_QWORD*)(v4 + 32));
		}
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

