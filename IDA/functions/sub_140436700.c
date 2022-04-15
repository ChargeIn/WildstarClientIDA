//----- (0000000140436700) ----------------------------------------------------
__int64 __fastcall sub_140436700(unsigned int* a1, _QWORD* a2, __int64 a3)
{
	unsigned __int64 v3; // rsi
	__int64 v7; // r14
	int* v8; // rdx
	unsigned int v9; // ebx
	unsigned int v10; // r8d
	int v11; // ecx
	unsigned int v12; // ebx
	int v13; // eax
	__int64* v14; // rax
	int v16[14]; // [rsp+20h] [rbp-38h] BYREF

	v3 = 0i64;
	if (a2[1])
	{
		v7 = 0i64;
		do
		{
			v8 = (int*)(v7 + *a2);
			if ((v8[6] & 1) != 0)
			{
				v9 = *a1;
				v10 = *(_DWORD*)(a3 + 4);
				if (*a1 < v10)
				{
					v11 = v8[6];
					v16[0] = *v8;
					v16[1] = v8[1];
					v12 = v9 + 1;
					v16[2] = v8[2];
					v13 = v8[3];
					v16[6] = v11 & 0xFFFFFFFE;
					v16[3] = v13;
					v16[4] = v8[4];
					v16[5] = v8[5];
					v16[7] = v8[7];
					if (v12 <= v10)
					{
						do
						{
							v14 = (__int64*)sub_140436ED0(a3, v12);
							sub_140436CA0(v14, v16);
							++v12;
						} while (v12 <= *(_DWORD*)(a3 + 4));
					}
				}
			}
			++v3;
			v7 += 32i64;
		} while (v3 < a2[1]);
	}
	return 1i64;
}

