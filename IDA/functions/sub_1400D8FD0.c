//----- (00000001400D8FD0) ----------------------------------------------------
__int64 __fastcall sub_1400D8FD0(_QWORD* a1)
{
	unsigned int v2; // edx
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	v5 = sub_1400D66A0(a1, 1u);
	if (v5)
	{
		v6 = sub_14014EBC0((__int64)a1, 2);
		if (v6)
			sub_1400CC680(v5, v6);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

