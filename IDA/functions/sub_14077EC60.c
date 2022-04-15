//----- (000000014077EC60) ----------------------------------------------------
__int64 __fastcall sub_14077EC60(__int64 a1)
{
	__int64 v1; // rdx
	int v2; // edx
	__int64 result; // rax
	__int64 v4; // rdx

	v1 = qword_140C65970;
	if (!qword_140C65970)
		goto LABEL_7;
	*(_DWORD*)(a1 + 240) = 1065353216;
	*(_OWORD*)(a1 + 208) = xmmword_140B7B240;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_OWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 148) = 0i64;
	*(_QWORD*)(a1 + 156) = 0i64;
	*(_QWORD*)(a1 + 164) = 0i64;
	*(_QWORD*)(a1 + 172) = 0i64;
	*(_QWORD*)(a1 + 180) = 0i64;
	*(_QWORD*)(a1 + 188) = 0i64;
	*(_DWORD*)(a1 + 144) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 264) = 0;
	v2 = *(_DWORD*)(v1 + 8) - 2;
	if (v2)
	{
		if (v2 == 1)
			return result;
		goto LABEL_7;
	}
	result = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 25744);
	if (!v4 || !*(_DWORD*)(v4 + 264))
	{
	LABEL_7:
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
	return result;
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

