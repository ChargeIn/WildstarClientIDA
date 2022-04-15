//----- (0000000140902150) ----------------------------------------------------
__int64 __fastcall sub_140902150(WCHAR* a1, unsigned __int64 a2, _OWORD* a3)
{
	__int64 result; // rax
	char v6[16]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+30h] [rbp-18h]
	char v8; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)v6, a3);
	result = sub_140901EFC(a1, a2, (__int64)v6);
	if (v8)
		*(_DWORD*)(v7 + 200) &= ~2u;
	return result;
}

