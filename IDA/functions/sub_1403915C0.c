//----- (00000001403915C0) ----------------------------------------------------
__int64 __fastcall sub_1403915C0(__int64 a1, __int64 a2, int a3)
{
	__int64 v7; // rax
	__int64 v8; // rbp
	__int64 v9; // rbx
	__int64 v10; // rdi
	_QWORD* v11; // rcx
	__int64 v12; // rax

	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1))
		return 0i64;
	if (a3)
	{
		v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16));
		if ((*(float(__fastcall**)(__int64))(*(_QWORD*)v7 + 136i64))(v7) < 1.0)
			return 0i64;
	}
	v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
	if (v8)
	{
		v9 = 0i64;
		do
		{
			v10 = *(_QWORD*)(a1 + 160);
			if (*(_QWORD*)(v9 + v10 + 8) == a1)
			{
				v11 = *(_QWORD**)(v9 + v10 + 16);
			}
			else
			{
				v11 = 0i64;
				if (*(_QWORD*)(v9 + v10 + 16) == a1)
					v11 = *(_QWORD**)(v9 + v10 + 8);
			}
			if (v11[40])
			{
				if ((*(unsigned int(__fastcall**)(_QWORD*))(*v11 + 24i64))(v11))
				{
					v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + v10) + 56i64))(*(_QWORD*)(v9 + v10));
					(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65688 + 152i64))(
						qword_140C65688,
						v12,
						a2);
				}
			}
			v9 += 24i64;
			--v8;
		} while (v8);
	}
	return 1i64;
}
// 140C65688: using guessed type __int64 qword_140C65688;

