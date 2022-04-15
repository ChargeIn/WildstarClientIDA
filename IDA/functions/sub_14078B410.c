//----- (000000014078B410) ----------------------------------------------------
__int64 __fastcall sub_14078B410(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	int v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+2Ch] [rbp-1Ch]
	__int64 v7; // [rsp+34h] [rbp-14h]
	int v8; // [rsp+3Ch] [rbp-Ch]

	*(_BYTE*)(a1 + 76) = 1;
	(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 88) + 424i64))(
		*(_QWORD*)(a1 + 88),
		1109i64,
		0i64);
	result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 88) + 424i64))(
		*(_QWORD*)(a1 + 88),
		1112i64,
		0i64);
	if (!*(_DWORD*)(a1 + 72))
	{
		v3 = *(_QWORD*)(a1 + 88);
		v4 = 1109i64;
		v7 = 3i64;
		v5 = 1065353216;
		v6 = 0i64;
		v8 = 0;
		result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v4);
		*(_DWORD*)(a1 + 72) = 1;
	}
	return result;
}

