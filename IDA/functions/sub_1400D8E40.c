//----- (00000001400D8E40) ----------------------------------------------------
__int64 __fastcall sub_1400D8E40(_QWORD* a1)
{
	unsigned int v2; // edx
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	__int64 result; // rax

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
	result = sub_1400D66A0(a1, 1u);
	if (result)
		return sub_14014EAB0(a1, result + 64);
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

