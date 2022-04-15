//----- (0000000140880B20) ----------------------------------------------------
__int64 __fastcall sub_140880B20(__int64 a1, __int64 a2, char a3)
{
	int v3; // r10d
	__int64 v4; // r9
	__int64 v5; // rax
	int v6; // r10d
	unsigned __int16 v8; // r8
	char v9; // dl
	unsigned int v10; // eax
	unsigned int v11; // ecx
	__int64 result; // rax
	unsigned int v13; // edi
	int v14; // eax
	unsigned __int16 v15; // cx
	__int64 v16; // rcx
	char v17[8]; // [rsp+20h] [rbp-18h] BYREF
	int v18; // [rsp+28h] [rbp-10h]
	__int64 v19; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_DWORD*)(a1 + 104);
	*(_BYTE*)(a1 + 126) &= ~8u;
	v4 = *(unsigned int*)(a1 + 112);
	*(_DWORD*)(a1 + 108) += v3;
	v5 = a2 + v4;
	v6 = v3 - v4;
	*(_BYTE*)(a1 + 126) |= 8 * (a3 & 1);
	v8 = *(_WORD*)(a1 + 84);
	v9 = *(_BYTE*)(a1 + 126);
	*(_QWORD*)(a1 + 96) = v5;
	*(_DWORD*)(a1 + 104) = v6;
	if (v8 && v8 - *(unsigned __int16*)(a1 + 124) == 1)
		v10 = *(_DWORD*)(a1 + 48) + *(_DWORD*)(a1 + 52);
	else
		v10 = *(_DWORD*)(a1 + 120);
	v11 = *(_DWORD*)(a1 + 108);
	if (v11 < v10)
	{
		*(_DWORD*)(a1 + 112) = 0;
	}
	else
	{
		*(_DWORD*)(a1 + 104) = v10 + v6 - v11;
		if (v8 && v8 - *(unsigned __int16*)(a1 + 124) == 1)
		{
			result = 1i64;
			*(_BYTE*)(a1 + 126) = v9 | 1;
			return result;
		}
		v13 = *(_DWORD*)(a1 + 116);
		if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 88) + 112i64))(
			*(_QWORD*)(a1 + 88),
			v13,
			0i64,
			&v19) != 1)
			return 2i64;
		v14 = v19;
		v15 = *(_WORD*)(a1 + 84);
		++* (_WORD*)(a1 + 124);
		*(_DWORD*)(a1 + 108) = v14;
		*(_DWORD*)(a1 + 112) = v13 - v14;
		if (v15 && v15 - *(unsigned __int16*)(a1 + 124) == 1)
		{
			(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 88) + 32i64))(*(_QWORD*)(a1 + 88), v17);
			v16 = *(_QWORD*)(a1 + 88);
			v18 = 0;
			(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v16 + 40i64))(v16, v17);
			return 1i64;
		}
	}
	return 1i64;
}
// 140880B20: using guessed type char var_18[8];

