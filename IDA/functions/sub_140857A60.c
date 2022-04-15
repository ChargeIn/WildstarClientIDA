//----- (0000000140857A60) ----------------------------------------------------
__int64 __fastcall sub_140857A60(__int64 a1, int a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 result; // rax

	v4 = *(_QWORD*)(a1 + 40);
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v4 + 32i64))(
			v4,
			&off_140C10F60);
		*(_QWORD*)(a1 + 40) = 0i64;
		*(_QWORD*)(a1 + 40) = a3;
		*(_DWORD*)(a1 + 32) = a2;
	}
	else
	{
		*(_DWORD*)(a1 + 32) = a2;
		*(_QWORD*)(a1 + 40) = a3;
	}
	return result;
}
// 140C10F60: using guessed type __int64 (__fastcall **off_140C10F60)();

