//----- (00000001404A16C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A16C0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	int v5; // eax
	unsigned int v6; // eax
	__int64 v7; // rcx
	unsigned int v8; // r8d

	if (!a2)
		return 0i64;
	v5 = *(_DWORD*)(a2 + 128);
	if (v5 != 20 && v5 != 23)
		return 0i64;
	v6 = *(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 272i64);
	v7 = 0xFFFFFFFFi64;
	if (v6 != -1)
		v7 = v6;
	v8 = 0;
	if ((_DWORD)v7)
		v8 = v7;
	return sub_1404A2090(v7, a3, v8, a4);
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

