//----- (000000014033F4E0) ----------------------------------------------------
__int64 sub_14033F4E0()
{
	__int64 v0; // rdi
	__int64 v1; // rdi
	__int64 v2; // rbx
	int v4; // eax
	__int64 v5; // r8
	__int64 v6; // rsi
	_QWORD* v7; // rbx
	unsigned int v8; // ebp
	__int64 v9; // rdx

	v0 = qword_140C65850;
	if (*(_BYTE*)(qword_140C65850 + 72))
	{
		v1 = qword_140C63748;
		v2 = *(_QWORD*)(qword_140C63748 + 56);
		if (v2 != *(_QWORD*)(qword_140C63748 + 64))
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, const wchar_t*))(v2 + 8))(*(_QWORD*)v2, L"sound is already on.");
				v2 += 16i64;
			} while (v2 != *(_QWORD*)(v1 + 64));
		}
		return 2147500037i64;
	}
	else
	{
		v4 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(qword_140C65850 + 96) + 400i64))(
			*(_QWORD*)(qword_140C65850 + 96),
			qword_140C65850 + 8);
		v6 = qword_140C63748;
		v7 = *(_QWORD**)(qword_140C63748 + 56);
		v8 = v4;
		if (v4 < 0)
		{
			if (v7 != *(_QWORD**)(qword_140C63748 + 64))
			{
				do
				{
					((void(__fastcall*)(_QWORD, const wchar_t*))v7[1])(*v7, L"Sound initialization failed.");
					v7 += 2;
				} while (v7 != *(_QWORD**)(v6 + 64));
			}
			v9 = *(_QWORD*)(v0 + 104);
		}
		else
		{
			if (v7 != *(_QWORD**)(qword_140C63748 + 64))
			{
				do
				{
					((void(__fastcall*)(_QWORD, const wchar_t*))v7[1])(*v7, L"sound is now on.");
					v7 += 2;
				} while (v7 != *(_QWORD**)(v6 + 64));
			}
			v9 = *(_QWORD*)(v0 + 96);
			*(_BYTE*)(v0 + 72) = 1;
		}
		sub_14033F0A0(v0, v9, v5);
		return v8;
	}
}
// 14033F5BE: variable 'v5' is possibly undefined
// 140AF4188: using guessed type wchar_t aSoundIsAlready_0[21];
// 140AF41C8: using guessed type wchar_t aSoundInitializ[29];
// 140AF4208: using guessed type wchar_t aSoundIsNowOn[17];
// 140C63748: using guessed type __int64 qword_140C63748;
// 140C65850: using guessed type __int64 qword_140C65850;

