//----- (0000000140113580) ----------------------------------------------------
__int64 __fastcall sub_140113580(_QWORD* a1, __m128* a2)
{
	__int64 result; // rax
	__m128 v3; // [rsp+30h] [rbp-18h] BYREF

	result = a1[144];
	v3 = (__m128)xmmword_140B7B240;
	if (!result || !*(_QWORD*)result)
	{
		result = a1[143];
		if (!result || !*(_QWORD*)result)
		{
			result = a1[99];
			if (!result || !*(_QWORD*)result)
			{
				result = (__int64)(a1 + 93);
				if (!a1[93])
				{
					result = a1[92];
					if (!result || !*(_QWORD*)result)
					{
						result = qword_140C63650 + 1848;
						v3 = (__m128)xmmword_140C777F0;
					}
				}
			}
		}
	}
	if (result)
	{
		if (*(_QWORD*)result)
			return sub_140103E60(
				*(_QWORD**)result,
				a2,
				&v3,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(result + 8)) * *(float*)(result + 12)));
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C777F0: using guessed type __int128 xmmword_140C777F0;
// 140113580: using guessed type __m128 var_18;

