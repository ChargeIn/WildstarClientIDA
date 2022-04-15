//----- (00000001407E82FC) ----------------------------------------------------
__int64 __fastcall sub_1407E82FC(_OWORD* a1, DWORD a2, const CHAR* a3, int a4, WORD* a5, UINT a6, int a7)
{
	__int64 result; // rax
	char v11[16]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v12; // [rsp+50h] [rbp-18h]
	char v13; // [rsp+58h] [rbp-10h]

	sub_1407DE348((__int64)v11, a1);
	result = sub_1407E8194((__int64)v11, a2, a3, a4, a5, a6, a7);
	if (v13)
		*(_DWORD*)(v12 + 200) &= ~2u;
	return result;
}

