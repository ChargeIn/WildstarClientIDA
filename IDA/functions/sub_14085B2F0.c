#include "../winhttp.h"

//----- (000000014085B2F0) ----------------------------------------------------
void __fastcall sub_14085B2F0(__int64 a1, int* a2)
{
	bool v2; // zf
	__int64 v5; // rax
	int v6; // eax
	_QWORD* v7; // rbx
	__int64 v8; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rax
	_QWORD** v11; // rsi
	_QWORD** v12; // rdi
	_QWORD* v13; // rbx
	__int64 v14; // rax

	v2 = *a2 == 4;
	*((_BYTE*)a2 + 16) = 1;
	if (v2 && sub_14085AF10(a1))
	{
		if (a1 == qword_140C62458)
			sub_1408339F0(*((float*)a2 + 8));
		else
			sub_140833840(*(_DWORD*)(a1 + 24), *((float*)a2 + 8));
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 56);
		if (v5 && (*(_WORD*)(v5 + 72) || *(_WORD*)(v5 + 74)))
		{
			v6 = *a2;
			if (*a2 == 4)
			{
				v7 = *(_QWORD**)(a1 + 136);
				for (*(float*)(a1 + 320) = *((float*)a2 + 8) + *(float*)(a1 + 320); v7 != *(_QWORD**)(a1 + 144); ++v7)
				{
					v8 = *(_QWORD*)(*v7 + 56i64);
					if (v8 && (*(_WORD*)(v8 + 72) || *(_WORD*)(v8 + 74)))
						(*(void(__fastcall**)(_QWORD, int*))(*(_QWORD*)*v7 + 160i64))(*v7, a2);
				}
			}
			else if (v6)
			{
				if (v6 == 33)
				{
					*(_BYTE*)(a1 + 328) |= 0x20u;
				}
				else if (((v6 - 32) & 0xFFFFFFFD) != 0)
				{
					v11 = (_QWORD**)(a1 + 136);
					v12 = (_QWORD**)(a1 + 112);
					v13 = *v11;
					if (*v11 != v11[1])
						goto LABEL_39;
					if (v11 != v12)
					{
						v13 = *v12;
						v11 = v12;
					}
					if (v13 != v11[1])
					{
					LABEL_39:
						while (1)
						{
							v14 = *(_QWORD*)(*v13 + 56i64);
							if (v14 && (*(_WORD*)(v14 + 72) || *(_WORD*)(v14 + 74)))
								(*(void(__fastcall**)(_QWORD, int*))(*(_QWORD*)*v13 + 160i64))(*v13, a2);
							if (++v13 == v11[1])
							{
								if (v11 != v12)
								{
									v13 = *v12;
									v11 = v12;
								}
								if (v13 == v11[1])
									break;
							}
						}
					}
				}
				else
				{
					*(_BYTE*)(a1 + 328) |= 0x40u;
				}
			}
			else
			{
				v9 = *(_QWORD**)(a1 + 136);
				for (*(float*)(a1 + 324) = *((float*)a2 + 8) + *(float*)(a1 + 324); v9 != *(_QWORD**)(a1 + 144); ++v9)
				{
					v10 = *(_QWORD*)(*v9 + 56i64);
					if (v10 && (*(_WORD*)(v10 + 72) || *(_WORD*)(v10 + 74)))
						(*(void(__fastcall**)(_QWORD, int*))(*(_QWORD*)*v9 + 160i64))(*v9, a2);
				}
			}
		}
	}
}
// 14085B362: conditional instruction was optimized away because rax.8!=0
// 14085B3C6: conditional instruction was optimized away because rax.8!=0
// 14085B446: conditional instruction was optimized away because rax.8!=0
// 14085B4E6: conditional instruction was optimized away because rax.8!=0
// 140C62458: using guessed type __int64 qword_140C62458;

