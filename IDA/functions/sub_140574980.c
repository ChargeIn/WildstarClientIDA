//----- (0000000140574980) ----------------------------------------------------
__int64 __fastcall sub_140574980(
	int* a1,
	unsigned __int64 a2,
	__int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(int*, int*))
{
	__int64 result; // rax
	int* v7; // rdi
	int* v8; // rbx
	unsigned __int8 v9; // al
	int* v10; // rdi
	int v11; // eax
	int* v12; // rbx
	int v13; // ecx
	int v14; // edx
	int v15; // r8d
	int v16; // r9d
	int* v17; // [rsp+30h] [rbp-48h]
	__int64 v18; // [rsp+38h] [rbp-40h]
	int v19[4]; // [rsp+40h] [rbp-38h] BYREF

	v17 = (int*)a2;
	result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0ui64;
	if (result > 256)
	{
		do
		{
			if (!a4)
				return sub_140575210(a1, a2, a2, 0i64, a5);
			v7 = (int*)(a2 - 16);
			v18 = a4 - 1;
			v8 = &a1[4 * (((__int64)(a2 - (_QWORD)a1) >> 4) / 2)];
			if (a5(a1, v8))
			{
				if (!a5(v8, v7))
				{
					v9 = a5(a1, v7);
					v8 = a1;
					goto LABEL_9;
				}
			}
			else
			{
				if (!a5(a1, v7))
				{
					v9 = a5(v8, v7);
				LABEL_9:
					if (v9)
						v8 = v7;
					goto LABEL_11;
				}
				v8 = a1;
			}
		LABEL_11:
			v10 = a1;
			v19[0] = *v8;
			v19[1] = v8[1];
			v19[2] = v8[2];
			v11 = v8[3];
			v12 = v17;
			v19[3] = v11;
			while (1)
			{
				for (; a5(v10, v19); v10 += 4)
					;
				for (v12 -= 4; a5(v19, v12); v12 -= 4)
					;
				if (v10 >= v12)
					break;
				v13 = *v10;
				v14 = v10[1];
				v15 = v10[2];
				v16 = v10[3];
				*v10 = *v12;
				v10 += 4;
				*(v10 - 3) = v12[1];
				*(v10 - 2) = v12[2];
				*(v10 - 1) = v12[3];
				*v12 = v13;
				v12[1] = v14;
				v12[2] = v15;
				v12[3] = v16;
			}
			result = sub_140574980((_DWORD)v10, (_DWORD)v17, 0, v18, (__int64)a5);
			a4 = v18;
			a2 = (unsigned __int64)v10;
			v17 = v10;
		} while ((__int64)(((char*)v10 - (char*)a1) & 0xFFFFFFFFFFFFFFF0ui64) > 256);
	}
	return result;
}

