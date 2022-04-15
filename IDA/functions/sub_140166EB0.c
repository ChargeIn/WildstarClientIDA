#include "../winhttp.h"

//----- (0000000140166EB0) ----------------------------------------------------
__int64 __fastcall sub_140166EB0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	int v3; // edi
	__int64 v4; // rsi
	__int64 v5; // rcx

	v1 = sub_1401657E0(a1);
	v2 = v1;
	if (v1)
	{
		v3 = 0;
		if (*(int*)(v1 + 1144) > 0)
		{
			v4 = 0i64;
			do
			{
				v5 = *(_QWORD*)(v4 + *(_QWORD*)(v2 + 1136));
				if (v5)
					sub_14015EE20(v5);
				++v3;
				v4 += 8i64;
			} while (v3 < *(_DWORD*)(v2 + 1144));
		}
		sub_1400523E0((__int64*)(v2 + 1136));
		*(_QWORD*)(v2 + 1128) = 0i64;
		sub_1401601D0(v2);
	}
	return 0i64;
}

