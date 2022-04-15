#include "../winhttp.h"

//----- (00000001403780A0) ----------------------------------------------------
void __fastcall sub_1403780A0(__int64 a1)
{
	unsigned __int64 v2; // rbx
	unsigned __int64 v3; // rsi
	__int64 v4; // rax

	if (*(_DWORD*)(a1 + 76))
	{
		sub_140377F70(a1);
		v2 = 0i64;
		v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48));
		if (v3)
		{
			do
			{
				v4 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
					*(_QWORD*)(a1 + 48),
					v2);
				if (v4)
					sub_1403780A0(v4);
				++v2;
			} while (v2 < v3);
		}
	}
}

