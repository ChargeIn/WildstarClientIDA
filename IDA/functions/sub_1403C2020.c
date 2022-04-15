//----- (00000001403C2020) ----------------------------------------------------
__int64 __fastcall sub_1403C2020(__int64 a1, unsigned int a2, int a3, unsigned int a4, __int64 a5)
{
	__int64 v5; // rbx
	__int64 v8; // r14
	__int64 v9; // rcx
	_DWORD* v10; // rsi
	__int64 v11; // rsi
	__int64 v12; // rcx
	__int64 v13; // r11
	__int64 v15; // rsi
	__int64 v16; // rcx
	void(__fastcall * **v17)(_QWORD, __int64); // rcx
	char v18; // al
	__int64 v19; // [rsp+30h] [rbp-28h] BYREF
	__int64 v20; // [rsp+38h] [rbp-20h]

	v5 = qword_140C65898;
	v8 = a2;
	if (!*(_QWORD*)(qword_140C65898 + 120) || a2 >= 0x30)
		return 2147500037i64;
	v9 = a2 + 48i64 * *(unsigned int*)(qword_140C65898 + 28140);
	v10 = *(_DWORD**)(qword_140C65898 + 8 * v9 + 2752);
	if (v10
		&& (*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v10 + 8i64))(*(_QWORD*)(qword_140C65898 + 8 * v9 + 2752)) == a3
		&& v10[69] == a4)
	{
		return 0i64;
	}
	if (a3 == 4)
	{
		v11 = sub_1403C1780(v5, a4);
		if (!v11
			|| !sub_1403BB170(v5, a4)
			|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 112i64))(v11) != 4 && (unsigned int)v8 >= 0xC)
		{
			return 1i64;
		}
		v12 = v11;
	}
	else
	{
		if (a3 && (unsigned int)v8 < 0xC)
			return 1i64;
		if (a3 != 13)
			goto LABEL_21;
		if (!sub_1403C1780(v5, a4) || !sub_1403BB170(v5, a4))
			return 1i64;
		v12 = v13;
	}
	if ((*(_DWORD*)(*(_QWORD*)(sub_1405A4B80(v12, 1) + 112) + 264i64) & 0x40000000) == 0)
	{
	LABEL_21:
		v15 = sub_1403C1BF0(v5, 9, a3, a4, a5, 0);
		if (!v15 && a3)
			return 2147500037i64;
		v16 = *(_QWORD*)(v5 + 8 * (v8 + 48i64 * *(unsigned int*)(v5 + 28140)) + 2752);
		if (v16 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16))
		{
			v17 = *(void(__fastcall****)(_QWORD, __int64))(v5 + 8 * (v8 + 48i64 * *(unsigned int*)(v5 + 28140)) + 2752);
			if (v17)
				(**v17)(v17, 1i64);
		}
		*(_QWORD*)(v5 + 8 * (v8 + 48i64 * *(unsigned int*)(v5 + 28140)) + 2752) = v15;
		v19 = 0i64;
		v20 = 0i64;
		v18 = *(_BYTE*)(v5 + 28140);
		LOBYTE(v19) = v8;
		HIDWORD(v19) = a3;
		LODWORD(v20) = a4;
		BYTE4(v20) = v18;
		sub_1403F4900(v5, 0x16Au, (__int64)&v19);
		return 0i64;
	}
	return 1i64;
}
// 1403C20FF: variable 'v13' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

