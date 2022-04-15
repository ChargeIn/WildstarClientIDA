#include "../winhttp.h"

//----- (00000001405E57F0) ----------------------------------------------------
void __fastcall sub_1405E57F0(__int64 a1, __int64 a2)
{
	unsigned int v2; // ebx
	_QWORD* v5; // r8
	__int64 v6; // r9
	_DWORD* v7; // rax
	int v8; // xmm0_4
	__int64 v9; // rax
	__int64 v10; // rdx
	int v11; // r11d
	int v12; // r8d
	float v13; // xmm0_4
	int v14; // r9d
	int v15; // r10d
	__int64 v16; // rcx

	v2 = 0;
	v5 = (_QWORD*)(a1 + 16);
	v6 = 66i64;
	do
	{
		v7 = (_DWORD*)*v5;
		if (*(_DWORD*)*v5 == 3)
			v8 = 1065353216;
		else
			v8 = 0;
		++v5;
		v7[1] = v8;
		v7[2] = 0;
		*((_QWORD*)v7 + 3) = 0i64;
		--v6;
	} while (v6);
	if (*(_DWORD*)a2)
	{
		do
		{
			v9 = *(_QWORD*)(a2 + 8);
			v10 = *(unsigned int*)(v9 + 24i64 * v2);
			if ((unsigned int)v10 < 0x42)
			{
				v11 = *(_DWORD*)(v9 + 24i64 * v2 + 4);
				v12 = *(_DWORD*)(v9 + 24i64 * v2 + 20);
				v13 = *(float*)(v9 + 24i64 * v2 + 16);
				v14 = *(_DWORD*)(v9 + 24i64 * v2 + 12);
				v15 = *(_DWORD*)(v9 + 24i64 * v2 + 8);
				v16 = *(_QWORD*)(a1 + 8 * v10 + 16);
				if (v11 || v15 || v14)
				{
					sub_14079E250(v16, v11, v15, v14, v13, v12);
				}
				else if (*(_DWORD*)v16)
				{
					switch (*(_DWORD*)v16)
					{
					case 1:
						*(_DWORD*)(v16 + 8) = v12;
						break;
					case 2:
						*(float*)(v16 + 4) = v13 + *(float*)(v16 + 4);
						break;
					case 3:
						*(float*)(v16 + 4) = v13 * *(float*)(v16 + 4);
						break;
					}
				}
				else
				{
					*(_DWORD*)(v16 + 8) = 1;
				}
			}
			++v2;
		} while (v2 < *(_DWORD*)a2);
	}
}

