//----- (0000000140889870) ----------------------------------------------------
__int64 __fastcall sub_140889870(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	__int64 v3; // rax
	__int64 v4; // rax

	result = *(_QWORD*)(a1 + 32);
	*a2 = result;
	if (result)
	{
		++* (_WORD*)(result + 32);
		v3 = *(_QWORD*)(a1 + 32);
		if (v3)
		{
			if (!*(_QWORD*)(v3 + 16))
			{
				--* (_DWORD*)(a1 + 24);
				*(_QWORD*)(a1 + 32) = 0i64;
				*(_QWORD*)(a1 + 40) = 0i64;
				--* (_DWORD*)(a1 + 76);
				result = *a2;
				*(_QWORD*)(*a2 + 16) = 0i64;
				return result;
			}
			v4 = *(_QWORD*)(v3 + 16);
			--* (_DWORD*)(a1 + 24);
			*(_QWORD*)(a1 + 32) = v4;
		}
		--* (_DWORD*)(a1 + 76);
		result = *a2;
		*(_QWORD*)(*a2 + 16) = 0i64;
	}
	return result;
}

