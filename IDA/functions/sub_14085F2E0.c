//----- (000000014085F2E0) ----------------------------------------------------
char __fastcall sub_14085F2E0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	*(_BYTE*)(a1 + 382) &= 0xF1u;
	LOBYTE(a3) = 1;
	v5 = 0x400000000i64;
	*(_BYTE*)(a1 + 382) |= (unsigned __int8)(2 * (a2 & 7)) | 1;
	return sub_140860EA0(a1, &v5, a3, a4);
}

