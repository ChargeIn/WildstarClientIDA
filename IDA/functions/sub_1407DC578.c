#include "../winhttp.h"

//----- (00000001407DC578) ----------------------------------------------------
__int64 __fastcall sub_1407DC578(__int64 a1, char* a2)
{
	int i; // ebp
	unsigned __int64 v6; // rax
	char* v7; // r14
	__int16 v8; // di

	sub_1407E4830((int*)a1, 0i64, 0x1CAui64);
	if (!*(_WORD*)a2)
		return 0i64;
	if (*(_WORD*)a2 == 46 && *((_WORD*)a2 + 1))
	{
		if ((unsigned int)sub_1407E6D08(a1 + 256, 16i64, a2 + 2, 15i64))
		{
			sub_1407DC390();
			__debugbreak();
		}
		*(_WORD*)(a1 + 286) = 0;
		return 0i64;
	}
	for (i = 0; ; ++i)
	{
		v6 = sub_1407E6C60(a2, L"_.,");
		if (!v6)
			break;
		v7 = &a2[2 * v6];
		v8 = *(_WORD*)v7;
		if (i)
		{
			if (i == 1)
			{
				if (v6 >= 0x40 || v8 == 95)
					return 0xFFFFFFFFi64;
				if ((unsigned int)sub_1407E6D08(a1 + 128, 64i64, a2, v6))
				{
					sub_1407DC390();
					__debugbreak();
				}
			}
			else
			{
				if (i != 2 || v6 >= 0x10 || v8 && v8 != 44)
					return 0xFFFFFFFFi64;
				if ((unsigned int)sub_1407E6D08(a1 + 256, 16i64, a2, v6))
				{
					sub_1407DC390();
					JUMPOUT(0x1407DC72Ci64);
				}
			}
		}
		else
		{
			if (v6 >= 0x40 || v8 == 46)
				return 0xFFFFFFFFi64;
			if ((unsigned int)sub_1407E6D08(a1, 64i64, a2, v6))
			{
				sub_1407DC390();
				__debugbreak();
			}
		}
		if (v8 == 44 || !v8)
			return 0i64;
		a2 = v7 + 2;
	}
	return 0xFFFFFFFFi64;
}
// 1407DC727: control flows out of bounds to 1407DC72C
// 14095D518: using guessed type wchar_t asc_14095D518[4];

