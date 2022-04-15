//----- (0000000140840B80) ----------------------------------------------------
__int64 __fastcall sub_140840B80(__int64 a1, __int64 a2)
{
	int v3; // eax
	_DWORD* v4; // rdi
	__int64 v5; // rax
	_QWORD* v6; // rax
	__int128 v8; // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+30h] [rbp-18h]
	char v10; // [rsp+50h] [rbp+8h] BYREF

	if (!*(_BYTE*)(a1 + 2400))
		return sub_14083FA10(a1, (unsigned int*)a2);
	v3 = *(_DWORD*)(a2 + 16);
	v4 = (_DWORD*)(a1 + 2376);
	v8 = *(_OWORD*)a2;
	v9 = v3;
	v5 = sub_14083D1A0((__int64*)(a1 + 2376), (__int64)&v8, &v10);
	if (v5)
		v6 = (_QWORD*)sub_14083F0A0((__int64)v4, ((int)v5 - *v4) / 40);
	else
		v6 = (_QWORD*)sub_14083DFC0((__int64)v4);
	if (!v6)
		return 52i64;
	*v6 = *(_QWORD*)a2;
	v6[1] = *(_QWORD*)(a2 + 8);
	v6[2] = *(_QWORD*)(a2 + 16);
	v6[3] = *(_QWORD*)(a2 + 24);
	v6[4] = *(_QWORD*)(a2 + 32);
	return 1i64;
}

