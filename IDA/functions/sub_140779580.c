//----- (0000000140779580) ----------------------------------------------------
const void**** __fastcall sub_140779580(__int64 a1)
{
	signed int v2; // edi
	const void***** v3; // rbx
	const void**** result; // rax
	__int64 i; // rcx
	const void*** v6; // rbx
	int j; // edi

	*(_QWORD*)a1 = off_140B769C0;
	sub_140779660(a1, 0i64);
	v2 = 0;
	v3 = (const void*****)(a1 + 24);
	do
	{
		result = (const void****)v2;
		if ((unsigned __int64)v2 < 5)
		{
			for (i = (__int64)*(v3 - 1); i; i = (__int64)*(v3 - 1))
				(*(void(__fastcall**)(__int64))(*(_QWORD*)i + 32i64))(i);
			for (result = *v3; *v3; result = *v3)
				((void(__fastcall*)(const void****))(*result)[4])(result);
		}
		++v2;
		v3 += 2;
	} while ((unsigned int)v2 < 5);
	for (;
		*(_QWORD*)(a1 + 96);
		result = (const void****)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 96) + 32i64))(*(_QWORD*)(a1 + 96)))
	{
		;
	}
	v6 = (const void***)(a1 + 96);
	for (j = 4; j >= 0; --j)
	{
		v6 -= 2;
		if (v6[1])
			result = sub_1401A4A00(v6 + 1);
		if (*v6)
			result = sub_1401A4A00(v6);
	}
	return result;
}
// 140B769C0: using guessed type __int64 (__fastcall *off_140B769C0[3])();

