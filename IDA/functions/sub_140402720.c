//----- (0000000140402720) ----------------------------------------------------
__int64 __fastcall sub_140402720(__int64 a1, __int64 a2, __int64* a3, int* a4)
{
	__int64 v8; // rdi
	__int64 v11; // rbp
	unsigned __int16 v12; // bx
	__int16 v14; // r10
	unsigned int v15; // eax

	sub_14001C2B0(a2, *(int**)(a2 + 8), *(int**)(a2 + 16));
	v8 = 0i64;
	a3[1] = 0i64;
	if (!a4 || !*(_WORD*)a4)
		return 1i64;
	if (**(_DWORD**)(a1 + 8) == 1)
	{
		while (*((_WORD*)a4 + ++v8) != 0)
			;
		sub_14001C480(a2, a4, (int*)((char*)a4 + 2 * v8));
		return 1i64;
	}
	sub_1400A7F20((_QWORD*)a2, 0x1F3ui64);
	sub_14040AF10(a3, 0x20ui64);
	v11 = 0i64;
	if (*(_WORD*)a4)
	{
		do
		{
			if ((unsigned __int64)((__int64)(*(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 8)) >> 1) >= 0x1F3)
				break;
			v12 = *((_WORD*)a4 + v11);
			if (sub_1403E0AE0(v12) || v12 == v14)
			{
				if (v12 == 60)
				{
					v15 = *((unsigned __int16*)a4 + v11 + 1) - 33;
					if (v15 <= 0x4D)
						__asm { jmp     rcx }
				}
				sub_1400A7EA0((_QWORD*)a2, v12);
			}
			++v11;
		} while (*((_WORD*)a4 + v11));
	}
	LOBYTE(v8) = *((_WORD*)a4 + v11) == 0;
	return (unsigned int)v8;
}
// 140402801: variable 'v14' is possibly undefined

