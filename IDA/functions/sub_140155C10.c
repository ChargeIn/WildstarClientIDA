//----- (0000000140155C10) ----------------------------------------------------
__int64 __fastcall sub_140155C10(__int64* a1, unsigned int a2, int a3)
{
	__int64 v5; // rbx
	__int64 v7; // rcx
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int(__fastcall * **v9)(_QWORD, void*, __int64**); // [rsp+28h] [rbp-10h] BYREF
	__int64* v10; // [rsp+40h] [rbp+8h] BYREF
	__int64* v11; // [rsp+58h] [rbp+20h] BYREF

	v10 = a1;
	v9 = 0i64;
	if ((***(int(__fastcall****)(_QWORD, void*, __int64*))(qword_140C63650 + 672))(
		*(_QWORD*)(qword_140C63650 + 672),
		&unk_140B5C788,
		&v8) >= 0)
	{
		(*(void(__fastcall**)(__int64, _QWORD, int(__fastcall****)(_QWORD, void*, __int64**)))(*(_QWORD*)v8 + 48i64))(
			v8,
			a2,
			&v9);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
	}
	v5 = (__int64)v9;
	if (!v9)
		return 2147942487i64;
	v10 = 0i64;
	v11 = 0i64;
	if ((**v9)(v9, &unk_140B5C798, &v10) >= 0)
	{
		sub_1401563A0(qword_140C63650 + 200, v10);
		(*(void(__fastcall**)(__int64*))(*v10 + 16))(v10);
	}
	if ((**(int(__fastcall***)(__int64, void*, __int64**))v5)(v5, &unk_140B5C7B8, &v11) >= 0)
	{
		v7 = qword_140C63650;
		if (a3)
			++* (_DWORD*)(qword_140C63650 + 656);
		sub_140156450(v7 + 200, v11);
		(*(void(__fastcall**)(__int64*))(*v11 + 16))(v11);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

