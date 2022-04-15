#include "../winhttp.h"

//----- (00000001404FE990) ----------------------------------------------------
void __fastcall sub_1404FE990(__int64 a1)
{
	__int64 v2; // rax
	unsigned __int64 v3; // rsi
	int v4; // ebp
	__int64 v5; // rax
	__int64 v6; // rax
	__int64* v7; // rcx
	__int64 v8; // rbx

	if (!*(_DWORD*)(a1 + 2224) && *(_QWORD*)(a1 + 2184) && qword_140C65B78)
	{
		v2 = *(_QWORD*)(a1 + 2192);
		v3 = 0i64;
		*(_DWORD*)(a1 + 2224) = 1;
		v4 = 0;
		if (v2)
		{
			v5 = *(_QWORD*)(v2 + 16);
			if (v5)
				v4 = *(_DWORD*)(v5 + 8);
		}
		if (*(_QWORD*)(a1 + 2240))
		{
			do
			{
				v6 = *(_QWORD*)(*(_QWORD*)(a1 + 2248) + 8 * v3);
				if (v6)
				{
					do
					{
						v7 = *(__int64**)(v6 + 24);
						v8 = *(_QWORD*)(v6 + 8);
						if (!*v7)
							sub_1405792A0(
								*(_QWORD*)(a1 + 2168),
								*(_DWORD*)(v6 + 16),
								v4,
								*(void(__fastcall****)(_QWORD))(a1 + 2160),
								*(void(__fastcall****)(_QWORD))(a1 + 2168),
								v7);
						v6 = v8;
					} while (v8);
				}
				++v3;
			} while (v3 < *(_QWORD*)(a1 + 2240));
		}
	}
}
// 140C65B78: using guessed type __int64 qword_140C65B78;

