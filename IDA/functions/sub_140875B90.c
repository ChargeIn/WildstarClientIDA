//----- (0000000140875B90) ----------------------------------------------------
__int64 __fastcall sub_140875B90(__int64 a1)
{
	int v2; // eax
	unsigned int v3; // edx
	int v5; // [rsp+30h] [rbp+8h] BYREF
	int v6; // [rsp+34h] [rbp+Ch]

	v2 = sub_140855A70(a1);
	v3 = *(_DWORD*)(a1 + 56);
	v5 = v2;
	v6 = *(_BYTE*)(a1 + 62) & 0x1F;
	return sub_140837C80(qword_140C61BB0, v3, 0i64, &v5);
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

