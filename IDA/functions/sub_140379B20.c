//----- (0000000140379B20) ----------------------------------------------------
__int64 __fastcall sub_140379B20(__int64 a1)
{
	__int64 v2; // rax
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(_DWORD*)(a1 + 1112))
		return *(unsigned int*)(a1 + 1048);
	v2 = *(_QWORD*)a1;
	v4[0] = -1;
	(*(void(__fastcall**)(__int64, int*))(v2 + 32))(a1, v4);
	sub_140377F70(a1);
	return *(unsigned int*)(a1 + 1048);
}
// 140379B20: using guessed type int var_18[6];

