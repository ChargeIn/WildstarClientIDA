#include "../winhttp.h"

//----- (000000014033F5E0) ----------------------------------------------------
__int64 __fastcall sub_14033F5E0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rdi
	int v4; // ebp
	__int64 v5; // r8
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rdi
	__int64 v12; // rbx

	v3 = qword_140C65850;
	if (*(_BYTE*)(qword_140C65850 + 72))
	{
		sub_14033F0A0(qword_140C65850, *(_QWORD*)(qword_140C65850 + 104), a3);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 96) + 408i64))(*(_QWORD*)(v3 + 96));
		v4 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v3 + 96) + 400i64))(*(_QWORD*)(v3 + 96), v3 + 8);
		if (v4 < 0)
		{
			*(_BYTE*)(v3 + 72) = 0;
			v9 = qword_140C63748;
			v10 = *(_QWORD*)(qword_140C63748 + 56);
			if (v10 != *(_QWORD*)(qword_140C63748 + 64))
			{
				do
				{
					(*(void(__fastcall**)(_QWORD, const wchar_t*))(v10 + 8))(
						*(_QWORD*)v10,
						L"sound failed to restart during reset. Sound is now off");
					v10 += 16i64;
				} while (v10 != *(_QWORD*)(v9 + 64));
			}
			return (unsigned int)v4;
		}
		else
		{
			v6 = qword_140C63748;
			v7 = *(_QWORD*)(qword_140C63748 + 56);
			if (v7 != *(_QWORD*)(qword_140C63748 + 64))
			{
				do
				{
					(*(void(__fastcall**)(_QWORD, const wchar_t*))(v7 + 8))(*(_QWORD*)v7, L"sound has reset.");
					v7 += 16i64;
				} while (v7 != *(_QWORD*)(v6 + 64));
			}
			sub_14033F0A0(v3, *(_QWORD*)(v3 + 96), v5);
			return (unsigned int)v4;
		}
	}
	else
	{
		v11 = qword_140C63748;
		v12 = *(_QWORD*)(qword_140C63748 + 56);
		if (v12 != *(_QWORD*)(qword_140C63748 + 64))
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, const wchar_t*))(v12 + 8))(*(_QWORD*)v12, L"sound is off.");
				v12 += 16i64;
			} while (v12 != *(_QWORD*)(v11 + 64));
		}
		return 0i64;
	}
}
// 14033F66E: variable 'v5' is possibly undefined
// 140AF3F48: using guessed type wchar_t aSoundHasReset[17];
// 140AF3FA0: using guessed type wchar_t aSoundIsOff[14];
// 140AF3FC0: using guessed type wchar_t aSoundFailedToR[55];
// 140C63748: using guessed type __int64 qword_140C63748;
// 140C65850: using guessed type __int64 qword_140C65850;

