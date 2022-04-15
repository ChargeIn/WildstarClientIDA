#include "../winhttp.h"

//----- (0000000140160120) ----------------------------------------------------
void __fastcall sub_140160120(__int64 a1, int a2)
{
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rdi
	int v6; // edx
	int v7; // ecx
	int v8; // eax

	if (a2 >= 0 && a2 < *(_DWORD*)(a1 + 1160))
	{
		v3 = *(_QWORD*)(a1 + 1152);
		v4 = a2;
		v5 = *(_QWORD*)(v3 + 8i64 * a2);
		if (v5)
		{
			sub_14015D320(*(_QWORD*)(v3 + 8i64 * a2));
			sub_14018B900(v5, 0);
		}
		sub_140007270(a1 + 1152, v4);
		v6 = *(_DWORD*)(a1 + 1160) - 1;
		v7 = v6;
		if (*(_DWORD*)(a1 + 1032) < v6)
			v7 = *(_DWORD*)(a1 + 1032);
		v8 = *(_DWORD*)(a1 + 1040);
		*(_DWORD*)(a1 + 1032) = v7;
		if (v8 < v6)
			v6 = v8;
		*(_DWORD*)(a1 + 1040) = v6;
		sub_14015F180(a1);
	}
}

