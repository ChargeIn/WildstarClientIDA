//----- (00000001403722D0) ----------------------------------------------------
__int64 __fastcall sub_1403722D0(__int64 a1, int a2)
{
	int v2; // ecx
	__int64 result; // rax
	int v4; // ecx
	int v5; // ecx
	int v6; // edx
	int v7; // ecx

	*(_DWORD*)(a1 + 24) = a2;
	switch (a2)
	{
	case 0:
		v2 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 56i64))(
			qword_140C65670,
			2180i64,
			1i64,
			a1 + 32);
		result = 0i64;
		if (v2 < 0)
			return (unsigned int)v2;
		return result;
	case 1:
		v4 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD*)qword_140C65670 + 64i64))(
			qword_140C65670,
			6144i64,
			0i64,
			1i64,
			a1 + 32);
		result = 0i64;
		if (v4 < 0)
			return (unsigned int)v4;
		return result;
	case 2:
		v5 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 56i64))(
			qword_140C65670,
			4900i64,
			1i64,
			a1 + 32);
		result = 0i64;
		if (v5 < 0)
			return (unsigned int)v5;
		return result;
	case 3:
		v6 = 0;
		goto LABEL_17;
	case 4:
		v6 = 1;
		goto LABEL_17;
	case 5:
		v6 = 2;
		goto LABEL_17;
	case 6:
		v6 = 3;
		goto LABEL_17;
	case 7:
		v6 = 4;
		goto LABEL_17;
	case 8:
		v6 = 5;
	LABEL_17:
		v7 = sub_140350990(*(_QWORD*)(a1 + 16), v6, (__m128**)(a1 + 32));
		result = 0i64;
		if (v7 < 0)
			result = (unsigned int)v7;
		break;
	default:
		result = 2147942487i64;
		break;
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

