//----- (00000001403511C0) ----------------------------------------------------
__int64 __fastcall sub_1403511C0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rbx
	unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

	v6 = a2;
	v2 = qword_140C65878;
	v3 = (*(__int64(__fastcall**)(unsigned int*))(qword_140C65878 + 1224))(&v6);
	v4 = *(_QWORD**)(*(_QWORD*)(v2 + 1216) + 8 * (v3 % *(_QWORD*)(v2 + 1208)));
	if (!v4)
		return sub_14024A000(v6);
	while (v3 != *v4 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v2 + 1232))(&v6, v4 + 2))
	{
		v4 = (_QWORD*)v4[1];
		if (!v4)
			return sub_14024A000(v6);
	}
	if (v4 == (_QWORD*)-24i64)
		return sub_14024A000(v6);
	else
		return *(_QWORD*)(v4[3] + 8i64);
}
// 140C65878: using guessed type __int64 qword_140C65878;

