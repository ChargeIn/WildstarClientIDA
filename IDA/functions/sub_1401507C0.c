//----- (00000001401507C0) ----------------------------------------------------
__int64 __fastcall sub_1401507C0(__int64 a1, _WORD* a2, __int64 a3, int a4)
{
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rcx

	if (a2 && *a2)
	{
		if (a3)
			v7 = *(_QWORD*)(a3 + 96);
		else
			v7 = 0i64;
		v8 = a1 + 184;
		v9 = *(_QWORD*)(a1 + 184);
		if (v9)
		{
			return (*(__int64(__fastcall**)(__int64, _WORD*, __int64))(*(_QWORD*)v9 + 56i64))(v9, a2, -1i64);
		}
		else if (v7)
		{
			result = (*(__int64(__fastcall**)(__int64, __int64, _WORD*, __int64, __int64))(*(_QWORD*)qword_140C65680
				+ 40i64))(
					qword_140C65680,
					v7,
					a2,
					-1i64,
					v8);
			*(_DWORD*)(a1 + 192) = a4;
		}
	}
	else
	{
		v11 = *(_QWORD*)(a1 + 184);
		if (v11)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
			*(_QWORD*)(a1 + 184) = 0i64;
		}
	}
	return result;
}
// 14015082C: conditional instruction was optimized away because rcx.8==0
// 140C65680: using guessed type __int64 qword_140C65680;

