//----- (00000001401E5690) ----------------------------------------------------
__int64 __fastcall sub_1401E5690(__int64 a1, unsigned int a2)
{
	__int64 v4; // rdi
	unsigned int v5; // eax
	__int64 result; // rax
	__int64 v7; // rcx

	while (*(_QWORD*)(a1 + 1256))
	{
		v4 = *(_QWORD*)(a1 + 1256);
		if (v4)
		{
			sub_1401E50B0(*(_QWORD**)(a1 + 1256));
			sub_14018B900(v4, 0);
		}
	}
	v5 = *(_DWORD*)(a1 + 1220);
	if (a2 == v5)
	{
		*(_DWORD*)(a1 + 1216) = v5;
		*(_DWORD*)(a1 + 1204) = 1;
		*(_DWORD*)(a1 + 1208) = 1;
		return 0i64;
	}
	else if (a2 == 7)
	{
		v7 = *(_QWORD*)(a1 + 1264);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(a1 + 1264) = 0i64;
		}
		++* (_DWORD*)(a1 + 1212);
		*(_DWORD*)(a1 + 1204) = 1;
		*(_DWORD*)(a1 + 1208) = 1;
		result = 0i64;
		*(_DWORD*)(a1 + 1216) = 7;
		*(_DWORD*)(a1 + 1220) = 7;
	}
	else if (a2 <= v5)
	{
		result = sub_1401E57F0(a1, a2);
		if ((int)result >= 0)
		{
			result = 0i64;
			*(_DWORD*)(a1 + 1216) = a2;
			*(_QWORD*)(a1 + 1204) = 0i64;
		}
	}
	else
	{
		*(_QWORD*)(a1 + 1204) = 1i64;
		*(_DWORD*)(a1 + 1216) = a2;
		return 0i64;
	}
	return result;
}

