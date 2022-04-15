//----- (00000001406D31C0) ----------------------------------------------------
_DWORD* __fastcall sub_1406D31C0(_QWORD* a1, __int64 a2, char a3)
{
	_DWORD* result; // rax
	int v6; // ecx
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // [rsp+30h] [rbp+8h] BYREF
	int v10; // [rsp+34h] [rbp+Ch]

	result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 664i64))(a1);
	if (!result || (v6 = result[2], v6 == 1))
	{
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1 + 504i64))(a1, 0i64);
		return (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 512i64))(a1, 0i64);
	}
	else if ((a3 || result != (_DWORD*)a1[138]) && (v6 == 2 || v6 == 5))
	{
		v7 = *a1;
		v9 = result[3];
		v10 = result[4];
		v8 = sub_1403AC780(qword_140C65898 + 160, &v9);
		return (_DWORD*)(*(__int64(__fastcall**)(_QWORD*, const char*, __int64, __int64))(v7 + 120))(
			a1,
			"iO",
			3i64,
			v8);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

