//----- (00000001408A80E0) ----------------------------------------------------
__int64 __fastcall sub_1408A80E0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v3; // ebp
	int v5; // ecx
	__int64 result; // rax
	unsigned int v7; // r13d
	unsigned int v8; // esi
	__int64 v9; // r15
	unsigned int v10; // ebx
	float* v11; // r12
	int v12; // r14d
	int v13; // eax
	__int64 v15; // [rsp+70h] [rbp+18h]
	unsigned int v16; // [rsp+78h] [rbp+20h]

	v15 = a3;
	v3 = 0;
	v5 = *(_DWORD*)(a3 + 8);
	v16 = 0;
	if (v5)
	{
		do
		{
			result = (unsigned int)(v5 - 1);
			++v3;
			v5 &= result;
		} while (v5);
		v16 = v3;
	}
	v7 = *(unsigned __int16*)(a3 + 18);
	v8 = 0;
	if (v3)
	{
		v9 = 0i64;
		do
		{
			v10 = 0;
			v11 = (float*)(*(_QWORD*)a3 + 4 * v9 * *(unsigned __int16*)(a3 + 16));
			result = *(unsigned __int16*)(a1 + 16);
			v12 = v8 * *(unsigned __int16*)(a1 + 16);
			if (*(_WORD*)(a1 + 16))
			{
				do
				{
					v13 = *(_DWORD*)(a1 + 12);
					if (_bittest(&v13, v10))
						sub_1408A8970((__m128*)(a2 + 176i64 * (v10 + v12)), v11, v7);
					result = *(unsigned __int16*)(a1 + 16);
					++v10;
				} while (v10 < (unsigned int)result);
				v3 = v16;
				a3 = v15;
			}
			++v8;
			++v9;
		} while (v8 < v3);
	}
	return result;
}

