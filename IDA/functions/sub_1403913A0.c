//----- (00000001403913A0) ----------------------------------------------------
__int64 __fastcall sub_1403913A0(__int64 a1, int a2, __int64 a3)
{
	__int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax

	if (a2)
	{
		v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16));
		if ((*(float(__fastcall**)(__int64))(*(_QWORD*)v5 + 136i64))(v5) < 1.0)
			return 0i64;
	}
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
	v7 = result;
	if (result)
	{
		if (a3)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
		if (v7)
		{
			v8 = 0i64;
			do
			{
				v9 = *(_QWORD*)(a1 + 160);
				if (*(_QWORD*)(v9 + v8 + 8) == a1)
				{
					v10 = *(_QWORD*)(v9 + v8 + 16);
				}
				else
				{
					v10 = 0i64;
					if (*(_QWORD*)(v9 + v8 + 16) == a1)
						v10 = *(_QWORD*)(v9 + v8 + 8);
				}
				if (*(_QWORD*)(v10 + 320))
				{
					v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + v8) + 56i64))(*(_QWORD*)(v9 + v8));
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 88i64))(qword_140C65688, v11);
				}
				v8 += 24i64;
				--v7;
			} while (v7);
		}
		if (a3)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a3 + 32i64))(a3);
		return 1i64;
	}
	return result;
}
// 140C65688: using guessed type __int64 qword_140C65688;

