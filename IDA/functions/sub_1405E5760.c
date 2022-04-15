#include "../winhttp.h"

//----- (00000001405E5760) ----------------------------------------------------
void __fastcall sub_1405E5760(__int64* a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rdx
	__int64* v8; // r9
	_DWORD* v9; // rax

	v4 = sub_140245C00(*(_DWORD*)(a2 + 4));
	if (v4)
	{
		v5 = sub_1405E6000(a1, *(_DWORD*)(v4 + 8), 1);
		if (v5)
		{
			v6 = *((_QWORD*)v5 + 12);
			v7 = 0i64;
			if (v6)
			{
				v8 = (__int64*)(v5 + 22);
				v9 = (_DWORD*)*((_QWORD*)v5 + 11);
				while (*v9 != *(_DWORD*)(a2 + 4))
				{
					++v7;
					v9 += 3;
					if (v7 >= v6)
						goto LABEL_9;
				}
				sub_1405E7160(v8, v7);
			}
		LABEL_9:
			sub_1405E5AE0(a1, *(_DWORD*)a2, *(_DWORD*)(a2 + 4));
		}
	}
}

