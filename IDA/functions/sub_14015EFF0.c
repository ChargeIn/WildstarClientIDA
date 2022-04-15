//----- (000000014015EFF0) ----------------------------------------------------
void __fastcall sub_14015EFF0(__int64 a1, int a2, __int64 a3)
{
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rbx

	if (a2 >= 0 && a2 < *(_DWORD*)(a1 + 1128))
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8i64 * a2);
		if (a3)
		{
			v5 = *(_QWORD*)(v3 + 16);
			v6 = v3 + 16;
			if (v5)
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v5 + 56i64))(v5, a3, -1i64);
			else
				(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
					qword_140C65680,
					MEMORY[0x60],
					a3,
					-1i64,
					v6);
		}
		else
		{
			v4 = *(_QWORD*)(v3 + 16);
			if (v4)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
				*(_QWORD*)(v3 + 16) = 0i64;
			}
		}
	}
}
// 140C65680: using guessed type __int64 qword_140C65680;

