//----- (00000001405E7AA0) ----------------------------------------------------
__int64 __fastcall sub_1405E7AA0(__int64 a1, int a2)
{
	__int64 v4; // r8
	__int64 result; // rax
	__int64 v6; // rsi
	__int64 v7; // rbx
	unsigned int v8; // edi

	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4)
		return 175i64;
	v6 = *(_QWORD*)(v4 + 224);
	if (!v6)
		return 175i64;
	result = 0i64;
	v7 = 540i64;
	v8 = 0;
	while (*(_DWORD*)(v6 + v7 - 440) != a2)
	{
	LABEL_10:
		++v8;
		v7 += 4i64;
		if (v8 >= 8)
			return result;
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 56i64))(a1, v8);
	if (*(float*)(v7 + *(_QWORD*)(qword_140C65898 + 120)) <= 0.0)
	{
		result = *(unsigned int*)((char*)&unk_140C390D0 + v7 - 540);
		goto LABEL_10;
	}
	return 0i64;
}
// 1405E7B2B: conditional instruction was optimized away because edi.4<8u
// 140C65898: using guessed type __int64 qword_140C65898;

