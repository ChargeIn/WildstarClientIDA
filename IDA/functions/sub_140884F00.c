//----- (0000000140884F00) ----------------------------------------------------
__int64 __fastcall sub_140884F00(__int64 a1)
{
	__int64 v1; // rax
	int* v3; // rcx
	__int64 result; // rax
	char v5[8]; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v6; // [rsp+28h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 120);
	*(_BYTE*)(a1 + 117) |= 0x10u;
	(*(void(__fastcall**)(__int64, char*))(v1 + 32))(a1 + 120, v5);
	v3 = *(int**)(a1 + 40);
	result = v6;
	if (v6 > *(__int64*)v3)
	{
		v6 = *v3;
		return (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)(a1 + 120) + 40i64))(a1 + 120, v5);
	}
	return result;
}
// 140884F00: using guessed type char var_18[8];

