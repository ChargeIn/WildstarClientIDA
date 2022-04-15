#include "../winhttp.h"

//----- (0000000140306730) ----------------------------------------------------
unsigned __int8* __fastcall sub_140306730(__int64 a1, float* a2, __int64 a3, __int64 a4)
{
	__int64 v7; // rdi
	__int64 v8; // rbp
	unsigned __int8* result; // rax
	__int64 v10; // r9
	float* v11; // rsi
	unsigned int v12; // edx
	float v13; // [rsp+60h] [rbp+8h] BYREF

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(unsigned __int8**)(a1 + 16);
			*a2 = (float)*result * 0.0039215689;
		}
		else
		{
			result = 0i64;
			*a2 = 0.0;
		}
	}
	else
	{
		v7 = (unsigned int)(*(_DWORD*)(a3 + 104) - 1);
		v8 = v7;
		result = (unsigned __int8*)sub_140308510(a1, *(_DWORD*)(a3 + 24 * v7 + 8), a2, a4, (char*)&a2[v7 + 1]);
		if ((_DWORD)v7)
		{
			v11 = (float*)(a3 + 24 * v7 + 12);
			do
			{
				v12 = *((_DWORD*)v11 - 7);
				v11 -= 6;
				result = (unsigned __int8*)sub_140308510(a1, v12, &v13, v10, (char*)&a2[v8--]);
				*a2 = (float)((float)(*a2 - v13) * (float)(1.0 - *v11)) + v13;
				LODWORD(v7) = v7 - 1;
			} while ((_DWORD)v7);
		}
	}
	return result;
}
// 1403067BF: variable 'v10' is possibly undefined

