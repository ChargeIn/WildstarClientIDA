//----- (000000014057F730) ----------------------------------------------------
void __fastcall sub_14057F730(__int64 a1, _DWORD* a2)
{
	void(__fastcall * **v4)(_QWORD); // rax
	__int64 v5; // rbx
	void(__fastcall * **v6)(_QWORD); // rdi
	_DWORD* v7; // rax
	void(__fastcall * **v8)(_QWORD); // [rsp+60h] [rbp+8h] BYREF

	v8 = 0i64;
	if ((unsigned int)sub_14058F720(a1 + 664, a1 + 704, &v8))
	{
		v5 = (__int64)v8;
	}
	else
	{
		v4 = (void(__fastcall***)(_QWORD))sub_1403ACBB0(qword_140C65898 + 160, *(_QWORD*)(a1 + 704));
		v5 = (__int64)v8;
		v6 = v4;
		if (v8 != v4)
		{
			if (v4)
				(**v4)(v4);
			if (v5)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			v5 = (__int64)v6;
		}
	}
	if (v5
		&& (v7 = (_DWORD*)(*(__int64(__fastcall**)(__int64, void(__fastcall****)(_QWORD)))(*(_QWORD*)v5 + 32i64))(
			v5,
			&v8),
			*v7 == *(_DWORD*)(a1 + 712))
		&& v7[1] == *(_DWORD*)(a1 + 716))
	{
		sub_14057F0B0((__int64*)a1, a1 + 712, *(_DWORD*)(a1 + 720), a2, 0);
		*(_QWORD*)(a1 + 704) = 0i64;
		*(_DWORD*)(a1 + 712) = 300;
		*(_DWORD*)(a1 + 716) = -1;
		*(_DWORD*)(a1 + 720) = 0;
	}
	else
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildResult", "ZSii", a1, 0i64, 0, 69);
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
}
// 140C65898: using guessed type __int64 qword_140C65898;

