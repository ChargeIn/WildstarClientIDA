//----- (00000001400BC4A0) ----------------------------------------------------
__int64 __fastcall sub_1400BC4A0(__int64 a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
	int v7; // [rsp+40h] [rbp+8h] BYREF

	sub_1400B9D30((_QWORD*)(a1 + 8));
	sub_1400B9D30((_QWORD*)(a1 + 80));
	v2 = (_QWORD*)(a1 + 304);
	v3 = 8i64;
	do
	{
		if (*v2)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v2 = 0i64;
		}
		v2[1] = 0i64;
		v2 += 3;
		--v3;
	} while (v3);
	sub_1400BA2B0(a1);
	v7 = 1065353216;
	v6[0] = a1 + 496;
	v6[1] = 4i64;
	(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, _QWORD*), __int64*))(*(_QWORD*)qword_140C65848
		+ 144i64))(
			qword_140C65848,
			sub_1400BA9B0,
			v6);
	(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64), int*))(*(_QWORD*)qword_140C65848 + 144i64))(
		qword_140C65848,
		sub_1400BA9D0,
		&v7);
	return sub_140198F50(v4, (int*)L"music");
}
// 1400BC55F: variable 'v4' is possibly undefined
// 140A14270: using guessed type wchar_t aMusic[6];
// 140C65848: using guessed type __int64 qword_140C65848;

