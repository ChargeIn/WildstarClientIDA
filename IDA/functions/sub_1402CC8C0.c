#include "../winhttp.h"

//----- (00000001402CC8C0) ----------------------------------------------------
void __fastcall sub_1402CC8C0(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	__int64 v4; // rcx
	unsigned int v5; // edi
	__int64 v6; // rax

	if (*(void(__fastcall****)(_QWORD))(a1 + 488) != a2)
	{
		if (a2)
			(**a2)(a2);
		v4 = *(_QWORD*)(a1 + 488);
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 488) = a2;
		if (*(int*)(a1 + 56) > 2)
		{
			v5 = 0;
			if (*(_QWORD*)(a1 + 256))
			{
				v6 = 0i64;
				do
				{
					sub_1402D0720(*(_QWORD*)(a1 + 248) + 416 * v6, *(_QWORD*)(a1 + 488));
					v6 = ++v5;
				} while ((unsigned __int64)v5 < *(_QWORD*)(a1 + 256));
			}
		}
	}
}

