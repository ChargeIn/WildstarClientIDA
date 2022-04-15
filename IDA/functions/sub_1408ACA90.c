//----- (00000001408ACA90) ----------------------------------------------------
__int64 __fastcall sub_1408ACA90(_QWORD* a1, __int64 a2)
{
	_QWORD* v3; // rdi
	_BYTE* v4; // r12
	_QWORD* v5; // rsi
	__int64 v6; // r14
	__int64 v7; // rbp
	__int64 v8; // r15
	__int64 result; // rax

	v3 = a1;
	if (a1[87])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v3[87] = 0i64;
	}
	if (v3[88])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		v3[88] = 0i64;
	}
	sub_1408AFBB0(v3 + 42, a2);
	v4 = (char*)v3 + 750;
	v5 = v3 + 80;
	v6 = (__int64)(v3 + 18);
	v7 = (__int64)(v3 + 56);
	v8 = 6i64;
	do
	{
		sub_1408B0500(v7 - 96, a2);
		sub_1408B0500(v7, a2);
		sub_1408B0500(v7 + 96, a2);
		if (*v4)
			sub_1408AF370((__int64)v3, a2);
		result = sub_1408AF370(v6, a2);
		if (*v5)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
			*v5 = 0i64;
		}
		v7 += 16i64;
		v3 += 3;
		v6 += 32i64;
		++v5;
		--v8;
	} while (v8);
	return result;
}

