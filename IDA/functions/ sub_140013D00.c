#include "../winhttp.h"

//----- (0000000140013D00) ----------------------------------------------------
__int64 __fastcall sub_140013D00(__int64 a1, float a2)
{
	int v3; // eax
	__int64 result; // rax
	__int64 v5; // rcx
	int v6; // edx
	int v7; // eax
	__int64* v8; // rbx
	int v9; // esi
	int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // rcx
	_QWORD* v16; // rdx
	__int64 v17; // rdx
	__int64 v18; // rbx
	int v19; // eax
	void (*v20)(void); // rax
	int v21[4]; // [rsp+20h] [rbp-58h] BYREF
	int v22[4]; // [rsp+30h] [rbp-48h] BYREF
	int v23[4]; // [rsp+40h] [rbp-38h] BYREF

	if (!*(_DWORD*)(a1 + 5808))
		goto LABEL_7;
	v3 = dword_140C3AFF0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3AFF0)
		v3 = *(_DWORD*)qword_140C63750;
	if (byte_140C3B000[v3])
	{
		result = sub_140017F60(a1);
		if ((int)result < 0)
			return result;
	}
	else
	{
	LABEL_7:
		v5 = *(_QWORD*)(a1 + 5856);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 5856) = 0i64;
		}
	}
	if (*(_DWORD*)(a1 + 5704))
	{
		v6 = dword_140C3B3F0;
		v7 = dword_140C3B3F0;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B3F0)
			v7 = *(_DWORD*)qword_140C63750;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B3F0)
			v6 = *(_DWORD*)qword_140C63750;
		sub_14001A820((__int64)&off_140C3B3E0, v6, fmaxf(0.0, *((float*)&off_140C3B3E0 + v7 + 8) - a2));
	}
	if (*(_DWORD*)(a1 + 5804))
	{
		result = sub_140017900(a1);
		if ((int)result < 0)
			return result;
	}
	else
	{
		result = sub_140017C80(a1);
		if ((int)result < 0)
			return result;
	}
	if (qword_140C65808)
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65808 + 72i64))(qword_140C65808, 0i64, 1i64);
	sub_1400B20B0();
	sub_14003B050();
	v8 = *(__int64**)(a1 + 5552);
	*(_QWORD*)(a1 + 5568) = 0i64;
	*(_QWORD*)(a1 + 5560) = 0i64;
	v9 = 1;
	if (v8)
	{
		while (1)
		{
			if (!*(_DWORD*)(a1 + 5808))
				goto LABEL_27;
			v10 = dword_140C3AFF0;
			if (*(_DWORD*)qword_140C63750 < dword_140C3AFF0)
				v10 = *(_DWORD*)qword_140C63750;
			if (byte_140C3B000[v10])
			{
				v11 = *v8;
				v21[0] = -1;
				(*(void(__fastcall**)(__int64*, int*))(v11 + 40))(v8, v21);
			}
			else
			{
			LABEL_27:
				if (*(_QWORD*)(a1 + 5560) || *((_DWORD*)v8 + 10) == 4)
				{
					v13 = *v8;
					v23[0] = 0;
					if (!(*(unsigned int(__fastcall**)(__int64*, int*))(v13 + 40))(v8, v23) && *((_DWORD*)v8 + 10) != 4)
						goto LABEL_54;
				}
				else
				{
					v12 = *v8;
					v22[0] = -1;
					(*(void(__fastcall**)(__int64*, int*))(v12 + 40))(v8, v22);
				}
			}
			if (!v9 || (v9 = 1, *((_DWORD*)v8 + 10) <= 1u))
				v9 = 0;
			if (*((_DWORD*)v8 + 5) > 1u)
				*((float*)v8 + 4) = a2 + *((float*)v8 + 4);
			result = (*(__int64(__fastcall**)(__int64*))(*v8 + 48))(v8);
			if ((int)result < 0)
				break;
			if (*((_DWORD*)v8 + 10) == 1 && *((float*)v8 + 4) > 0.25)
				*((_DWORD*)v8 + 10) = 0;
			if (*((_DWORD*)v8 + 10) != 4)
				*(_QWORD*)(a1 + 5560) = v8;
			v14 = *((_DWORD*)v8 + 10);
			if (!v14 || v9 && (unsigned int)(v14 - 2) <= 1)
			{
				v15 = *(_QWORD*)(a1 + 5568);
				if (v15)
				{
					v16 = *(_QWORD**)(v15 + 24);
					if (v16)
						*v16 = *(_QWORD*)(v15 + 32);
					v17 = *(_QWORD*)(v15 + 32);
					if (v17)
						*(_QWORD*)(v17 + 24) = *(_QWORD*)(v15 + 24);
					*(_QWORD*)(v15 + 24) = 0i64;
					*(_QWORD*)(v15 + 32) = 0i64;
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5568) + 8i64))(*(_QWORD*)(a1 + 5568));
				}
				*(_QWORD*)(a1 + 5568) = v8;
			}
			v8 = (__int64*)v8[4];
			if (!v8)
				goto LABEL_54;
		}
	}
	else
	{
	LABEL_54:
		if (!*(_QWORD*)(a1 + 5568))
			*(_QWORD*)(a1 + 5568) = *(_QWORD*)(a1 + 5560);
		v18 = qword_140C63658;
		if (qword_140C63658
			&& *(_DWORD*)(qword_140C63658 + 48)
			&& *(_QWORD*)(qword_140C63658 + 32)
			&& *(_DWORD*)(qword_140C63658 + 44))
		{
			v19 = dword_140C3CB80;
			if (*(_DWORD*)qword_140C63750 < dword_140C3CB80)
				v19 = *(_DWORD*)qword_140C63750;
			if (*((_BYTE*)&dword_140C3CB90 + v19))
			{
				v20 = *(void (**)(void))(qword_140C63658 + 80);
				if (v20)
				{
					v20();
					*(_DWORD*)(v18 + 48) = 0;
				}
			}
		}
		if (qword_140C63628)
			sub_140051E80(qword_140C63628);
		if (qword_140C63630)
			SteamAPI_RunCallbacks();
		if (qword_140C65848)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 128i64))(qword_140C65848);
		if (qword_140C65808)
			(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65808 + 72i64))(
				qword_140C65808,
				0i64,
				2i64);
		return 0i64;
	}
	return result;
}
// 140959C68: using guessed type __int64 SteamAPI_RunCallbacks(void);
// 140C3AFF0: using guessed type int dword_140C3AFF0;
// 140C3B000: using guessed type _BYTE[32];
// 140C3B3E0: using guessed type __int64 (__fastcall *off_140C3B3E0)();
// 140C3B3F0: using guessed type int dword_140C3B3F0;
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C3CB90: using guessed type int dword_140C3CB90;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63630: using guessed type __int64 qword_140C63630;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140013D00: using guessed type int var_58[4];
// 140013D00: using guessed type int var_48[4];
// 140013D00: using guessed type int var_38[4];

