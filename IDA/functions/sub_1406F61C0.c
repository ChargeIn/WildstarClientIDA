//----- (00000001406F61C0) ----------------------------------------------------
__int64 __fastcall sub_1406F61C0(__int64 a1)
{
	__int64 v1; // r9
	int v2; // edx
	__int64 result; // rax
	__int64 v4; // rax

	if (qword_140C65808 && qword_140C65898)
	{
		v1 = *(_QWORD*)(a1 + 16);
		v2 = 1;
		if (*(int*)(qword_140C65898 + 108) > 1)
			v2 = *(_DWORD*)(qword_140C65898 + 108);
		*(_DWORD*)(v1 + 8) = 3;
		result = 1i64;
		*(double*)v1 = (double)v2;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v4 = 0i64;
		*(_DWORD*)(v4 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65898: using guessed type __int64 qword_140C65898;

