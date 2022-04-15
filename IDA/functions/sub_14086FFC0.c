#include "../winhttp.h"

//----- (000000014086FFC0) ----------------------------------------------------
void __fastcall sub_14086FFC0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 i; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax
	_QWORD* v7; // rax
	_QWORD* v8; // rcx

	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		for (i = *(_QWORD*)(v2 + 24); i; i = *(_QWORD*)(i + 32))
		{
			v5 = *(_QWORD*)(a2 + 24);
			v6 = *(_QWORD*)(a2 + 8);
			if (v5)
			{
				if (!v6)
				{
					v7 = *(_QWORD**)v5;
					v8 = *(_QWORD**)(v5 + 8);
					if (v7 != v8)
					{
						while (*v7 != *(_QWORD*)(i + 176))
						{
							if (++v7 == v8)
								goto LABEL_11;
						}
						continue;
					}
				LABEL_11:
					sub_14085F530(i, (float*)a2);
					continue;
				}
			}
			else if (!v6)
			{
				goto LABEL_11;
			}
			if (*(_QWORD*)(i + 176) == v6)
				goto LABEL_11;
		}
	}
}

