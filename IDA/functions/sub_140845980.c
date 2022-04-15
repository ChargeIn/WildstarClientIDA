#include "../winhttp.h"

//----- (0000000140845980) ----------------------------------------------------
__int64 __fastcall sub_140845980(__int64 a1, unsigned __int8 a2, int a3, int a4, __int64 a5)
{
	__int64 v7; // r12
	_DWORD* v9; // rcx
	__int64 v10; // r15
	_DWORD* v11; // rax
	int i; // ebx
	__int64* v13; // r14
	_DWORD* v14; // rax
	_DWORD* v16; // rdi
	_DWORD* v17; // rax
	__int64 v18; // rdi
	unsigned int v19; // ebp
	int v20; // eax
	unsigned __int8 v21; // cl
	_QWORD* v22; // rdx

	v7 = a2;
	sub_140832470();
	v9 = *(_DWORD**)(a1 + 24 * (v7 + 1) + 8);
	v10 = a1 + 24 * (v7 + 1);
	v11 = *(_DWORD**)v10;
	for (i = a3 | (a4 << 16); v11 != v9; v11 += 4)
	{
		if (*v11 == i)
			break;
	}
	if (v11 == v9)
	{
		v13 = 0i64;
	}
	else
	{
		v13 = (__int64*)(v11 + 2);
		if (v11 != (_DWORD*)-8i64)
			goto LABEL_11;
	}
	v14 = (_DWORD*)sub_140845910(a1 + 24 * (v7 + 1));
	if (v14)
	{
		*v14 = i;
		v13 = (__int64*)(v14 + 2);
	}
	if (!v13)
		return 2i64;
LABEL_11:
	if (*v13)
		return 1i64;
	if ((unsigned int)sub_14082FB90(a3, a4, (__int64)&hWnd, v7, v13, a5) != 1)
	{
		v16 = *(_DWORD**)v10;
		v17 = *(_DWORD**)(v10 + 8);
		if (*(_DWORD**)v10 != v17)
		{
			do
			{
				if (*v16 == i)
					break;
				v16 += 4;
			} while (v16 != v17);
			if (v16 != v17)
			{
				if (v16 < v17 - 4)
					qmemcpy(
						v16,
						v16 + 4,
						8
						* (((((unsigned __int64)((char*)(v17 - 4) - (char*)v16 - 1) >> 3) & 0xFFFFFFFFFFFFFFFEui64) + 2) & 0x1FFFFFFFFFFFFFFEi64));
				*(_QWORD*)(v10 + 8) -= 16i64;
			}
		}
		return 2i64;
	}
	v18 = *(_QWORD*)a1;
	v19 = 1;
	if (*(_QWORD*)a1 != *(_QWORD*)(a1 + 8))
	{
		while (1)
		{
			v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v13 + 120i64))(*v13);
			v19 = sub_140870AB0(*(_QWORD*)(v18 + 8), v7, i, v20);
			if (v19 != 1)
				break;
			v18 += 16i64;
			if (v18 == *(_QWORD*)(a1 + 8))
				goto LABEL_27;
		}
		sub_140846440((__int64*)a1, v7, a3, a4);
	}
LABEL_27:
	*(_WORD*)(a1 + 136) = 0;
	v21 = 0;
	v22 = (_QWORD*)(a1 + 24);
	do
	{
		if ((unsigned int)((__int64)(v22[1] - *v22) >> 4))
		{
			*(_BYTE*)(a1 + 137) = v21 + 1;
			*(_BYTE*)(a1 + 136) |= 1 << v21;
		}
		++v21;
		v22 += 3;
	} while (v21 < 4u);
	sub_140843F60();
	return v19;
}

