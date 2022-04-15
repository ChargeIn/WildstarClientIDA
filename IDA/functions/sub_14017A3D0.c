//----- (000000014017A3D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14017A3D0(_QWORD* a1)
{
	_QWORD* v1; // rbp
	unsigned __int64 result; // rax
	char v4; // r12
	int v5; // r15d
	__int64 v6; // rdi
	__int64 v7; // r14
	__int64 v8; // rcx
	int v9; // ecx
	__int64 v10; // rbx
	int* v11; // r8
	__int64 v12; // rdx
	_QWORD* v13; // rax
	int* v14; // rcx
	__int64 v15; // rcx
	int* v16; // rdi
	int* v17; // rbx
	int* v18; // rdx
	_QWORD* v19; // rsi
	int* v20; // rdx
	int v21; // [rsp+20h] [rbp-48h] BYREF
	int v22; // [rsp+24h] [rbp-44h]
	int v23; // [rsp+28h] [rbp-40h]
	unsigned int v24; // [rsp+2Ch] [rbp-3Ch]
	_QWORD* v25; // [rsp+70h] [rbp+8h] BYREF

	v1 = a1 + 150;
	result = (__int64)(a1[152] - a1[151]) >> 3;
	if (result != 1)
	{
		v4 = 0;
		v5 = 0;
		if ((int)result > 0)
		{
			v6 = 0i64;
			v7 = 0i64;
			do
			{
				v8 = *(_QWORD*)(v7 + a1[151]);
				if ((_QWORD*)v8 == a1)
				{
					v15 = a1[155];
					v21 = *(_DWORD*)(v6 + v15);
					v22 = *(_DWORD*)(v6 + v15 + 4);
					v23 = *(_DWORD*)(v6 + v15 + 8);
					v24 = *(_DWORD*)(v6 + v15 + 12);
				}
				else
				{
					if (!v4)
					{
						sub_1400D42F0(v8, 1, 1, 4.0);
						v4 = 1;
					}
					v9 = 0;
					v10 = *(_QWORD*)(v7 + a1[151]);
					v11 = *(int**)(v10 + 1216);
					v12 = ((__int64)v11 - *(_QWORD*)(v10 + 1208)) >> 3;
					if ((int)v12 > 0)
					{
						v13 = *(_QWORD**)(v10 + 1208);
						while ((_QWORD*)*v13 != a1)
						{
							++v9;
							++v13;
							if (v9 >= (int)v12)
								goto LABEL_11;
						}
						v14 = (int*)(*(_QWORD*)(v10 + 1208) + 8i64 * v9);
						if (v14 + 2 != v11)
							sub_1407DB590(v14, v14 + 2, ((char*)v11 - (char*)(v14 + 2)) & 0xFFFFFFFFFFFFFFF8ui64);
						*(_QWORD*)(v10 + 1216) -= 8i64;
					}
				LABEL_11:
					sub_1401795D0(v10);
				}
				++v5;
				v7 += 8i64;
				v6 += 16i64;
			} while (v5 < (int)((__int64)(v1[2] - v1[1]) >> 3));
		}
		v16 = (int*)v1[2];
		v17 = (int*)v1[1];
		result = (unsigned __int64)sub_1407DB590(v17, v16, 0i64);
		v25 = a1;
		v1[2] += -8 * (((char*)v16 - (char*)v17) >> 3);
		v18 = (int*)v1[2];
		if (v18 == (int*)v1[3])
		{
			result = (unsigned __int64)sub_1400B9430(v1, v18, &v25);
		}
		else
		{
			if (v18)
				*(_QWORD*)v18 = a1;
			v1[2] += 8i64;
		}
		v19 = a1 + 154;
		v19[2] += -16 * ((__int64)(v19[2] - v19[1]) >> 4);
		v20 = (int*)v19[2];
		if (v20 == (int*)v19[3])
		{
			return sub_14015C990(v19, v20, &v21);
		}
		else
		{
			if (v20)
			{
				*v20 = v21;
				v20[1] = v22;
				v20[2] = v23;
				result = v24;
				v20[3] = v24;
			}
			v19[2] += 16i64;
		}
	}
	return result;
}

