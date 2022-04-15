#include "../winhttp.h"

//----- (000000014086FF10) ----------------------------------------------------
void __fastcall sub_14086FF10(__int64 a1, char a2, int a3, __int64 a4, __int64 a5)
{
	__int64 v5; // rbx
	__int64 i; // rbx
	_QWORD* v10; // rax
	_QWORD* v11; // rcx

	v5 = *(_QWORD*)(a1 + 56);
	if (v5)
	{
		for (i = *(_QWORD*)(v5 + 24); i; i = *(_QWORD*)(i + 32))
		{
			if (a5)
			{
				if (!a4)
				{
					v10 = *(_QWORD**)a5;
					v11 = *(_QWORD**)(a5 + 8);
					if (*(_QWORD**)a5 != v11)
					{
						while (*v10 != *(_QWORD*)(i + 176))
						{
							if (++v10 == v11)
								goto LABEL_11;
						}
						continue;
					}
				LABEL_11:
					sub_14085F4D0(i, a2, a3);
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

