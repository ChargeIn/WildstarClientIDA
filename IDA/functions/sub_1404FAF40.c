//----- (00000001404FAF40) ----------------------------------------------------
__int64 __fastcall sub_1404FAF40(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v2; // rdi
	__int64 v3; // rcx
	__int64* v4; // rsi
	int v5; // edx

	result = sub_1404F87C0(a1, 1u);
	v2 = result;
	if (result)
	{
		v3 = *(_QWORD*)(result + 2328);
		if (v3 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 2328) + 112i64))(*(_QWORD*)(v2 + 2328));
		v4 = *(__int64**)(v2 + 2168);
		if (v4)
		{
			v5 = *(_DWORD*)(v2 + 7304);
			if (v5 != *(_DWORD*)(v2 + 7188) || *(_DWORD*)(v2 + 7308) != *(_DWORD*)(v2 + 7192))
			{
				sub_14002EAF0((_DWORD*)(v2 + 2336), v5);
				sub_14002EBD0(v2 + 2336, *(_DWORD*)(v2 + 7308));
				sub_14002F5D0(v2 + 2336, v4, *(_QWORD*)(v2 + 2160));
				sub_14002FE90(v2 + 2336, (__int64)v4);
				sub_140030080(v2 + 2336, (__int64)v4);
			}
			sub_1404FEE90(v2);
			sub_14002F5D0(v2 + 2336, v4, *(_QWORD*)(v2 + 2160));
			sub_14002FE90(v2 + 2336, (__int64)v4);
			sub_140030080(v2 + 2336, (__int64)v4);
			return 1i64;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}

