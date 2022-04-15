//----- (0000000140873B10) ----------------------------------------------------
__int64 __fastcall sub_140873B10(__int64 a1)
{
	char v1; // dl
	char v2; // dl
	int v3; // eax
	__int64 result; // rax

	*(_QWORD*)a1 = off_1409A6098;
	*(_QWORD*)(a1 + 80) = 0i64;
	v1 = *(_BYTE*)(a1 + 76);
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 36) = 0i64;
	v2 = v1 & 0xD6 | 8;
	*(_BYTE*)(a1 + 76) = v2;
	*(_DWORD*)(a1 + 24) = dword_140C10FB0;
	*(_DWORD*)(a1 + 28) = dword_140C10FB4;
	v3 = dword_140C10FB8;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 32) = v3;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 64) = 0i64;
	result = a1;
	*(_DWORD*)(a1 + 72) = 0;
	*(_BYTE*)(a1 + 76) = v2 & 0xE9 | 0x10;
	*(_QWORD*)(a1 + 16) = 0i64;
	return result;
}
// 1409A6098: using guessed type __int64 (__fastcall *off_1409A6098[5])();
// 140C10FB0: using guessed type int dword_140C10FB0;
// 140C10FB4: using guessed type int dword_140C10FB4;
// 140C10FB8: using guessed type int dword_140C10FB8;

