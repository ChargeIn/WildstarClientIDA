#include "../winhttp.h"

//----- (00000001401CC830) ----------------------------------------------------
__int64 __fastcall sub_1401CC830(__int64 a1, int a2, int a3, int a4)
{
	int v5; // ecx
	__int64 v6; // r11
	unsigned __int16 v9; // r10
	__int64 v10; // rdx
	__int16 v11; // ax
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rdx
	unsigned __int16 v15; // r8
	__int64 v16; // rcx
	int v17; // eax
	__int64 v18; // rdx
	__int64 v19; // rcx
	int v20; // eax
	unsigned __int8* v21; // r9
	__int64 v22; // r10
	int v23; // ecx
	__int64 v24; // rax
	unsigned __int16 v25; // r8
	__int64 v26; // rdx
	__int16 v27; // ax
	__int64 v28; // rcx
	int v29; // eax
	__int16 v30; // dx

	v5 = *(_DWORD*)(a1 + 5908);
	v6 = (unsigned int)a4;
	if (v5 <= 11)
	{
		*(_WORD*)(a1 + 5904) |= ((_WORD)a2 - 257) << v5;
		v13 = v5 + 5;
	}
	else
	{
		v9 = a2 - 257;
		v10 = *(unsigned int*)(a1 + 40);
		v11 = v9 << v5;
		v12 = *(_QWORD*)(a1 + 16);
		*(_WORD*)(a1 + 5904) |= v11;
		*(_BYTE*)(v10 + v12) = *(_BYTE*)(a1 + 5904);
		*(_BYTE*)((unsigned int)++ * (_DWORD*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5905);
		LODWORD(v10) = *(_DWORD*)(a1 + 5908);
		++* (_DWORD*)(a1 + 40);
		v13 = v10 - 11;
		*(_WORD*)(a1 + 5904) = v9 >> (16 - v10);
	}
	*(_DWORD*)(a1 + 5908) = v13;
	if (v13 <= 11)
	{
		*(_WORD*)(a1 + 5904) |= ((_WORD)a3 - 1) << v13;
		v17 = v13 + 5;
	}
	else
	{
		v14 = *(unsigned int*)(a1 + 40);
		v15 = a3 - 1;
		v16 = *(_QWORD*)(a1 + 16);
		*(_WORD*)(a1 + 5904) |= v15 << v13;
		*(_BYTE*)(v14 + v16) = *(_BYTE*)(a1 + 5904);
		*(_BYTE*)((unsigned int)++ * (_DWORD*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5905);
		LODWORD(v14) = *(_DWORD*)(a1 + 5908);
		++* (_DWORD*)(a1 + 40);
		v17 = v14 - 11;
		*(_WORD*)(a1 + 5904) = v15 >> (16 - v14);
	}
	*(_DWORD*)(a1 + 5908) = v17;
	if (v17 <= 12)
	{
		*(_WORD*)(a1 + 5904) |= ((_WORD)a4 - 4) << v17;
		v20 = v17 + 4;
	}
	else
	{
		v18 = *(unsigned int*)(a1 + 40);
		v19 = *(_QWORD*)(a1 + 16);
		*(_WORD*)(a1 + 5904) |= ((_WORD)a4 - 4) << v17;
		*(_BYTE*)(v18 + v19) = *(_BYTE*)(a1 + 5904);
		*(_BYTE*)((unsigned int)++ * (_DWORD*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5905);
		LODWORD(v18) = *(_DWORD*)(a1 + 5908);
		++* (_DWORD*)(a1 + 40);
		v20 = v18 - 12;
		*(_WORD*)(a1 + 5904) = (unsigned __int16)(a4 - 4) >> (16 - v18);
	}
	*(_DWORD*)(a1 + 5908) = v20;
	if (a4 > 0)
	{
		v21 = byte_140A480E8;
		v22 = v6;
		do
		{
			v23 = *(_DWORD*)(a1 + 5908);
			v24 = *v21;
			if (v23 <= 13)
			{
				v30 = *(_WORD*)(a1 + 4 * v24 + 2726);
				v29 = v23 + 3;
				*(_WORD*)(a1 + 5904) |= v30 << v23;
			}
			else
			{
				v25 = *(_WORD*)(a1 + 4 * v24 + 2726);
				v26 = *(unsigned int*)(a1 + 40);
				v27 = v25 << v23;
				v28 = *(_QWORD*)(a1 + 16);
				*(_WORD*)(a1 + 5904) |= v27;
				*(_BYTE*)(v26 + v28) = *(_BYTE*)(a1 + 5904);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(a1 + 40) + *(_QWORD*)(a1 + 16)) = *(_BYTE*)(a1 + 5905);
				LODWORD(v26) = *(_DWORD*)(a1 + 5908);
				++* (_DWORD*)(a1 + 40);
				v29 = v26 - 13;
				*(_WORD*)(a1 + 5904) = v25 >> (16 - v26);
			}
			++v21;
			*(_DWORD*)(a1 + 5908) = v29;
			--v22;
		} while (v22);
	}
	sub_1401CC200(a1, a1 + 188, a2 - 1);
	return sub_1401CC200(a1, a1 + 2480, a3 - 1);
}
// 140A480E8: using guessed type unsigned __int8 byte_140A480E8[24];

