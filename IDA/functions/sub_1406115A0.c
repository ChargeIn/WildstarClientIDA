#include "../winhttp.h"

//----- (00000001406115A0) ----------------------------------------------------
char* __fastcall sub_1406115A0(__int64 a1, unsigned int a2, int a3)
{
	char* result; // rax
	__int64 v6; // rbx
	int v7; // r14d
	unsigned int v8; // ebx
	int v9; // edi
	int v10; // eax

	result = *(char**)a1;
	if (*(_QWORD*)a1 && a2 < *((_DWORD*)result + 4))
	{
		v6 = a1 + 8i64 * a2;
		v7 = 0;
		sub_14079D700(*(__int64**)(v6 + 16), 1, a3, 0, 0);
		if (sub_1405517A0(*(_QWORD*)a1, a2))
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 16) + 72i64))(*(_QWORD*)(v6 + 16));
		v8 = sub_140551840(*(_QWORD*)a1, a2);
		if ((unsigned int)sub_1405515C0(*(_QWORD*)a1, a2) >= v8)
			v7 = 1;
		if (a2 < 6)
		{
			v9 = 1 << (a2 + 2);
			if (v9)
			{
				v10 = *(_DWORD*)(a1 + 68);
				if (v7)
				{
					if ((v10 & v9) == 0)
						*(_DWORD*)(a1 + 68) = v9 | v10;
				}
				else if ((v10 & v9) != 0)
				{
					*(_DWORD*)(a1 + 68) = v10 & ~v9;
				}
			}
		}
		return sub_140611710(a1);
	}
	return result;
}

