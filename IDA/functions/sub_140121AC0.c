//----- (0000000140121AC0) ----------------------------------------------------
__int64 __fastcall sub_140121AC0(_QWORD* a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
	unsigned int v4; // edi
	int v8; // r12d
	_DWORD* v9; // rax
	__int64* v10; // rax
	_DWORD* v11; // rax
	char* v12; // rax
	__int64 v13; // rbp
	unsigned int v14; // ebx
	__int64 v15; // rax
	__int64 v16; // rax
	int v17; // ecx
	_QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

	v4 = 0;
	if (a2 >= 0xFFFFD8F1 || a2 == 0)
		v8 = ((__int64)(a1[2] - a1[3]) >> 4) + a2 + 1;
	else
		v8 = a2;
	v9 = sub_1400580E0((__int64)a1, a2);
	if (v9 != dword_140A12138 && v9[2] == 5)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		for (a1[2] += 16i64; ; a1[2] -= 16i64)
		{
			v10 = (__int64*)sub_1400580E0((__int64)a1, v8);
			if (!(unsigned int)sub_14005BA70((__int64)a1, *v10, a1[2] - 16i64))
				break;
			a1[2] += 16i64;
			v11 = (_DWORD*)(a1[2] - 32i64);
			if (v11 != dword_140A12138 && (unsigned int)(v11[2] - 3) <= 1)
			{
				v12 = (char*)sub_140056BB0(a1, 0xFFFFFFFE, 0i64);
				sub_14018F2D0(v19, v12);
				v13 = v19[1];
				v14 = 0;
				if (a4)
				{
					v15 = 0i64;
					do
					{
						if (!(unsigned int)sub_14018E2C0(v13, *(unsigned __int16**)(a3 + 8 * v15)))
						{
							v16 = a1[2];
							v17 = *(_DWORD*)(v16 - 8);
							if (v17 && (v17 != 1 || *(_DWORD*)(v16 - 16)))
								v4 |= 1 << v14;
							else
								v4 &= ~(1 << v14);
						}
						v15 = ++v14;
					} while (v14 < a4);
				}
				if (v13)
					sub_14018B900(v13, 0);
			}
		}
		a1[2] -= 16i64;
	}
	return v4;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

