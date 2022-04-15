#include "../winhttp.h"

//----- (0000000140055A40) ----------------------------------------------------
__int64 sub_140055A40()
{
	__int64 v0; // rdi
	int v2; // eax
	int v3; // ecx
	bool v4; // cf
	unsigned __int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	int* v8; // r8
	__int64 v9; // rdi
	__int64 v10; // rcx
	unsigned int v11; // [rsp+20h] [rbp-438h] BYREF
	__int64 v12; // [rsp+28h] [rbp-430h] BYREF
	int* v13; // [rsp+30h] [rbp-428h]
	char v14; // [rsp+40h] [rbp-418h] BYREF
	int v15[255]; // [rsp+41h] [rbp-417h] BYREF

	v0 = qword_140C63630;
	if (!SteamUser())
		return 2147500037i64;
	v2 = 0;
	v3 = -1;
	v4 = *(_DWORD*)(v0 + 40) != -1;
	v12 = 0i64;
	v13 = 0i64;
	if (v4)
		v3 = *(_DWORD*)(v0 + 40);
	v5 = 0i64;
	if (v3)
		v2 = v3;
	LODWORD(v12) = v2;
	if (*(_DWORD*)(v0 + 112))
	{
		v6 = SteamUser();
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 128i64))(v6, *(unsigned int*)(v0 + 112));
	}
	v14 = 0;
	sub_1407E4830(v15, 0i64, 0x3FFui64);
	v11 = 0;
	v7 = SteamUser();
	*(_DWORD*)(v0 + 112) = (*(__int64(__fastcall**)(__int64, char*, __int64, unsigned int*))(*(_QWORD*)v7 + 104i64))(
		v7,
		&v14,
		1024i64,
		&v11);
	HIDWORD(v12) = 2 * v11 + 1;
	v8 = sub_14018B280(HIDWORD(v12), 0);
	v13 = v8;
	if (v11)
	{
		v9 = 0i64;
		do
		{
			sub_1407DDC38((_BYTE*)v8 + v9, HIDWORD(v12) - v9, (__int64)"%02X", (unsigned __int8)*(&v14 + v5));
			v8 = v13;
			++v5;
			v9 += 2i64;
		} while (v5 < v11);
	}
	v10 = qword_140C635F0;
	*((_BYTE*)v8 + (unsigned int)(HIDWORD(v12) - 1)) = 0;
	sub_1400161D0(v10, 0x823u, (__int64)&v12);
	sub_14018B900((__int64)v13, 0);
	return 0i64;
}
// 140959C60: using guessed type __int64 SteamUser(void);
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63630: using guessed type __int64 qword_140C63630;
// 140055A40: using guessed type int var_417[255];

