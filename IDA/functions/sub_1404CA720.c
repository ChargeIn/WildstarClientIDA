#include "../winhttp.h"

//----- (00000001404CA720) ----------------------------------------------------
void __fastcall sub_1404CA720(__int64 a1, __int64 a2)
{
	__int64* v2; // rbx
	int* v5; // rsi
	unsigned int v6; // ecx
	int* v7; // r8

	v2 = *(__int64**)(a1 + 8);
	if (v2 != *(__int64**)(a1 + 16))
	{
		v5 = (int*)(v2 + 1);
		do
		{
			v6 = *(_DWORD*)*v2;
			if (v6 == *(_DWORD*)(a2 + 16))
			{
				sub_1404CA0D0(v6, *(_QWORD**)(*v2 + 8), *(_DWORD*)(*v2 + 4), 0i64);
				sub_14018B900(*v2, 0);
				v7 = *(int**)(a1 + 16);
				if (v5 != v7)
					sub_1407DB590((int*)v2, v5, ((char*)v7 - (char*)v5) & 0xFFFFFFFFFFFFFFF8ui64);
				*(_QWORD*)(a1 + 16) -= 8i64;
			}
			else
			{
				++v2;
				v5 += 2;
			}
		} while (v2 != *(__int64**)(a1 + 16));
	}
}

