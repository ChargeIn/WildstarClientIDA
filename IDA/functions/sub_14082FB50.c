#include "../winhttp.h"

//----- (000000014082FB50) ----------------------------------------------------
__int64 __fastcall sub_14082FB50(__int64 a1, int a2, int a3)
{
	_DWORD* v3; // rax
	__int64 (**v4)(void); // rax

	v3 = (_DWORD*)qword_140C61C20;
	if (qword_140C61C20 == qword_140C61C28)
		return 0i64;
	do
	{
		if (*v3 == a3)
			break;
		v3 += 6;
	} while (v3 != (_DWORD*)qword_140C61C28);
	if (v3 == (_DWORD*)qword_140C61C28)
		return 0i64;
	v4 = (__int64 (**)(void))(v3 + 2);
	if (!v4)
		return 0i64;
	if (a2 == 1)
		return (*v4)();
	return v4[1]();
}
// 140C61C20: using guessed type __int64 qword_140C61C20;
// 140C61C28: using guessed type __int64 qword_140C61C28;

