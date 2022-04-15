//----- (00000001407DF1E4) ----------------------------------------------------
__int64 __fastcall sub_1407DF1E4(unsigned __int8* a1, const CHAR* a2, _OWORD* a3)
{
	__int64 v5; // rdx
	__int64 result; // rax
	int v7; // eax
	__int128 v8; // [rsp+40h] [rbp-28h] BYREF
	__int64 v9; // [rsp+50h] [rbp-18h]
	char v10; // [rsp+58h] [rbp-10h]

	sub_1407DE348((__int64)&v8, a3);
	if (!a1 || !a2)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	LABEL_8:
		result = 0x7FFFFFFFi64;
		goto LABEL_10;
	}
	v5 = *(_QWORD*)(v8 + 304);
	if (!v5)
	{
		result = sub_1407EA540(a1, (__int64)a2);
		goto LABEL_10;
	}
	v7 = sub_1407EA8F0(&v8, v5, 0x1000u, (const CHAR*)a1, -1, a2, -1, *(_DWORD*)(v8 + 8));
	if (!v7)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		goto LABEL_8;
	}
	result = (unsigned int)(v7 - 2);
LABEL_10:
	if (v10)
		*(_DWORD*)(v9 + 200) &= ~2u;
	return result;
}

