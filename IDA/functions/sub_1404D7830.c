#include "../winhttp.h"

//----- (00000001404D7830) ----------------------------------------------------
_DWORD* __fastcall sub_1404D7830(__int64 a1)
{
	_DWORD* result; // rax
	struct tagPOINT v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rax
	int v6; // eax
	_DWORD* v7; // rax
	char v8[24]; // [rsp+20h] [rbp-18h] BYREF
	char v9; // [rsp+40h] [rbp+8h] BYREF

	if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 192i64))(
		*(_QWORD*)(a1 + 30088),
		47i64)
		&& *(_DWORD*)(a1 + 29236)
		|| (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 192i64))(
			*(_QWORD*)(a1 + 30088),
			32i64)
		&& *(_DWORD*)(a1 + 29232)
		|| (unsigned int)sub_14055A260((_DWORD*)(a1 + 29488)))
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 184i64))(*(_QWORD*)(a1 + 30088));
		if (!(_DWORD)result)
		{
			if (*(_DWORD*)(a1 + 40) != 4)
			{
				v4 = *(_QWORD*)(a1 + 32);
				if (v4)
				{
					while (*(_DWORD*)(v4 + 40) == 4)
					{
						v4 = *(_QWORD*)(v4 + 32);
						if (!v4)
							goto LABEL_11;
					}
				}
				else
				{
				LABEL_11:
					sub_140252260(v3, 0);
				}
			}
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 400i64))(*(_QWORD*)(a1 + 30088));
			result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 30088) + 216i64))(
				*(_QWORD*)(a1 + 30088),
				&v9);
			*(_DWORD*)(a1 + 30100) = *result;
			*(_DWORD*)(a1 + 30104) = result[1];
			*(_OWORD*)(a1 + 30128) = 0i64;
			*(_OWORD*)(a1 + 30144) = 0i64;
		}
	}
	else
	{
		result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 184i64))(*(_QWORD*)(a1 + 30088));
		if ((_DWORD)result)
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 30088) + 408i64))(*(_QWORD*)(a1 + 30088));
			if (*(_DWORD*)(a1 + 40) != 4)
			{
				v5 = *(_QWORD*)(a1 + 32);
				if (v5)
				{
					while (*(_DWORD*)(v5 + 40) == 4)
					{
						v5 = *(_QWORD*)(v5 + 32);
						if (!v5)
							goto LABEL_18;
					}
				}
				else
				{
				LABEL_18:
					v6 = dword_140C45D50;
					if (*(_DWORD*)qword_140C63750 < dword_140C45D50)
						v6 = *(_DWORD*)qword_140C63750;
					if (byte_140C45D60[v6])
						sub_140252260((struct tagPOINT)byte_140C45D60, 1);
				}
			}
			v7 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 30088) + 216i64))(
				*(_QWORD*)(a1 + 30088),
				&v9);
			*(_DWORD*)(a1 + 30100) = *v7;
			*(_DWORD*)(a1 + 30104) = v7[1];
			*(_OWORD*)(a1 + 30128) = 0i64;
			result = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 30088) + 232i64))(
				*(_QWORD*)(a1 + 30088),
				v8);
			*(_OWORD*)(a1 + 30144) = *(_OWORD*)result;
		}
	}
	return result;
}
// 1404D78C9: variable 'v3' is possibly undefined
// 140C45D50: using guessed type int dword_140C45D50;
// 140C45D60: using guessed type _BYTE byte_140C45D60[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 1404D7830: using guessed type char var_18[24];

