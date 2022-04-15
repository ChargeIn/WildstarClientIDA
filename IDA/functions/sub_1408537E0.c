//----- (00000001408537E0) ----------------------------------------------------
__int64 __fastcall sub_1408537E0(_QWORD* a1)
{
	__int64 i; // rbx
	_DWORD* v3; // rax
	_DWORD* v4; // rcx
	_DWORD* v5; // rax
	unsigned __int8* v6; // rcx
	char* v7; // rdi
	float* v8; // rsi
	__int64 v9; // rbp
	unsigned __int8* v10; // r8
	float v11; // xmm6_4
	unsigned int v12; // r9d
	unsigned __int8 v13; // r10
	int v14; // ecx
	__int64 v15; // rdx
	__int64 v16; // rax
	__int64 v17; // r9
	__int64* v18; // rdx
	unsigned __int8* v19; // rdx
	unsigned __int8* v20; // r8
	unsigned __int8* v21; // rcx
	__int64 v22; // rdx
	__int64 v23; // rdx

	for (i = a1[4]; i; i = *(_QWORD*)(i + 16))
	{
		v3 = *(_DWORD**)(i + 40);
		v4 = *(_DWORD**)(i + 48);
		if (v3 == v4)
			goto LABEL_27;
		do
		{
			if (*v3 == *(_DWORD*)(i + 68))
				break;
			v3 += 6;
		} while (v3 != v4);
		if (v3 == v4 || (v5 = v3 + 2) == 0i64 || !*(_QWORD*)v5)
		{
		LABEL_27:
			sub_140852350(i);
			v19 = *(unsigned __int8**)(i + 32);
			if (v19)
			{
				v20 = v19 + 1;
				v21 = &v19[(*v19 + 4) & 0xFFFFFFFC];
			}
			else
			{
				v20 = 0i64;
				v21 = 0i64;
			}
			if (v19)
				v22 = (__int64)&v19[*v19 + 1];
			else
				v22 = 0i64;
			if (v20 != (unsigned __int8*)v22)
			{
				v23 = v22 - (_QWORD)v20;
				do
				{
					*(_DWORD*)v21 = 0;
					v21 += 16;
					--v23;
				} while (v23);
			}
		}
		else
		{
			v6 = *(unsigned __int8**)(*(_QWORD*)v5 + 32i64);
			if (v6)
			{
				v7 = (char*)(v6 + 1);
				v8 = (float*)&v6[(*v6 + 4) & 0xFFFFFFFC];
			}
			else
			{
				v7 = 0i64;
				v8 = 0i64;
			}
			if (v6)
				v9 = (__int64)&v6[*v6 + 1];
			else
				v9 = 0i64;
			for (; v7 != (char*)v9; ++v8)
			{
				v10 = *(unsigned __int8**)(i + 32);
				v11 = *v8;
				if (!v10)
					goto LABEL_19;
				v12 = *v10;
				v13 = *v7;
				v14 = 0;
				while (1)
				{
					v15 = (unsigned int)(v14 + 1);
					if (v10[v15] == v13)
						break;
					++v14;
					if ((unsigned int)v15 >= v12)
						goto LABEL_19;
				}
				v17 = (__int64)&v10[16 * v14 + ((v12 + 4) & 0xFFFFFFFC)];
				if (v17)
				{
					v18 = *(__int64**)(v17 + 8);
					if (v18)
						sub_14083AB80(qword_140C61B70, v18, v13, v11, 0, 4, 0);
					else
						*(float*)v17 = v11;
				}
				else
				{
				LABEL_19:
					v16 = sub_140829BE0((__int64*)(i + 32), *v7);
					if (v16)
					{
						*(float*)v16 = v11;
						*(_QWORD*)(v16 + 8) = 0i64;
					}
				}
				++v7;
			}
		}
	}
	return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 408i64))(a1);
}
// 140C61B70: using guessed type __int64 qword_140C61B70;

