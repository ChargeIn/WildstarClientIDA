#include "../winhttp.h"

//----- (000000014072A7D0) ----------------------------------------------------
void __fastcall sub_14072A7D0(__int64 a1, __int64 a2)
{
	int v2; // eax
	_DWORD* v5; // rdi
	__int64 v6; // rsi
	__int64 v7; // rcx
	__int64 v8; // rcx

	if (a1)
	{
		v2 = *(_DWORD*)(a2 + 20);
		if (v2 == 6)
		{
			if (++ * (_DWORD*)(a2 + 1260) == 3)
				sub_140729BF0(a2);
		}
		else if (v2 == 12 && ++ * (_DWORD*)(a2 + 1260) == 3)
		{
			*(_DWORD*)(a2 + 1256) = 0;
			v5 = (_DWORD*)(a2 + 56);
			v6 = 3i64;
			do
			{
				if (*v5)
				{
					v7 = qword_140C665E0;
					++* (_DWORD*)(a2 + 1256);
					if (v7)
						Apollo_LUAEvent(
							*(_QWORD*)(v7 + 1424),
							"CardFlipped",
							byte_1409F8DC4,
							(unsigned int)(*(_DWORD*)(a1 + 40) + 1));
				}
				++v5;
				--v6;
			} while (v6);
			v8 = *(_QWORD*)(a2 + 1168);
			*(_DWORD*)(a2 + 20) = 8;
			sub_14078B410(v8);
		}
	}
}
// 1409F8DC4: using guessed type _BYTE byte_1409F8DC4[48];
// 140C665E0: using guessed type __int64 qword_140C665E0;

