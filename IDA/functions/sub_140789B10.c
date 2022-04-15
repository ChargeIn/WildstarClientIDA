//----- (0000000140789B10) ----------------------------------------------------
__int64 __fastcall sub_140789B10(__int64 a1)
{
	int v1; // edx
	__int64 result; // rax

	v1 = *(_DWORD*)(a1 + 80);
	switch (v1)
	{
	case 0:
		return 1213i64;
	case 2:
		return 1118i64;
	case 4:
		return 1120i64;
	}
	result = 1122i64;
	if (v1 != 7)
		return 0i64;
	return result;
}

