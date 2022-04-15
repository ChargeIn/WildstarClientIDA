#include "../winhttp.h"

//----- (00000001401D3EC0) ----------------------------------------------------
__int64 __fastcall sub_1401D3EC0(_WORD* a1)
{
	int v3; // ecx
	bool i; // zf
	int v5; // edx
	_WORD* v6; // rax
	_WORD* v7; // rax
	int v8; // ecx

	if (a1)
	{
		v3 = 0;
		for (i = *a1 == 0; ; i = a1[v3] == 0)
		{
		LABEL_4:
			if (i)
				return 1i64;
			v5 = (unsigned __int16)a1[v3];
			if (v5 == 33)
				goto LABEL_8;
			if (v5 != 91)
				break;
			if (a1[++v3] == 33)
				++v3;
			v6 = &a1[v3];
			if (*v6 != 93)
			{
				while (1)
				{
					if (*v6 == 96)
					{
						++v3;
						++v6;
					}
					if (!*v6)
						return 0i64;
					++v6;
					++v3;
					if (*v6 == 45)
					{
						v7 = v6 + 1;
						v8 = v3 + 1;
						if (*v7 == 96)
						{
							++v8;
							++v7;
						}
						if (!*v7)
							return 0i64;
						v3 = v8 + 1;
						v6 = v7 + 1;
					}
					if (!*v6)
						return 0i64;
					if (*v6 == 93)
					{
						i = a1[++v3] == 0;
						goto LABEL_4;
					}
				}
			}
		LABEL_9:
			++v3;
		}
		if (v5 != 96)
			goto LABEL_9;
	LABEL_8:
		if (!a1[++v3])
			return 0i64;
		goto LABEL_9;
	}
	return 0i64;
}

