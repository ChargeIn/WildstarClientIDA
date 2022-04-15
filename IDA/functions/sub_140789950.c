//----- (0000000140789950) ----------------------------------------------------
__int64 __fastcall sub_140789950(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	int v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+2Ch] [rbp-1Ch]
	__int64 v7; // [rsp+34h] [rbp-14h]
	int v8; // [rsp+3Ch] [rbp-Ch]

	if (!*(_DWORD*)(a1 + 80))
	{
		v2 = *(_QWORD*)(a1 + 88);
		v4 = 1106i64;
		v7 = 3i64;
		v5 = 1065353216;
		v6 = 0i64;
		v8 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v2 + 584i64))(v2, 0i64, &v4);
		result = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 80) = 1;
		*(_BYTE*)(result + 1232) = 1;
	}
	return result;
}

