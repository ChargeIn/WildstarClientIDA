#include "../winhttp.h"

//----- (00000001402D2070) ----------------------------------------------------
__int64 __fastcall sub_1402D2070(__int64 a1, __int64 a2)
{
	__int64 v3; // rsi
	__int64 v4; // rbx
	int i; // edi
	__int64 v6; // rcx
	__int64 v7; // rbx
	int j; // edi
	__int64 v9; // rcx
	__int64 result; // rax

	if (a1 != a2)
	{
		v3 = a1 + 72;
		do
		{
			v4 = v3 + 32;
			for (i = 3; i >= 0; --i)
			{
				v6 = *(_QWORD*)(v4 - 8);
				v4 -= 8i64;
				if (v6)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			}
			v7 = v3;
			for (j = 3; j >= 0; --j)
			{
				v9 = *(_QWORD*)(v7 - 8);
				v7 -= 8i64;
				if (v9)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			}
			v3 += 192i64;
			result = v3 - 72;
		} while (v3 - 72 != a2);
	}
	return result;
}

