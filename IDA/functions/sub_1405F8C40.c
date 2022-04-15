#include "../winhttp.h"

//----- (00000001405F8C40) ----------------------------------------------------
__int64 __fastcall sub_1405F8C40(__int64 a1, __int64 a2)
{
	int v2; // r14d
	unsigned int i; // edi
	unsigned int v6; // eax
	int v7; // esi
	_DWORD* v8; // rax
	unsigned int j; // edi
	unsigned int v10; // eax
	int v11; // esi
	_DWORD* v12; // rax
	unsigned int v13; // edi
	int v14; // esi
	int v15; // eax
	int v16; // edx
	unsigned int v17; // ecx
	__int64 v18; // r8
	__int64 result; // rax
	int v20; // ebp

	v2 = dword_140C636A8;
	for (i = 0; i < 0xE; ++i)
	{
		v6 = sub_1405F89F0(*(_DWORD*)a2, i);
		if (v6 < *(unsigned __int8*)(a2 + 4))
		{
			v7 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4i64 * v6);
			v8 = (_DWORD*)sub_1405F8A80(a1, i);
			if (*v8 != v7)
			{
				*v8 = v7;
				v8[1] = v2;
			}
		}
	}
	for (j = 100; j < 0x68; ++j)
	{
		v10 = sub_1405F89F0(*(_DWORD*)a2, j);
		if (v10 < *(unsigned __int8*)(a2 + 4))
		{
			v11 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4i64 * v10);
			v12 = (_DWORD*)sub_1405F8A80(a1, j);
			if (*v12 != v11)
			{
				*v12 = v11;
				v12[1] = v2;
			}
		}
	}
	v13 = 200;
	v14 = 256;
	do
	{
		v15 = *(_DWORD*)a2;
		if (v13 >= 0xE)
		{
			if (v13 >= 0x68)
				v16 = 1 << (v13 + 74);
			else
				v16 = 1 << (v13 - 86);
		}
		else
		{
			v16 = v14;
		}
		if ((v16 & v15) != 0)
		{
			v17 = (v15 & (v16 - 1))
				- (((v15 & (unsigned int)(v16 - 1)) >> 2) & 0x9249249)
				- (((v15 & (unsigned int)(v16 - 1)) >> 1) & 0x5B6DB6DB);
			v18 = ((v17 + (v17 >> 3)) & 0xC71C71C7) % 0x3F;
		}
		else
		{
			v18 = 0xFFFFFFFFi64;
		}
		result = *(unsigned __int8*)(a2 + 4);
		if ((unsigned int)v18 < (unsigned int)result)
		{
			v20 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * v18);
			result = sub_1405F8A80(a1, v13);
			if (*(_DWORD*)result != v20)
			{
				*(_DWORD*)result = v20;
				*(_DWORD*)(result + 4) = v2;
			}
		}
		v14 = __ROL4__(v14, 1);
		++v13;
	} while (v13 < 0xCE);
	return result;
}
// 1405F8D04: conditional instruction was optimized away because edi.4 is in (68..CD)
// 140C636A8: using guessed type int dword_140C636A8;

