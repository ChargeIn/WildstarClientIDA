//----- (000000014051B9E0) ----------------------------------------------------
__int64 __fastcall sub_14051B9E0(__int64 a1, _QWORD* a2)
{
	unsigned int v2; // r8d
	__int64 v4; // rdx
	unsigned __int64 v5; // r9
	__int64 v6; // rdx
	__int64 v7; // rax

	v2 = 0;
	v4 = qword_140C63650;
	*(_DWORD*)(a1 + 16) = 0;
	v5 = *(_QWORD*)(v4 + 768);
	if (v5)
	{
		v6 = *(_QWORD*)(v4 + 760);
		v7 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) == a2)
				break;
			v7 = ++v2;
		} while (v2 < v5);
	}
	if (!*(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 216i64))
		sub_140056570(a2, 3u, "must be at least 1 C.R.E.D.D. to redeem");
	*(_DWORD*)(a1 + 16) = 1;
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63650: using guessed type __int64 qword_140C63650;

