#include "../winhttp.h"

//----- (0000000140377FE0) ----------------------------------------------------
void __fastcall sub_140377FE0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	unsigned __int64 v5; // rbx
	unsigned __int64 v6; // rsi
	__int64 v7; // rax

	if (*(_DWORD*)(a1 + 76))
	{
		sub_140378110(a1);
		sub_1403786A0(a1);
		v2 = *(_QWORD**)(a1 + 1184);
		if (v2)
			*v2 = *(_QWORD*)(a1 + 1192);
		v3 = *(_QWORD*)(a1 + 1192);
		if (v3)
			*(_QWORD*)(v3 + 1184) = *(_QWORD*)(a1 + 1184);
		v4 = *(_QWORD*)(a1 + 48);
		v5 = 0i64;
		*(_QWORD*)(a1 + 1184) = 0i64;
		*(_QWORD*)(a1 + 1192) = 0i64;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 72i64))(v4);
		if (v6)
		{
			do
			{
				v7 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
					*(_QWORD*)(a1 + 48),
					v5);
				if (v7)
					sub_140377FE0(v7);
				++v5;
			} while (v5 < v6);
		}
	}
}

