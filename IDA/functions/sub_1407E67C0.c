#include "../winhttp.h"

//----- (00000001407E67C0) ----------------------------------------------------
void __fastcall sub_1407E67C0(char* lpMem)
{
	void** v1; // rax
	_DWORD* v3; // rax
	_DWORD* v4; // rcx
	_DWORD* v5; // rcx
	_DWORD* v6; // rax
	__int64 v7; // rcx
	LPVOID* v8; // rsi
	_DWORD** v9; // rdi
	__int64 v10; // rbp
	_DWORD* v11; // rcx
	_DWORD* v12; // rcx

	v1 = (void**)*((_QWORD*)lpMem + 30);
	if (v1)
	{
		if (v1 != &off_140C0F6F0)
		{
			v3 = (_DWORD*)*((_QWORD*)lpMem + 27);
			if (v3)
			{
				if (!*v3)
				{
					v4 = (_DWORD*)*((_QWORD*)lpMem + 29);
					if (v4 && !*v4)
					{
						sub_1407E14C0(v4);
						sub_1407E4D98(*((_QWORD**)lpMem + 30));
					}
					v5 = (_DWORD*)*((_QWORD*)lpMem + 28);
					if (v5 && !*v5)
					{
						sub_1407E14C0(v5);
						sub_1407E53C4(*((_QWORD*)lpMem + 30));
					}
					sub_1407E14C0(*((LPVOID*)lpMem + 27));
					sub_1407E14C0(*((LPVOID*)lpMem + 30));
				}
			}
		}
	}
	v6 = (_DWORD*)*((_QWORD*)lpMem + 31);
	if (v6 && !*v6)
	{
		sub_1407E14C0((LPVOID)(*((_QWORD*)lpMem + 32) - 254i64));
		sub_1407E14C0((LPVOID)(*((_QWORD*)lpMem + 34) - 128i64));
		sub_1407E14C0((LPVOID)(*((_QWORD*)lpMem + 35) - 128i64));
		sub_1407E14C0(*((LPVOID*)lpMem + 31));
	}
	v7 = *((_QWORD*)lpMem + 36);
	if ((void**)v7 != &off_140C10020 && !*(_DWORD*)(v7 + 348))
	{
		sub_1407E571C((LPVOID*)v7);
		sub_1407E14C0(*((LPVOID*)lpMem + 36));
	}
	v8 = (LPVOID*)(lpMem + 296);
	v9 = (_DWORD**)(lpMem + 40);
	v10 = 6i64;
	do
	{
		if (*(v9 - 2) != (_DWORD*)&unk_140C10010)
		{
			v11 = *v9;
			if (*v9)
			{
				if (!*v11)
				{
					sub_1407E14C0(v11);
					sub_1407E14C0(*v8);
				}
			}
		}
		if (*(v9 - 3))
		{
			v12 = *(v9 - 1);
			if (v12)
			{
				if (!*v12)
					sub_1407E14C0(v12);
			}
		}
		++v8;
		v9 += 4;
		--v10;
	} while (v10);
	sub_1407E14C0(lpMem);
}
// 140C0F6F0: using guessed type void *off_140C0F6F0;
// 140C10020: using guessed type void *off_140C10020;

