//----- (000000014043CA00) ----------------------------------------------------
__int64 __fastcall sub_14043CA00(__int64 a1, int a2)
{
	__int64 v2; // r9
	__int64* v3; // rax
	_QWORD* v4; // rcx
	__int64 result; // rax
	int v6; // edi
	void(__fastcall * **v7)(_QWORD); // rcx
	__int64 v8; // rcx
	__int64 v9; // rbx
	unsigned int v10; // eax

	v2 = 0i64;
	v3 = *(__int64**)qword_140C7CC88;
	v4 = *(_QWORD**)qword_140C7CC88;
	if (*(_QWORD*)qword_140C7CC88 == qword_140C7CC88)
		return 2147500037i64;
	do
	{
		v4 = (_QWORD*)*v4;
		++v2;
	} while (v4 != (_QWORD*)qword_140C7CC88);
	if (!v2)
		return 2147500037i64;
	if (v3 == (__int64*)qword_140C7CC88)
		return 2147500037i64;
	while (*((_DWORD*)v3 + 4) != a2)
	{
		v3 = (__int64*)*v3;
		if (v3 == (__int64*)qword_140C7CC88)
			return 2147500037i64;
	}
	v6 = *((_DWORD*)v3 + 18);
	if (!v6)
		return 2147500037i64;
	v7 = (void(__fastcall***)(_QWORD))qword_140C7CD78;
	if (qword_140C7CD78)
		return sub_140712C00(v7, v6, (__int64)sub_14043CBD0, (__int64)dword_140C7CC70);
	result = sub_1407129A0(&qword_140C7CD78);
	if ((int)result >= 0)
	{
		v8 = qword_140C7CD78;
		v9 = *(_QWORD*)(qword_140C7CD78 + 16);
		if (v9)
		{
			v10 = sub_1400518A0(qword_140C63628, 104, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 80i64))(v9, v10);
			v8 = qword_140C7CD78;
		}
		sub_140712CE0(v8);
		(**(void(__fastcall***)(__int64))qword_140C7CD78)(qword_140C7CD78);
		v7 = (void(__fastcall***)(_QWORD))qword_140C7CD78;
		if (qword_140C7CD78)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C7CD78 + 8i64))(qword_140C7CD78);
			v7 = (void(__fastcall***)(_QWORD))qword_140C7CD78;
		}
		return sub_140712C00(v7, v6, (__int64)sub_14043CBD0, (__int64)dword_140C7CC70);
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C7CC70: using guessed type _DWORD dword_140C7CC70[2];
// 140C7CC88: using guessed type __int64 qword_140C7CC88;
// 140C7CD78: using guessed type __int64 qword_140C7CD78;

