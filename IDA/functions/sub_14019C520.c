#include "../winhttp.h"

//----- (000000014019C520) ----------------------------------------------------
void __fastcall sub_14019C520(__int64 a1, unsigned int a2)
{
	unsigned int* v2; // rdi
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 i; // rax
	__int64 j; // rax

	v2 = (unsigned int*)qword_140C63750;
	if (*(_DWORD*)qword_140C63750 != a2)
	{
		v4 = *(_QWORD*)(qword_140C63750 + 16);
		v5 = *(_QWORD*)(v4 + 16);
		if (v5 != v4)
		{
			do
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(v5 + 40) + 40i64))(*(_QWORD*)(v5 + 40), *v2, a2);
				v6 = *(_QWORD*)(v5 + 24);
				if (v6)
				{
					v5 = *(_QWORD*)(v5 + 24);
					for (i = *(_QWORD*)(v6 + 16); i; i = *(_QWORD*)(i + 16))
						v5 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v5 + 8); v5 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v5 = j;
					if (*(_QWORD*)(v5 + 24) != j)
						v5 = j;
				}
			} while (v5 != *((_QWORD*)v2 + 2));
		}
		*v2 = a2;
	}
}
// 140C63750: using guessed type __int64 qword_140C63750;

