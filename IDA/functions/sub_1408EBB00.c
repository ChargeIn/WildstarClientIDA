#include "../winhttp.h"

//----- (00000001408EBB00) ----------------------------------------------------
__int64 __fastcall sub_1408EBB00(__int64 a1, __int64 a2)
{
	__int64 v2; // r14
	int v5; // eax
	__int64 v6; // rdx
	int v7; // esi
	__int64 v8; // r12
	__int64* v9; // rdi
	int v10; // ebp
	__int64 v11; // rax
	unsigned __int16 v12; // dx
	int v13; // r8d
	int v14; // ecx
	__int64 result; // rax
	int v16; // eax
	int v17; // ecx

	v2 = *(_QWORD*)(a1 + 32);
	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)a2;
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 8);
	v5 = sub_1408EC1C0(a1, 1);
	v6 = *(int*)(a1 + 148);
	*(_DWORD*)(a1 + 144) = v6;
	v7 = 0;
	v8 = 2i64 * v5;
	v9 = (__int64*)(a1 + 40);
	*(_DWORD*)(a1 + 148) = *(unsigned __int8*)(v8 + *(_QWORD*)(v2 + 32));
	v10 = *(_DWORD*)(v2 + 4 * v6);
	do
	{
		sub_1408ECE30(v10, *v9, v9[6]);
		++v7;
		++v9;
	} while (v7 < *(_DWORD*)(a1 + 24));
	if (*(_DWORD*)(a1 + 136) == -1)
	{
		v17 = *(unsigned __int16*)(a1 + 152);
		*(_QWORD*)(a1 + 136) = 0i64;
		result = (unsigned int)(*(_DWORD*)(v2 + 4) / 2);
		if (v17 >= (int)result)
			return result;
	}
	else
	{
		v11 = *(int*)(a1 + 148);
		*(_DWORD*)(a1 + 136) = 0;
		v12 = *(_WORD*)(a1 + 152);
		v13 = v10 / 4 + *(_DWORD*)(v2 + 4 * v11) / 4;
		*(_DWORD*)(a1 + 140) = v13;
		if (v12)
		{
			*(_DWORD*)(a1 + 136) = v12;
			if (v12 <= v13)
			{
				*(_WORD*)(a1 + 152) = 0;
			}
			else
			{
				*(_DWORD*)(a1 + 136) = v13;
				v14 = (unsigned __int16)(v12 - v13);
				*(_WORD*)(a1 + 152) = v14;
				result = (unsigned int)(*(_DWORD*)(v2 + 4) / 2);
				if (v14 >= (int)result)
					return result;
			}
		}
		if (*(_BYTE*)(a2 + 16))
		{
			*(_DWORD*)(a1 + 140) -= *(unsigned __int16*)(a1 + 154);
			v16 = *(_DWORD*)(a1 + 136);
			if (*(_DWORD*)(a1 + 140) < v16)
				*(_DWORD*)(a1 + 140) = v16;
		}
	}
	return sub_1408ED890(a1, *(_QWORD*)(v2 + 40) + 40i64 * *(unsigned __int8*)(v8 + *(_QWORD*)(v2 + 32) + 1));
}

