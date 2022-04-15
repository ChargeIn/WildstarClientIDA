#include "../winhttp.h"

//----- (000000014077C8B0) ----------------------------------------------------
__int64 __fastcall sub_14077C8B0(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
	int v8; // ecx
	unsigned __int64 v9; // r9
	__int64 v10; // rdx
	unsigned __int64 v11; // r8
	_DWORD* v12; // rax
	unsigned __int64 v13; // r8
	_DWORD* i; // rax
	int v16; // ecx

	if (a3 != 1)
	{
		switch (a3)
		{
		case 2:
			return 3i64;
		case 3:
			return 6i64;
		case 5:
			if (a5 < 5)
				return a5 + 8;
			break;
		default:
			if (a4)
			{
				v8 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a4 + 8));
				if (!a3)
				{
					if (a2)
					{
						v9 = *(_QWORD*)(a4 + 144);
						v10 = 0i64;
						v11 = 0i64;
						if (!v9)
							goto LABEL_12;
						v12 = *(_DWORD**)(a4 + 136);
						while (*v12 != a2)
						{
							++v11;
							++v12;
							if (v11 >= v9)
								goto LABEL_12;
						}
						if (v8 == 1)
							return 4i64;
						if (v8 != 2)
						{
							if (v8 == 4)
								return 4i64;
						LABEL_12:
							v13 = *(_QWORD*)(a4 + 128);
							if (v13)
							{
								for (i = *(_DWORD**)(a4 + 120); *i != a2; ++i)
								{
									if (++v10 >= v13)
										return 0i64;
								}
								if ((unsigned int)(v8 - 1) <= 1)
									return 2i64;
							}
							return 0i64;
						}
						return 5i64;
					}
					v16 = v8 - 1;
					if (v16)
					{
						if (v16 != 1)
							return 0i64;
						return 5i64;
					}
					return 1i64;
				}
			}
			break;
		}
		return 14i64;
	}
	return 1i64;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

