#include "../winhttp.h"

//----- (000000014007B490) ----------------------------------------------------
__int64 __fastcall sub_14007B490(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	_BYTE* v8; // rax
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 i; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0xFui64);
	if (v7 >= 0)
	{
		v7 = sub_14007B2D0(a1, (__int64)a2, (_DWORD*)(a3 + 8));
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 48), 1ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006C090(a1, (_DWORD*)(a3 + 52), 0x20ui64);
				if (v7 >= 0)
				{
					v7 = sub_14006C090(a1, (_DWORD*)(a3 + 56), 0x20ui64);
					if (v7 >= 0)
					{
						v7 = sub_14006C090(a1, (_DWORD*)(a3 + 60), 0x20ui64);
						if (v7 >= 0)
						{
							v8 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 60));
							*(_QWORD*)(a3 + 64) = v8;
							if (!v8)
								return 2147500037i64;
							v7 = sub_140337160(a1, v8, 4i64 * *(unsigned int*)(a3 + 60));
							if (v7 >= 0)
							{
								v7 = sub_14006C090(a1, (_DWORD*)(a3 + 72), 0x20ui64);
								if (v7 >= 0)
								{
									v9 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 72));
									*(_QWORD*)(a3 + 80) = v9;
									if (!v9)
										return 2147500037i64;
									for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 72); i = (unsigned int)(i + 1))
									{
										v7 = sub_14007B430(a1, v10, (_DWORD*)(*(_QWORD*)(a3 + 80) + 8 * i));
										if (v7 < 0)
											break;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 14007B5EB: variable 'v10' is possibly undefined

