#include "../winhttp.h"

//----- (000000014086C150) ----------------------------------------------------
void __fastcall sub_14086C150(__int64 a1)
{
	_QWORD* k; // rbx
	int v3; // eax
	int v4; // eax
	__int64 v5; // r14
	__int64* i; // rdi
	_DWORD* v7; // rcx
	_DWORD* v8; // rax
	unsigned int* j; // rbx

	if ((_BYTE)qword_140C61B20)
	{
		v3 = *(_DWORD*)(a1 + 240);
		if (v3)
		{
			v4 = v3 - 1;
			*(_DWORD*)(a1 + 240) = v4;
			if (!v4)
			{
				v5 = sub_14087BB10(a1 + 224, *(_DWORD*)(a1 + 252), *(_DWORD*)(a1 + 248));
				if (v5)
				{
					for (i = *(__int64**)(a1 + 264); i; i = (__int64*)*i)
					{
						v7 = *(_DWORD**)(v5 + 8);
						v8 = *(_DWORD**)v5;
						if (*(_DWORD**)v5 != v7)
						{
							do
							{
								if (*v8 == *((_DWORD*)i + 2))
									break;
								++v8;
							} while (v8 != v7);
							if (v8 != v7)
							{
								for (j = (unsigned int*)i[2]; j != (unsigned int*)i[3]; ++j)
									sub_1408552B0(*j);
							}
						}
					}
				}
				sub_14087BBA0(a1 + 224, *(_DWORD*)(a1 + 252), *(_DWORD*)(a1 + 248));
			}
		}
	}
	else
	{
		for (k = *(_QWORD**)(a1 + 168); k != *(_QWORD**)(a1 + 176); ++k)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*k + 328i64))(*k);
	}
}
// 140C61B20: using guessed type __int64 qword_140C61B20;

