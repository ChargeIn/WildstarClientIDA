//----- (00000001401C1600) ----------------------------------------------------
__int64 __fastcall sub_1401C1600(__int64 a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	int v4; // eax
	unsigned int v5; // eax
	unsigned __int64 i; // rcx
	int v7; // [rsp+30h] [rbp-48h] BYREF
	int v8; // [rsp+34h] [rbp-44h] BYREF
	char v9[8]; // [rsp+38h] [rbp-40h] BYREF
	int v10; // [rsp+40h] [rbp-38h]
	int v11; // [rsp+44h] [rbp-34h]

	if ((*(int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 120i64))(*(_QWORD*)(a1 + 8), a1 + 32) < 0
		|| (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, int*, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(a1 + 32),
			0i64,
			&v8,
			4i64) < 0
		|| (*(int(__fastcall**)(_QWORD, _QWORD, __int64, int*, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(a1 + 32),
			4i64,
			&v7,
			4i64) < 0
		|| v8 != 1094799939)
	{
		goto LABEL_7;
	}
	if (v7 != 2)
	{
		if (v7 != 1
			|| (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, char*, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 32),
				0i64,
				v9,
				24i64) < 0)
		{
			goto LABEL_7;
		}
		v4 = v10;
		*(_DWORD*)(a1 + 36) = 1094799939;
		*(_DWORD*)(a1 + 40) = 2;
		*(_DWORD*)(a1 + 44) = v4;
		*(_DWORD*)(a1 + 48) = v11;
	LABEL_12:
		v5 = *(_DWORD*)(a1 + 44);
		if (v5)
		{
			sub_1401C2DF0((__int64*)(a1 + 56), v5);
			if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(a1 + 48),
				0i64,
				*(_QWORD*)(a1 + 56),
				32i64 * *(_QWORD*)(a1 + 64)) < 0)
			{
				*(_QWORD*)(a1 + 64) = 0i64;
				goto LABEL_7;
			}
			sub_140052360((__int64*)(a1 + 72), *(_QWORD*)(a1 + 64));
			for (i = 0i64; i < *(_QWORD*)(a1 + 80); ++i)
				*(_DWORD*)(*(_QWORD*)(a1 + 72) + 4 * i) = i;
			sub_1401C3280(
				(__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1401C2DC0,
				*(unsigned int**)(a1 + 72),
				*(_QWORD*)(a1 + 80),
				*(_QWORD*)(a1 + 56));
		}
		sub_1401C1A60(a1);
		goto LABEL_8;
	}
	if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 8) + 88i64))(
		*(_QWORD*)(a1 + 8),
		*(unsigned int*)(a1 + 32),
		0i64,
		a1 + 36,
		16i64) >= 0)
		goto LABEL_12;
LABEL_7:
	v2 = *(_QWORD*)a1;
	*(_DWORD*)(a1 + 36) = 1094799939;
	*(_QWORD*)(a1 + 40) = 2i64;
	*(_DWORD*)(a1 + 48) = 0;
	(*(void(__fastcall**)(__int64))(v2 + 72))(a1);
LABEL_8:
	result = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	return result;
}
// 1401C1600: using guessed type char var_40[8];

