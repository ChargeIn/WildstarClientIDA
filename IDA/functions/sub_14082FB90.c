#include "../winhttp.h"

//----- (000000014082FB90) ----------------------------------------------------
__int64 __fastcall sub_14082FB90(int a1, int a2, __int64 a3, unsigned __int8 a4, __int64* a5, __int64 a6)
{
	_DWORD* v6; // rax
	__int64 i; // rdx
	__int64(__fastcall * *v10)(__int64(__fastcall***)(), __int64); // rax
	__int64 v11; // rax
	__int64 result; // rax

	v6 = (_DWORD*)qword_140C61C38;
	for (i = (unsigned int)(16 * (a1 + (a2 << 12)) + 4); v6 != (_DWORD*)qword_140C61C40; v6 += 4)
	{
		if (*v6 == (_DWORD)i)
			break;
	}
	if (v6 != (_DWORD*)qword_140C61C40)
	{
		v10 = (__int64(__fastcall**)(__int64(__fastcall***)(), __int64))(v6 + 2);
		if (v10)
		{
			v11 = (*v10)(&off_140C10F70, i);
			*a5 = v11;
			if (v11)
			{
				result = (*(__int64(__fastcall**)(__int64, __int64(__fastcall***)(), __int64, _QWORD, __int64))(*(_QWORD*)v11 + 48i64))(
					v11,
					&off_140C10F70,
					a3,
					a4,
					a6);
				if ((_DWORD)result == 1)
					return result;
				(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)*a5 + 8i64))(*a5, &off_140C10F70);
				*a5 = 0i64;
			}
		}
	}
	return 2i64;
}
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();
// 140C61C38: using guessed type __int64 qword_140C61C38;
// 140C61C40: using guessed type __int64 qword_140C61C40;

