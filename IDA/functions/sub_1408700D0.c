#include "../winhttp.h"

//----- (00000001408700D0) ----------------------------------------------------
void __fastcall sub_1408700D0(__int64 a1, double a2, int a3, __int64 a4, __int64 a5)
{
	__int64 v5; // rbx
	__int64 i; // rbx
	_QWORD* v9; // rax
	_QWORD* v10; // rcx

	v5 = *(_QWORD*)(a1 + 56);
	if (v5)
	{
		for (i = *(_QWORD*)(v5 + 24); i; i = *(_QWORD*)(i + 32))
		{
			if (a5)
			{
				if (!a4)
				{
					v9 = *(_QWORD**)a5;
					v10 = *(_QWORD**)(a5 + 8);
					if (*(_QWORD**)a5 != v10)
					{
						while (*v9 != *(_QWORD*)(i + 176))
						{
							if (++v9 == v10)
								goto LABEL_11;
						}
						continue;
					}
				LABEL_11:
					sub_14085F8C0(i, a2, a3);
					continue;
				}
			}
			else if (!a4)
			{
				goto LABEL_11;
			}
			if (*(_QWORD*)(i + 176) == a4)
				goto LABEL_11;
		}
	}
}

