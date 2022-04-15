#include "../winhttp.h"

//----- (00000001408988A0) ----------------------------------------------------
void __fastcall sub_1408988A0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx
	int v3; // esi
	unsigned int v6; // ebp
	_QWORD* i; // rdi
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	bool v12; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(_QWORD**)(a1 + 128);
	v3 = 0;
	v6 = 0;
	for (i = v2; v2; v2 = (_QWORD*)*v2)
	{
		if (v2[1] >= a2)
			goto LABEL_11;
		i = v2;
	}
	v2 = i;
	if (i)
	{
		if (i[1] >= a2)
			goto LABEL_11;
		while (*(_BYTE*)(a1 + 200))
		{
			v8 = *(_QWORD*)(a1 + 136);
			v9 = sub_140898620(a1, &v12);
			if (v9 == v8 || !v9)
				break;
			if ((unsigned int)++v3 > 0x40)
			{
			LABEL_20:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 200i64))(a1);
				return;
			}
			i = v2;
			v2 = (_QWORD*)*v2;
			if (v2[1] >= a2)
			{
				while (1)
				{
				LABEL_11:
					++v6;
					if (v2)
					{
						i = v2;
						v2 = (_QWORD*)*v2;
					}
					else
					{
						if (!*(_BYTE*)(a1 + 200))
							return;
						v10 = *(_QWORD*)(a1 + 136);
						v11 = sub_140898620(a1, &v12);
						if (v11 == v10 || !v11)
							return;
						if ((unsigned int)++v3 > 0x40)
							goto LABEL_20;
						i = (_QWORD*)*i;
						v2 = (_QWORD*)*i;
					}
					if (v6 >= 3)
						return;
				}
			}
		}
	}
}

