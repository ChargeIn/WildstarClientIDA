//----- (00000001400D7BD0) ----------------------------------------------------
__int64 __fastcall sub_1400D7BD0(_QWORD* a1)
{
	unsigned int v1; // edx
	unsigned __int64 v2; // r8
	__int64 v3; // rax
	__int64 v4; // rax

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v3) + 400i64) == a1)
				break;
			v3 = ++v1;
		} while (v1 < v2);
	}
	v4 = sub_1400D66A0(a1, 1u);
	if (v4)
		sub_1400C6B20(v4);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

