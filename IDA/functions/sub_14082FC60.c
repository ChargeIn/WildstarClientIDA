#include "../winhttp.h"

//----- (000000014082FC60) ----------------------------------------------------
__int64 __fastcall sub_14082FC60(__int64 a1, int a2, __int64* a3)
{
	_DWORD* v3; // rax
	_DWORD* v5; // rax
	__int64 (*v6)(void); // rdx
	__int64 v8; // rax

	*a3 = 0i64;
	v3 = (_DWORD*)qword_140C61C08;
	if (qword_140C61C08 == qword_140C61C10)
		return 2i64;
	do
	{
		if (*v3 == a2)
			break;
		v3 += 6;
	} while (v3 != (_DWORD*)qword_140C61C10);
	if (v3 == (_DWORD*)qword_140C61C10)
		return 2i64;
	v5 = v3 + 2;
	if (!v5)
		return 2i64;
	v6 = (__int64 (*)(void)) * ((_QWORD*)v5 + 1);
	if (!v6)
		return 1i64;
	v8 = v6();
	*a3 = v8;
	return 2 - (unsigned int)(v8 != 0);
}
// 140C61C08: using guessed type __int64 qword_140C61C08;
// 140C61C10: using guessed type __int64 qword_140C61C10;

