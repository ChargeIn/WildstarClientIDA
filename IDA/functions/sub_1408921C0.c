#include "../winhttp.h"

//----- (00000001408921C0) ----------------------------------------------------
void __fastcall sub_1408921C0(__int64 a1, unsigned int a2, int* a3, int a4, int a5)
{
	__int64 v6; // rcx
	int v9; // esi
	unsigned int v10; // ebp
	unsigned int v11; // ebx
	unsigned int v12; // edi
	__int64 v13; // r9
	unsigned int v14; // eax

	v6 = *(_QWORD*)(a1 + 224);
	v9 = *(_DWORD*)(v6 + 4) + a4;
	if (v9 < 0)
	{
		v10 = v9 + a5;
		if (v9 + a5 <= 0)
			return;
		v9 = 0;
	}
	else
	{
		v10 = v9 + a5;
	}
	v11 = 1;
	v12 = ((*(_QWORD*)(a1 + 232) - v6) >> 4) - 2;
	if ((unsigned int)((*(_QWORD*)(a1 + 232) - v6) >> 4) != 2)
	{
		do
		{
			v13 = *(_QWORD*)(a1 + 224) + 16i64 * v11;
			v14 = *(_DWORD*)(v13 + 4);
			if (v14 >= v9)
			{
				if (v14 >= v10)
					return;
				sub_14083BF60(qword_140C61B80, a2, a3, *(_QWORD*)(v13 + 8));
			}
			++v11;
		} while (v11 <= v12);
	}
}
// 140C61B80: using guessed type __int64 qword_140C61B80;

