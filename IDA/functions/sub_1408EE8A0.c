//----- (00000001408EE8A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408EE8A0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
	__int64 v3; // rbx
	unsigned __int64 v4; // r9
	unsigned __int64 result; // rax
	void* v6; // rsp
	void* v7; // rsp
	int v8; // edi
	int v9; // r10d
	unsigned __int16 v10; // dx
	int* v11; // r9
	int v12; // r11d
	unsigned __int16 v13; // ax
	int v14; // ecx
	int v15; // r12d
	int v16; // edx
	int v17; // ecx
	int v18; // edi
	__int64 v19; // r14
	__int64 v20; // r13
	char* v21; // r10
	char* v22; // r11
	__int64 v23; // rdi
	__int64 v24; // rsi
	__int64 v25; // rcx
	__int64 i; // r8
	char v27; // cl
	__int64 v28; // rdx
	__int64 j; // r8
	char v30; // cl
	__int64 v31; // rdx
	__int64 v32; // rdx
	__int64 v33; // rcx
	int v34; // [rsp+20h] [rbp+0h] BYREF
	int v35; // [rsp+24h] [rbp+4h]
	__int64 v36; // [rsp+28h] [rbp+8h]
	int v39; // [rsp+90h] [rbp+70h]
	int v40; // [rsp+98h] [rbp+78h]

	v3 = a1;
	v36 = a1;
	v4 = a3 + 15i64;
	if (v4 <= a3)
		v4 = 0xFFFFFFFFFFFFFF0i64;
	result = v4 & 0xFFFFFFFFFFFFFFF0ui64;
	v6 = alloca(v4 & 0xFFFFFFFFFFFFFFF0ui64);
	v7 = alloca(v4 & 0xFFFFFFFFFFFFFFF0ui64);
	v8 = 1;
	v9 = a3;
	v10 = 0;
	v11 = &v34;
	v40 = 1;
	v35 = a3;
	if (a3 > 1u)
	{
		v12 = 1;
		v34 = 1;
		do
		{
			v13 = 0;
			if (v12 < v9)
			{
				v14 = 2 * v12;
				do
				{
					v15 = v13;
					v16 = v9;
					v17 = v13 + v14;
					v18 = v13 + v12;
					v19 = v18;
					v39 = v18;
					if (v17 < v9)
						v16 = v17;
					v20 = v16;
					if (v13 < (__int64)v18)
					{
						v21 = (char*)(v18 + v3);
						v22 = (char*)(v13 + v3);
						do
						{
							if ((__int64)&v21[-v3] >= v16)
								break;
							v23 = *v21;
							v24 = *v22;
							v25 = v13++;
							if (*(_WORD*)(a2 + 2 * v24) >= *(_WORD*)(a2 + 2 * v23))
							{
								*((_BYTE*)v11 + v25) = v23;
								v18 = v39 + 1;
								++v21;
								++v39;
							}
							else
							{
								v18 = v39;
								++v15;
								*((_BYTE*)v11 + v25) = v24;
								++v22;
							}
						} while ((__int64)&v22[-v3] < v19);
						v3 = v36;
						v9 = v35;
						v12 = v34;
					}
					for (i = v15; i < v19; *((_BYTE*)v11 + v28) = v27)
					{
						v27 = *(_BYTE*)(i + v3);
						v28 = v13;
						++i;
						++v13;
					}
					for (j = v18; j < v20; *((_BYTE*)v11 + v31) = v30)
					{
						v30 = *(_BYTE*)(j + v3);
						v31 = v13;
						++j;
						++v13;
					}
					v14 = 2 * v12;
				} while (v12 + v13 < v9);
				v8 = v40;
			}
			for (; v13 < v9; *((_BYTE*)v11 + v32) = *(_BYTE*)(v32 + v3))
				v32 = v13++;
			LOWORD(v8) = 2 * v8;
			result = v3;
			v3 = (__int64)v11;
			v12 = (unsigned __int16)v8;
			v36 = (__int64)v11;
			v11 = (int*)result;
			v40 = v8;
			v10 = 0;
			v34 = (unsigned __int16)v8;
		} while ((unsigned __int16)v8 < v9);
	}
	if (v11 == (int*)a1 && v9 > 0)
	{
		do
		{
			v33 = v10++;
			*((_BYTE*)v11 + v33) = *(_BYTE*)(v33 + v3);
			result = v10;
		} while (v10 < v9);
	}
	return result;
}

