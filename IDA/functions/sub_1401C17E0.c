#include "../winhttp.h"

//----- (00000001401C17E0) ----------------------------------------------------
__int64 __fastcall sub_1401C17E0(__int64 a1)
{
	unsigned __int64 v2; // rdi
	int v3; // eax
	int v4; // eax
	__int64 v5; // rcx
	int v6; // eax
	unsigned int v7; // eax
	__int64 v8; // rcx
	__int64 result; // rax
	int v10; // [rsp+30h] [rbp-38h] BYREF
	int v11; // [rsp+34h] [rbp-34h] BYREF
	char v12[8]; // [rsp+38h] [rbp-30h] BYREF
	int v13; // [rsp+40h] [rbp-28h]
	int v14; // [rsp+44h] [rbp-24h]

	v2 = 0i64;
	if ((*(int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 120i64))(*(_QWORD*)(a1 + 8), a1 + 32) >= 0
		&& (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, int*, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(a1 + 32),
			0i64,
			&v11,
			4i64) >= 0
		&& (*(int(__fastcall**)(_QWORD, _QWORD, __int64, int*, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(a1 + 32),
			4i64,
			&v10,
			4i64) >= 0
		&& v11 == 1094799939)
	{
		if (v10 == 2)
		{
			v3 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 32),
				0i64,
				a1 + 36,
				16i64);
		}
		else
		{
			if (v10 != 1)
				goto LABEL_15;
			if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 32),
				0i64,
				v12,
				24i64) < 0)
				goto LABEL_15;
			v4 = v13;
			v5 = *(_QWORD*)(a1 + 8);
			*(_DWORD*)(a1 + 36) = 1094799939;
			*(_DWORD*)(a1 + 44) = v4;
			v6 = v14;
			*(_DWORD*)(a1 + 40) = 2;
			*(_DWORD*)(a1 + 48) = v6;
			if ((*(int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v5 + 48i64))(v5, a1 + 32, 16i64) < 0)
				goto LABEL_15;
			v3 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 8) + 104i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 32),
				0i64,
				a1 + 36,
				16i64);
		}
		if (v3 >= 0)
		{
			v7 = *(_DWORD*)(a1 + 44);
			if (v7)
			{
				sub_1401C2DF0((__int64*)(a1 + 56), v7);
				if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
					*(_QWORD*)(a1 + 8),
					*(unsigned int*)(a1 + 48),
					0i64,
					*(_QWORD*)(a1 + 56),
					32i64 * *(_QWORD*)(a1 + 64)) < 0)
				{
					*(_QWORD*)(a1 + 64) = 0i64;
					goto LABEL_15;
				}
				sub_140052360((__int64*)(a1 + 72), *(_QWORD*)(a1 + 64));
				if (*(_QWORD*)(a1 + 80))
				{
					do
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 72) + 4 * v2) = v2;
						++v2;
					} while (v2 < *(_QWORD*)(a1 + 80));
				}
				sub_1401C3280(
					(__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1401C2DC0,
					*(unsigned int**)(a1 + 72),
					*(_QWORD*)(a1 + 80),
					*(_QWORD*)(a1 + 56));
			}
			sub_1401C1A60(a1);
			return 0i64;
		}
	}
LABEL_15:
	v8 = *(_QWORD*)(a1 + 8);
	*(_DWORD*)(a1 + 36) = 1094799939;
	*(_QWORD*)(a1 + 40) = 2i64;
	*(_DWORD*)(a1 + 48) = 0;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 160i64))(v8);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 8) + 40i64))(
			*(_QWORD*)(a1 + 8),
			a1 + 32,
			16i64);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 8) + 104i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 32),
				0i64,
				a1 + 36,
				16i64);
			if ((int)result >= 0)
			{
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 128i64))(
					*(_QWORD*)(a1 + 8),
					*(unsigned int*)(a1 + 32));
				if ((int)result >= 0)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1);
					return 0i64;
				}
			}
		}
	}
	return result;
}
// 1401C17E0: using guessed type char var_30[8];

