//----- (000000014086B410) ----------------------------------------------------
__int64 __fastcall sub_14086B410(__int64 a1, __int64 a2)
{
	unsigned int v2; // edi
	char v3; // r9
	__int64 v4; // r8
	__int64 v6; // rcx
	_QWORD* v7; // rdx
	__int64 result; // rax
	bool v9; // zf
	__int64 v10; // rcx

	v2 = *(_DWORD*)(a2 + 24);
	v3 = 0;
	v4 = a2;
	if (*(_QWORD*)(a2 + 64) == a1)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 48i64))(a2, 0i64);
		sub_140859270((__int64*)(a1 + 168), v2);
		v3 = 1;
	}
	v6 = *(_QWORD*)(a1 + 312);
	v7 = 0i64;
	result = v6;
	if (v6)
	{
		while (*(_DWORD*)(result + 8) != v2)
		{
			v7 = (_QWORD*)result;
			result = *(_QWORD*)result;
			if (!result)
				goto LABEL_13;
		}
		v9 = result == v6;
		v10 = *(_QWORD*)result;
		if (v9)
			*(_QWORD*)(a1 + 312) = v10;
		else
			*v7 = v10;
		if (result == *(_QWORD*)(a1 + 320))
			*(_QWORD*)(a1 + 320) = v7;
		*(_QWORD*)result = *(_QWORD*)(a1 + 328);
		--* (_DWORD*)(a1 + 344);
		*(_QWORD*)(a1 + 328) = result;
	}
LABEL_13:
	if (v3)
		return (*(__int64(__fastcall**)(__int64, _QWORD*, __int64))(*(_QWORD*)a1 + 16i64))(a1, v7, v4);
	return result;
}
// 14086B4B8: variable 'v4' is possibly undefined

