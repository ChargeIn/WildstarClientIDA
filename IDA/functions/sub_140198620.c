#include "../winhttp.h"

//----- (0000000140198620) ----------------------------------------------------
__int64 sub_140198620()
{
	unsigned __int64 v0; // rbx
	int v1; // edi
	int v2; // eax
	int v3; // ecx
	int v4; // edx
	int v5; // r8d
	int v6; // eax
	unsigned int v7; // r8d
	int v8; // ecx
	__int64 v9; // rcx
	unsigned int v10; // edx
	int v11; // ecx
	__int64 result; // rax

	v0 = 0i64;
	qword_140C890CC = 0i64;
	dword_140C890E0 = 0;
	v1 = sub_14018CDF0();
	sub_140197B70();
	v2 = sub_14018CDF0();
	v3 = dword_140C890EC;
	v4 = dword_140C890E8;
	v5 = v2;
	v6 = dword_140C890F0;
	v7 = v5 - v1;
	if (dword_140C890E8 < (unsigned int)qword_140C890CC)
		v4 = qword_140C890CC;
	dword_140C890DC = v7;
	if ((unsigned int)dword_140C890EC < HIDWORD(qword_140C890CC))
		v3 = HIDWORD(qword_140C890CC);
	dword_140C890E8 = v4;
	if (dword_140C890F0 < v7)
		v6 = v7;
	dword_140C890EC = v3;
	v8 = dword_140C890E4;
	dword_140C890F0 = v6;
	if (dword_140C890E4 < (unsigned int)dword_140C890C8)
		v8 = dword_140C890C8;
	dword_140C890E4 = v8;
	v9 = dword_140C890D8 % 0x3Cu;
	v10 = dword_140C890D4;
	dword_140C89100[v9] = HIDWORD(qword_140C890CC);
	dword_140C890D8 = v9 + 1;
	do
	{
		v11 = dword_140C89100[v0 + 5];
		v0 += 6i64;
		v10 += dword_140C89100[v0 - 6]
			+ dword_140C89100[v0 - 5]
			+ dword_140C89100[v0 - 4]
			+ dword_140C89100[v0 - 3]
			+ dword_140C89100[v0 - 2]
			+ v11;
	} while (v0 < 60);
	result = -2004318071 * v10;
	dword_140C890D4 = v10 / 0x3C;
	return result;
}
// 140C890C8: using guessed type int dword_140C890C8;
// 140C890CC: using guessed type __int64 qword_140C890CC;
// 140C890D4: using guessed type int dword_140C890D4;
// 140C890D8: using guessed type int dword_140C890D8;
// 140C890DC: using guessed type int dword_140C890DC;
// 140C890E0: using guessed type int dword_140C890E0;
// 140C890E4: using guessed type int dword_140C890E4;
// 140C890E8: using guessed type int dword_140C890E8;
// 140C890EC: using guessed type int dword_140C890EC;
// 140C890F0: using guessed type int dword_140C890F0;
// 140C89100: using guessed type _DWORD dword_140C89100[60];

