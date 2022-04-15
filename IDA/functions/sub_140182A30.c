//----- (0000000140182A30) ----------------------------------------------------
_DWORD* __fastcall sub_140182A30(__int64 a1)
{
	_DWORD* v2; // rax
	_DWORD* result; // rax
	char v4; // [rsp+30h] [rbp+8h] BYREF

	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1096) + 48i64))(*(_QWORD*)(a1 + 1096)))
	{
		v2 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 1096) + 72i64))(
			*(_QWORD*)(a1 + 1096),
			0i64,
			&v4,
			2i64);
		if (v2)
		{
			*v2 = 0;
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1096) + 80i64))(*(_QWORD*)(a1 + 1096), 0i64);
		}
	}
	result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1112) + 48i64))(*(_QWORD*)(a1 + 1112));
	if (!(_DWORD)result)
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 1112) + 72i64))(
			*(_QWORD*)(a1 + 1112),
			0i64,
			&v4,
			2i64);
		if (result)
		{
			*result = -16777216;
			return (_DWORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 1112) + 80i64))(
				*(_QWORD*)(a1 + 1112),
				0i64);
		}
	}
	return result;
}

