//----- (000000014078A2E0) ----------------------------------------------------
__int64 __fastcall sub_14078A2E0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	int v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+2Ch] [rbp-1Ch]
	__int64 v7; // [rsp+34h] [rbp-14h]
	int v8; // [rsp+3Ch] [rbp-Ch]

	if (*(_DWORD*)(a1 + 92) == 1)
	{
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 112) + 896i64))(
			*(_QWORD*)(a1 + 112),
			*(unsigned int*)(a1 + 120),
			*(_QWORD*)(a1 + 136));
		v2 = *(_QWORD*)(a1 + 136);
		v7 = 3i64;
		v5 = 1065353216;
		v4 = 1108i64;
		v6 = 0i64;
		v8 = 0;
		if (!*(_DWORD*)(a1 + 88))
			v4 = 1106i64;
		result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v2 + 584i64))(v2, 0i64, &v4);
		*(_DWORD*)(a1 + 92) = 2;
	}
	return result;
}

