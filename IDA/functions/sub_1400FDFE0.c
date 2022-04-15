//----- (00000001400FDFE0) ----------------------------------------------------
__int64 __fastcall sub_1400FDFE0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdi
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	_QWORD* v6; // rbx
	_QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
	char v9; // [rsp+30h] [rbp-18h]

	v3 = 0i64;
	v8[0] = a2;
	v8[1] = 0i64;
	v9 = 0;
	v4 = (*(__int64(__fastcall**)(_QWORD*))(a1 + 24))(v8);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 8 * (v4 % *(_QWORD*)(a1 + 8)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(_QWORD*, _QWORD*))(a1 + 32))(v8, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return v3;
		}
		v6 = v5 + 5;
		if (v6)
		{
			if (*v6)
			{
				(**(void(__fastcall***)(_QWORD)) * v6)(*v6);
				v3 = *v6;
			}
			if (v3)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		}
	}
	return v3;
}
// 1400FDFE0: using guessed type _QWORD var_28[2];

