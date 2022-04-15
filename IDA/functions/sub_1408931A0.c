//----- (00000001408931A0) ----------------------------------------------------
__int64 __fastcall sub_1408931A0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdx
	int v4; // eax
	unsigned int v5; // r9d
	__int64 v7; // [rsp+38h] [rbp+10h] BYREF

	v7 = a2;
	sub_140892E60(a1);
	v3 = v7;
	v7 += 28i64;
	*(_WORD*)(a1 + 324) = *(_WORD*)(v3 + 24);
	*(_WORD*)(a1 + 268) = *(_WORD*)(v3 + 16);
	*(_DWORD*)(a1 + 272) = *(_DWORD*)(v3 + 20);
	v4 = *(_DWORD*)(v3 + 12);
	*(_BYTE*)(a1 + 320) = 0;
	*(_DWORD*)(a1 + 304) = v4;
	*(_BYTE*)(a1 + 321) = *(_BYTE*)(v3 + 27);
	*(_DWORD*)(a1 + 264) = *(_DWORD*)(v3 + 4);
	v5 = *(_DWORD*)(v3 + 8);
	if (v5)
		return sub_140892A90(a1, a1 + 248, &v7, v5);
	else
		return 1i64;
}

