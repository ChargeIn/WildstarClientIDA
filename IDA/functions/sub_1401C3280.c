#include "../winhttp.h"

//----- (00000001401C3280) ----------------------------------------------------
__int64 __fastcall sub_1401C3280(
	__int64(__fastcall* a1)(_QWORD, _QWORD, __int64),
	unsigned int* a2,
	unsigned __int64 a3,
	__int64 a4)
{
	__int64 result; // rax
	__int64(__fastcall * v7)(_QWORD, _QWORD, __int64); // r9
	unsigned int v8; // ecx
	unsigned __int64 v9; // rcx
	unsigned int v10; // r12d
	unsigned __int64 v11; // r13
	unsigned __int64 v12; // rdi
	unsigned int v13; // ebx
	unsigned int v14; // r15d
	int v15; // eax
	int v16; // eax
	unsigned __int64 i; // rbp
	unsigned int v18; // r12d
	unsigned __int64 v19; // rbx
	unsigned __int64 v20; // r13
	unsigned int v21; // edi
	unsigned int v22; // r15d
	int v23; // eax
	unsigned __int64 v24; // [rsp+20h] [rbp-48h]
	__int64 v26; // [rsp+80h] [rbp+18h]

	result = a4;
	v7 = a1;
	if (a3 == 2)
	{
		result = a1(*a2, a2[1], result);
		if ((int)result > 0)
		{
			v8 = *a2;
			result = a2[1];
			*a2 = result;
			a2[1] = v8;
		}
	}
	else if (a3 > 1)
	{
		result = a3 >> 1;
		if (a3 >> 1)
		{
			v9 = 2 * result + 1;
			do
			{
				v10 = a2[--result];
				v9 -= 2i64;
				v26 = result;
				v24 = v9;
				v11 = result;
				v12 = v9;
				if (v9 < a3)
				{
					do
					{
						v13 = a2[v12];
						if (v12 + 1 < a3)
						{
							v14 = a2[v12 + 1];
							v15 = v7(v14, v13, a4);
							if (v15 > 0 || !v15 && v14 > v13)
							{
								++v12;
								v13 = v14;
							}
							v7 = a1;
						}
						v16 = v7(v13, v10, a4);
						if (v16 <= 0 && (v16 || v13 <= v10))
							break;
						v7 = a1;
						a2[v11] = v13;
						v11 = v12;
						v12 = 2 * v12 + 1;
					} while (v12 < a3);
					result = v26;
					v7 = a1;
					v9 = v24;
				}
				a2[v11] = v10;
			} while (result);
		}
		for (i = a3 - 1; i; --i)
		{
			result = *a2;
			v18 = a2[i];
			v19 = 1i64;
			v20 = 0i64;
			for (a2[i] = result; v19 < i; v19 = 2 * v19 + 1)
			{
				v21 = a2[v19];
				if (v19 + 1 < i)
				{
					v22 = a2[v19 + 1];
					v23 = v7(v22, v21, a4);
					if (v23 > 0 || !v23 && v22 > v21)
					{
						++v19;
						v21 = v22;
					}
				}
				result = ((__int64(__fastcall*)(_QWORD, _QWORD, __int64, __int64(__fastcall*)(_QWORD, _QWORD, __int64)))a1)(
					v21,
					v18,
					a4,
					v7);
				if ((int)result <= 0 && ((_DWORD)result || v21 <= v18))
					break;
				v7 = a1;
				a2[v20] = v21;
				v20 = v19;
			}
			v7 = a1;
			a2[v20] = v18;
		}
	}
	return result;
}
// 1401C341E: variable 'v7' is possibly undefined

