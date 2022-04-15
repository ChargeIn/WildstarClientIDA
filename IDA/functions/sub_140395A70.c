//----- (0000000140395A70) ----------------------------------------------------
__int64 __fastcall sub_140395A70(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v6; // rdi
	__int64 v7; // rcx
	int v8; // [rsp+20h] [rbp-18h] BYREF
	LONGLONG v9; // [rsp+28h] [rbp-10h]
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(_DWORD*)(a1 + 60);
	if (v2 == 7)
		return 1i64;
	if ((v2 & 1) == 0)
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 16) + 64i64))(
			*(_QWORD*)(a1 + 16),
			a2,
			5i64))
			return 0i64;
		sub_1403951C0(a1);
		*(_DWORD*)(a1 + 60) |= 1u;
	}
	if ((*(_BYTE*)(a1 + 60) & 2) == 0)
	{
		QueryPerformanceCounter(&PerformanceCount);
		if (*(_DWORD*)a2)
		{
			v8 = *(_DWORD*)a2;
			v9 = *(_QWORD*)(a2 + 8);
		}
		else
		{
			v8 = 1;
			v9 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
		}
		if (!(unsigned int)sub_140395240(a1, &v8))
			return 0i64;
		*(_DWORD*)(a1 + 60) |= 2u;
	}
	if ((*(_BYTE*)(a1 + 60) & 4) != 0)
		return 1i64;
	v6 = 0i64;
	if (!*(_QWORD*)(a1 + 40))
	{
	LABEL_18:
		*(_DWORD*)(a1 + 60) |= 4u;
		return 1i64;
	}
	while (1)
	{
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v6);
		if (v7)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 32i64))(v7, a2))
				return 0i64;
		}
		if ((unsigned __int64)++v6 >= *(_QWORD*)(a1 + 40))
			goto LABEL_18;
	}
}

