#include "../winhttp.h"

//----- (00000001405A89B0) ----------------------------------------------------
__int64 sub_1405A89B0()
{
	__int64 v0; // rbp
	unsigned __int64 i; // rsi
	__int64 v2; // rdi
	__int64 v3; // rcx
	__int64 v4; // rbx

	v0 = qword_140C65B80;
	for (i = 0i64; i < *(_QWORD*)(v0 + 16); ++i)
	{
		v2 = *(_QWORD*)(*(_QWORD*)(v0 + 24) + 8 * i);
		while (v2)
		{
			v2 = *(_QWORD*)(v2 + 8);
			v3 = *(_QWORD*)(qword_140C65920 + 8);
			if (v3)
			{
				do
				{
					v4 = *(_QWORD*)(v3 + 32);
					if (*(_DWORD*)(v3 + 56) == 1)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
					v3 = v4;
				} while (v4);
			}
		}
	}
	return 0i64;
}
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65B80: using guessed type __int64 qword_140C65B80;

