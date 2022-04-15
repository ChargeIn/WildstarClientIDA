//----- (000000014005E620) ----------------------------------------------------
__int64 __fastcall sub_14005E620(__int64 a1, __int64 a2)
{
	unsigned __int64 v5; // r8
	__int64 v6; // rax
	unsigned __int64 v7[4]; // [rsp+20h] [rbp-38h] BYREF

	if (*(_DWORD*)(a2 + 8) != 3)
		return 0i64;
	sub_1407DDB98(v7, a14g, *(_QWORD*)a2);
	v5 = -1i64;
	do
		++v5;
	while (*((_BYTE*)v7 + v5));
	v6 = sub_140062650(a1, v7, v5);
	*(_DWORD*)(a2 + 8) = 4;
	*(_QWORD*)a2 = v6;
	return 1i64;
}

