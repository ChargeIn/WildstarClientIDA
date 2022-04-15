#include "../winhttp.h"

//----- (00000001406117F0) ----------------------------------------------------
char* __fastcall sub_1406117F0(char** a1)
{
	unsigned int v1; // ebp
	__int64 v3; // r14
	char* result; // rax
	__int64 v5; // rbx
	unsigned int* v6; // rbx
	__int64 v7; // rdi
	unsigned int v8; // esi

	v1 = 0;
	v3 = 24i64;
	do
	{
		result = *a1;
		if (v1 < *((_DWORD*)*a1 + 4))
		{
			v5 = *(_QWORD*)&result[v3];
			if (v5)
			{
				v6 = (unsigned int*)(v5 + 24);
				if (v6)
				{
					v7 = 4i64;
					do
					{
						result = (char*)qword_140C63840;
						v8 = *v6;
						if (qword_140C63840)
						{
							result = (char*)qword_140C63840(off_140A6E228, v8, qword_140C63858);
						}
						else if (!dword_140C63E98)
						{
							result = (char*)sub_14024B720();
							if ((int)result >= 0)
								result = (char*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(
									qword_140C65388,
									v8);
						}
						++v6;
						--v7;
					} while (v7);
				}
			}
		}
		++v1;
		v3 += 8i64;
	} while (v1 < 6);
	return result;
}
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;

