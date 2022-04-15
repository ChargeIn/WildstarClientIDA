//----- (00000001403961C0) ----------------------------------------------------
__int64 __fastcall sub_1403961C0(__int64* a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 result; // rax
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v8[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 40))(a1, v8);
	v5 = a1[5];
	if (v5)
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 1168i64))(v5);
		*(_OWORD*)a2 = *(_OWORD*)(v6 + 32);
		*(_DWORD*)(a2 + 16) = *(_DWORD*)(v6 + 48);
		return a2;
	}
	else
	{
		result = a2;
		*(_OWORD*)a2 = xmmword_140C783D0;
		*(_DWORD*)(a2 + 16) = dword_140C783E0;
	}
	return result;
}
// 140C783D0: using guessed type __int128 xmmword_140C783D0;
// 140C783E0: using guessed type int dword_140C783E0;
// 1403961C0: using guessed type int var_18[6];

