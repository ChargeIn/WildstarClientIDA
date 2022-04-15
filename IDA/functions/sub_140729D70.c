//----- (0000000140729D70) ----------------------------------------------------
__int64 __fastcall sub_140729D70(_QWORD* a1)
{
	__int64 v1; // rbx
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]
	__int128 v9; // [rsp+30h] [rbp-18h]

	v1 = a1[147];
	v3 = *(_QWORD*)(v1 + 96);
	v7 = 1116i64;
	v8 = 1065353216i64;
	v9 = 0ui64;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v7);
	*(_DWORD*)(v1 + 104) = 5;
	sub_1407899C0(a1[171]);
	LODWORD(result) = dword_140C547F0;
	if (*(_DWORD*)qword_140C63750 < dword_140C547F0)
		LODWORD(result) = *(_DWORD*)qword_140C63750;
	result = (int)result;
	if (!*((_BYTE*)&dword_140C54800 + (int)result))
	{
		v5 = a1[175];
		if (!*(_DWORD*)(v5 + 48))
		{
			*(_DWORD*)(v5 + 48) = 1;
			v6 = *(_QWORD*)(v5 + 56);
			v7 = 1109i64;
			v8 = 1065353216i64;
			LODWORD(v9) = 0;
			*(_QWORD*)((char*)&v9 + 4) = 2i64;
			HIDWORD(v9) = 0;
			return (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v6 + 584i64))(v6, 0i64, &v7);
		}
	}
	return result;
}
// 140C547F0: using guessed type int dword_140C547F0;
// 140C54800: using guessed type int dword_140C54800;
// 140C63750: using guessed type __int64 qword_140C63750;

