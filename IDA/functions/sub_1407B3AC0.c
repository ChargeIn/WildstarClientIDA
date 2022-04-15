//----- (00000001407B3AC0) ----------------------------------------------------
__int64 __fastcall sub_1407B3AC0(_QWORD* a1, __int64 a2)
{
	void(__fastcall * *v5)(__int64); // rax
	__int64* v6; // rdx
	__int64 v7; // [rsp+38h] [rbp+10h] BYREF

	if (!a2)
		return 2147942487i64;
	v5 = *(void(__fastcall***)(__int64))a2;
	v7 = a2;
	(*v5)(a2);
	v6 = (__int64*)a1[4];
	if (v6 == (__int64*)a1[5])
	{
		sub_1405B1D60(a1 + 2, v6, &v7);
	}
	else
	{
		if (v6)
		{
			*v6 = a2;
			(**(void(__fastcall***)(__int64))a2)(a2);
		}
		a1[4] += 8i64;
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	return 0i64;
}

