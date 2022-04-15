//----- (00000001407F04BC) ----------------------------------------------------
__int64 __fastcall sub_1407F04BC(_OWORD* a1, __int64 a2, LCTYPE a3, CHAR* a4, int a5)
{
	__int64 result; // rax
	char v9[16]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v10; // [rsp+40h] [rbp-18h]
	char v11; // [rsp+48h] [rbp-10h]

	sub_1407DE348((__int64)v9, a1);
	result = sub_1407F0360((__int64)v9, a2, a3, a4, a5);
	if (v11)
		*(_DWORD*)(v10 + 200) &= ~2u;
	return result;
}

