//----- (0000000140690AA0) ----------------------------------------------------
__int64 __fastcall sub_140690AA0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int16* v10; // rax
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	if (!*(_QWORD*)(qword_140C65898 + 120))
		goto LABEL_18;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_18;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		goto LABEL_18;
	v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
		qword_140C65980,
		**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
		0i64);
	v5 = v4;
	if (!v4)
		goto LABEL_18;
	if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4))
		goto LABEL_18;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5))
		goto LABEL_18;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 40i64))(v5);
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 104i64))(v6))
		goto LABEL_18;
	if (!*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 328i64))(v5) + 64))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_19:
		a1[2] += 16i64;
		return 1i64;
	}
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 328i64))(v5);
	v8 = sub_14020FD40(*(_DWORD*)(v7 + 64));
	if (!v8)
	{
	LABEL_18:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_19;
	}
	v10 = sub_14034BDD0(v9, *(_DWORD*)(v8 + 24));
	v11 = (unsigned __int64*)sub_14018F0E0(&v14, (unsigned __int16*)v10)[1];
	if (v11)
	{
		v12 = -1i64;
		do
			++v12;
		while (*((_BYTE*)v11 + v12));
		sub_140058710((__int64)a1, v11, v12);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v15)
	{
		sub_14018B900(v15, 0);
		return 1i64;
	}
	return 1i64;
}
// 140690B8B: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

