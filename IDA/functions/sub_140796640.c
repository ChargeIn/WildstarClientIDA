#include "../winhttp.h"

//----- (0000000140796640) ----------------------------------------------------
__int64 __fastcall sub_140796640(_QWORD* a1, __int64 a2)
{
	const __m128i* v2; // rdi
	__int8* v4; // rax
	const char* v5; // rax
	__int64 result; // rax
	unsigned __int64 v7; // rdx
	_QWORD* v8; // rcx
	__int64 v9; // rdx

	v2 = (const __m128i*)a2;
	v4 = sub_1407DE0B4(a2, byte_140C39CD4);
	if (v4)
		v2 = (const __m128i*)(v4 + 1);
	v5 = (const char*)sub_140057200(a1, v2, (const __m128i*)asc_140C39C7C, asc_140C39C94);
	result = sub_140058780((__int64)a1, (unsigned __int64*)"luaopen_%s", v5);
	v7 = a1[2];
	v8 = (_QWORD*)(v7 - 16);
	if (v7 - 16 < v7)
	{
		do
		{
			v9 = *v8;
			v8 += 2;
			*(v8 - 4) = v9;
			*((_DWORD*)v8 - 6) = *((_DWORD*)v8 - 2);
		} while ((unsigned __int64)v8 < a1[2]);
	}
	a1[2] -= 16i64;
	return result;
}
// 140C39CD4: using guessed type char byte_140C39CD4;

