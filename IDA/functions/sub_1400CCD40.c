//----- (00000001400CCD40) ----------------------------------------------------
__int64 __fastcall sub_1400CCD40(__int64* a1, _WORD* a2)
{
	__int64 result; // rax
	__int64 v5; // rbp
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	int* v8; // rax
	__int64 v9; // rcx
	_QWORD* v10; // rbx

	result = (*(__int64(__fastcall**)(__int64*))(*a1 + 536))(a1);
	v5 = a1[85];
	v6 = 0i64;
	if (v5)
	{
		v7 = *(_QWORD*)(v5 + 8);
		if (v7)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(v5 + 8) = 0i64;
		}
	}
	if (a2 && *a2)
	{
		if (!a1[85])
		{
			v8 = sub_14018B280(104i64, 0);
			if (v8)
				v6 = sub_1400C5780(v8);
			a1[85] = (__int64)v6;
		}
		result = sub_1400E58C0(a1[4], (int*)L"CRB_InterfaceSmall");
		if (result)
		{
			v9 = *(_QWORD*)a1[85];
			if (v9)
			{
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 40i64))(v9, *(_QWORD*)(result + 96));
				return (*(__int64(__fastcall**)(_QWORD, _WORD*, __int64))(**(_QWORD**)a1[85] + 56i64))(
					*(_QWORD*)a1[85],
					a2,
					-1i64);
			}
			else
			{
				return (*(__int64(__fastcall**)(__int64, _QWORD, _WORD*, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
					qword_140C65680,
					*(_QWORD*)(result + 96),
					a2,
					-1i64,
					a1[85]);
			}
		}
	}
	else
	{
		v10 = (_QWORD*)a1[85];
		if (v10 && *v10)
		{
			result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v10 + 8i64))(*v10);
			*v10 = 0i64;
		}
	}
	return result;
}
// 140A154B8: using guessed type wchar_t aCrbInterfacesm[19];
// 140C65680: using guessed type __int64 qword_140C65680;

