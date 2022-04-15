//----- (0000000140153650) ----------------------------------------------------
__int64 __fastcall sub_140153650(__int64 a1, __int64 a2, __int64 a3, _DWORD* a4, _WORD* a5, _DWORD* a6)
{
	_QWORD* v6; // rsi
	__int64 v8; // rcx
	__int64 v12; // rcx
	_QWORD* v13; // rbx
	__int64 result; // rax
	__int64 v15; // rax

	v6 = (_QWORD*)(a1 + 104);
	v8 = *(_QWORD*)(a1 + 104);
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*v6 = 0i64;
	}
	v12 = *(_QWORD*)(a1 + 112);
	v13 = (_QWORD*)(a1 + 112);
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*v13 = 0i64;
	}
	if ((*(int(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
		qword_140C65670,
		a3,
		0i64,
		0i64,
		0,
		256,
		0,
		0,
		a1 + 112) < 0)
		return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
			qword_140C65670,
			a2,
			a1 + 88);
	*(_DWORD*)(a1 + 120) = *a4;
	*(_DWORD*)(a1 + 124) = a4[1];
	result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, _DWORD, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 80i64))(
		qword_140C65670,
		a2,
		0i64,
		0i64,
		0,
		256,
		0,
		0,
		v6);
	if ((int)result >= 0)
	{
		if (!a5)
			goto LABEL_19;
		v15 = 0i64;
		if (!*a5)
			goto LABEL_19;
		do
			++v15;
		while (a5[v15]);
		if (v15
			&& (result = (*(__int64(__fastcall**)(__int64, _WORD*, _QWORD, _QWORD, _DWORD, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
				qword_140C65670,
				a5,
				0i64,
				0i64,
				0,
				256,
				0,
				0,
				a1 + 128),
				(int)result < 0))
		{
			if (*v13)
			{
				result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v13 + 8i64))(*v13);
				*v13 = 0i64;
			}
			if (*v6)
			{
				result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 8i64))(*v6);
				*v6 = 0i64;
			}
		}
		else
		{
		LABEL_19:
			*(_DWORD*)(a1 + 136) = *a6;
			*(_DWORD*)(a1 + 140) = a6[1];
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 168i64))(
				qword_140C65670,
				a1 + 88);
		}
	}
	else if (*v13)
	{
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v13 + 8i64))(*v13);
		*v13 = 0i64;
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

