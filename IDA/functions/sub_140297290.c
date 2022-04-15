//----- (0000000140297290) ----------------------------------------------------
__int64 __fastcall sub_140297290(__int64 a1, int a2)
{
	__m128i* v4; // r8
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx

	if (*(int*)(a1 + 32) >= 1)
	{
		if (a2 < 1)
		{
			v6 = *(_QWORD*)(a1 + 48);
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				*(_QWORD*)(a1 + 48) = 0i64;
			}
			v7 = *(_QWORD*)(a1 + 40);
			if (v7)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
				*(_QWORD*)(a1 + 40) = 0i64;
			}
			*(_DWORD*)(a1 + 112) = -2147483638;
		}
	}
	else if (a2 >= 1)
	{
		v4 = *(__m128i**)(a1 + 24);
		if (!v4)
		{
			result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64, int, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64)
				+ 288i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
					32i64,
					32i64,
					21i64,
					2,
					a1 + 40,
					0i64);
			if ((int)result >= 0)
			{
				*(_DWORD*)(a1 + 112) = 0;
				*(_DWORD*)(a1 + 32) = a2;
				return 0i64;
			}
			goto LABEL_7;
		}
		result = sub_14026C360(*(_QWORD*)(a1 + 16), 0, v4, 0, 0, 512, 1, (__int64*)(a1 + 48));
		if ((int)result < 0)
		{
		LABEL_7:
			*(_DWORD*)(a1 + 112) = result;
			return result;
		}
	}
	*(_DWORD*)(a1 + 32) = a2;
	return 0i64;
}
// 140297353: conditional instruction was optimized away because eax.4<1

