//----- (0000000140384D10) ----------------------------------------------------
__int64 __fastcall sub_140384D10(__int64 a1)
{
	unsigned int v2; // ebx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 result; // rax

	(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(qword_140C65670, 1i64, 0i64);
	v2 = 0;
	if (!*(_QWORD*)(a1 + 1032))
		return 0i64;
	v3 = 0i64;
	while (1)
	{
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 1040) + 8 * v3);
		if (v4)
		{
			result = sub_140393280(v4);
			if ((int)result < 0)
				break;
		}
		v3 = ++v2;
		if ((unsigned __int64)v2 >= *(_QWORD*)(a1 + 1032))
			return 0i64;
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

