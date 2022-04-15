#include "../winhttp.h"

//----- (00000001407BC630) ----------------------------------------------------
__int64 __fastcall sub_1407BC630(__m128* a1)
{
	__int64 v3; // rcx
	_DWORD* i; // rax

	sub_1407B64C0((__int64)a1, a1 + 4, a1 + 4, 16449);
	sub_1407B74E0((__int64)a1);
	sub_1407B8180((__int64)a1);
	if ((unsigned __int64)qword_140C7F878 < 2)
		return 0i64;
	v3 = 0i64;
	if (qword_140C7F898)
	{
		for (i = (_DWORD*)(qword_140C7F890 + 48); !*i; i += 16)
		{
			if (++v3 >= (unsigned __int64)qword_140C7F898)
				return 1i64;
		}
		return 0i64;
	}
	return 1i64;
}
// 140C7F878: using guessed type __int64 qword_140C7F878;
// 140C7F890: using guessed type __int64 qword_140C7F890;
// 140C7F898: using guessed type __int64 qword_140C7F898;

