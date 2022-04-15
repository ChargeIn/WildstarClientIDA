//----- (0000000140880CA0) ----------------------------------------------------
__int64 __fastcall sub_140880CA0(__int64 a1)
{
	__int64 result; // rax
	char v3[4]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v4; // [rsp+24h] [rbp-14h]

	(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 88) + 32i64))(*(_QWORD*)(a1 + 88), v3);
	if (*(_WORD*)(a1 + 84) == 1)
		v4 = 0i64;
	else
		v4 = *(_QWORD*)(a1 + 116);
	(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 88) + 40i64))(*(_QWORD*)(a1 + 88), v3);
	*(_BYTE*)(a1 + 126) &= ~1u;
	result = *(_QWORD*)(a1 + 24);
	*(_BYTE*)(a1 + 32) ^= (*(_BYTE*)(a1 + 32) ^ (*(_BYTE*)(result + 382) >> 4)) & 2;
	return result;
}

