//----- (00000001403C9B30) ----------------------------------------------------
__int64 sub_1403C9B30()
{
	__int64 result; // rax
	__int64 v1; // rdx
	__int64 v2; // rax
	__int64 v3; // rcx

	if ((dword_140DC2308 & 1) != 0)
	{
		result = (unsigned int)dword_140DC2314;
		if (dword_140DC2314)
		{
			v1 = (unsigned int)dword_140DC2310;
			goto LABEL_8;
		}
	}
	else
	{
		dword_140DC2308 |= 1u;
	}
	dword_140DC2314 = 1;
	result = sub_140200220(0x4EFu);
	if (!result)
	{
		dword_140DC2310 = 0;
		return result;
	}
	v1 = *(unsigned int*)(result + 4);
	result = (unsigned int)dword_140DC2314;
	dword_140DC2310 = v1;
LABEL_8:
	if ((_DWORD)v1)
	{
		if (!(_DWORD)result)
		{
			dword_140DC2314 = 1;
			v2 = sub_140200220(0x4EFu);
			if (v2)
				v1 = *(unsigned int*)(v2 + 4);
			else
				v1 = 0i64;
			dword_140DC2310 = v1;
		}
		result = qword_140C63628;
		v3 = *(_QWORD*)(qword_140C63628 + 720);
		if (v3)
			return (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v3 + 16i64))(
				v3,
				v1,
				0i64,
				0i64,
				0i64,
				0i64,
				0i64);
	}
	return result;
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140DC2308: using guessed type int dword_140DC2308;
// 140DC2310: using guessed type int dword_140DC2310;
// 140DC2314: using guessed type int dword_140DC2314;

