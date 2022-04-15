#include "../winhttp.h"

//----- (00000001400B1260) ----------------------------------------------------
__int64 sub_1400B1260()
{
	unsigned int i; // ebx
	unsigned __int64 v1; // rdx
	unsigned __int64 j; // rbx
	void(__fastcall * **v3)(_QWORD, __int64); // rcx
	__int64 result; // rax

	dword_140C67030 = 7;
	if (!(_QWORD)xmmword_140C67080)
		return 2147500037i64;
	(*(void (**)(void))(*(_QWORD*)xmmword_140C67080 + 8i64))();
	sub_1400B4BE0((__int64)&unk_140C66FA0);
	for (i = 0; i < 0x14; ++i)
	{
		if (!(_QWORD)xmmword_140C67080)
			return 2147500037i64;
		if ((*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)xmmword_140C67080 + 16i64))(xmmword_140C67080))
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)xmmword_140C67080 + 24i64))(xmmword_140C67080);
			*(_QWORD*)&xmmword_140C67080 = 0i64;
			result = 0i64;
			dword_140C67030 = 6;
			return result;
		}
		Sleep(0x64u);
	}
	v1 = qword_140C670A8;
	for (j = 0i64; j < v1; ++j)
	{
		v3 = *(void(__fastcall****)(_QWORD, __int64))(qword_140C670A0 + 8 * j);
		if (v3)
		{
			(**v3)(v3, 1i64);
			v1 = qword_140C670A8;
		}
	}
	qword_140C670A8 = 0i64;
	return 2147500037i64;
}
// 140C67030: using guessed type int dword_140C67030;
// 140C67080: using guessed type __int128 xmmword_140C67080;
// 140C670A0: using guessed type __int64 qword_140C670A0;
// 140C670A8: using guessed type __int64 qword_140C670A8;

