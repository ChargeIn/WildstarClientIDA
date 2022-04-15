//----- (0000000140412C50) ----------------------------------------------------
__int64 __fastcall sub_140412C50(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	int* v4; // rax

	v2 = a1 + 760;
	*(_QWORD*)(v2 + 440) = 0i64;
	*(_QWORD*)(v2 + 428) = 0i64;
	sub_14001C2B0(v2, *(int**)(v2 + 8), *(int**)(v2 + 16));
	v3 = *(_QWORD*)a1;
	*(_DWORD*)(a1 + 1196) = 0;
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)a1 = 0i64;
	}
	v4 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a1 + 1136), 0i64);
	return sub_140412470(a1, (__int64)v4, 0, 5);
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

