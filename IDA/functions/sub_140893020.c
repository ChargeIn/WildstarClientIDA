#include "../winhttp.h"

//----- (0000000140893020) ----------------------------------------------------
__int64 __fastcall sub_140893020(_BYTE* a1, unsigned int* a2, int a3)
{
	__int64 result; // rax
	unsigned int v5; // ebx
	__int64 v6; // rsi
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rdx
	int v10; // ecx
	int v11; // ecx
	int v12; // ecx
	int v13; // ecx
	int v14; // ecx
	unsigned int* v15; // [rsp+48h] [rbp+20h] BYREF
	int v16; // [rsp+50h] [rbp+28h] BYREF

	v16 = a3;
	v15 = a2;
	result = sub_140896160(a1, &v15, &v16);
	if ((_DWORD)result == 1)
	{
		v5 = *v15++;
		if (v5)
		{
			v6 = v5;
			v7 = sub_1408819F0(dword_140C10F20, 28i64 * v5);
			v8 = v7;
			if (!v7)
				return 2i64;
			v9 = v7 + 8;
			do
			{
				v9 += 28i64;
				v10 = *v15++;
				*(_DWORD*)(v9 - 36) = v10;
				v11 = *v15++;
				*(_DWORD*)(v9 - 32) = v11;
				v12 = *v15++;
				*(_DWORD*)(v9 - 28) = v12;
				v13 = *v15++;
				*(_DWORD*)(v9 - 24) = v13;
				LOWORD(v13) = *(_WORD*)v15;
				v15 = (unsigned int*)((char*)v15 + 2);
				*(_WORD*)(v9 - 20) = v13;
				v14 = *v15++;
				*(_DWORD*)(v9 - 16) = v14;
				LOWORD(v14) = *(_WORD*)v15;
				v15 = (unsigned int*)((char*)v15 + 2);
				*(_WORD*)(v9 - 12) = v14;
				LOBYTE(v14) = *(_BYTE*)v15;
				v15 = (unsigned int*)((char*)v15 + 1);
				*(_BYTE*)(v9 - 10) = (_BYTE)v14 != 0;
				LOBYTE(v14) = *(_BYTE*)v15;
				v15 = (unsigned int*)((char*)v15 + 1);
				*(_BYTE*)(v9 - 9) = (_BYTE)v14 != 0;
				--v6;
			} while (v6);
			sub_1408931A0((__int64)a1, v7);
			sub_140881720(dword_140C10F20, v8);
		}
		return 1i64;
	}
	return result;
}
// 14089309A: conditional instruction was optimized away because ebx.4!=0
// 140C10F20: using guessed type int dword_140C10F20;

