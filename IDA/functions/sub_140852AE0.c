//----- (0000000140852AE0) ----------------------------------------------------
__int64 __fastcall sub_140852AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
	bool v5; // di
	double v10; // xmm0_8
	float v11; // xmm6_4
	__int64 v12; // rcx
	__int64 v13; // rax
	_QWORD* v14; // r9
	_DWORD* v15; // rdx
	unsigned __int8* v16; // r8
	unsigned int v17; // r10d
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int64 v20; // rdx
	float* v21; // rax
	float v22; // xmm0_4
	__int64 v23; // rcx
	int v25; // [rsp+20h] [rbp-38h]
	float v26; // [rsp+60h] [rbp+8h] BYREF

	v5 = *(_WORD*)(a2 + 50) == 0;
	if (*(_QWORD*)(a1 + 104))
	{
		v10 = (*(double(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 544i64))(a1, a4);
		v11 = *(float*)&v10;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 552i64))(a1, a4);
		if (a5)
		{
			v12 = **(_QWORD**)(a1 + 104);
			*(_DWORD*)(a2 + 8) = LODWORD(v10);
			*(_DWORD*)(a2 + 16) = LODWORD(v10);
			if (v5)
			{
				*(_QWORD*)a2 = v12;
				*(_WORD*)(a2 + 50) = -1;
			}
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64, _BYTE))(*(_QWORD*)v12 + 512i64))(v12, a2, a3, a4, 0);
			v13 = a1;
			while (1)
			{
				v14 = *(_QWORD**)(v13 + 72);
				v13 = *(_QWORD*)(v13 + 64);
				if (v14)
					break;
				if (!v13)
					goto LABEL_22;
			}
			do
			{
				v15 = (_DWORD*)v14[6];
				if (v15 && (v15[1] != 0 || v15[3] != 0 || v15[5] != 0 || v15[7] != 0))
					break;
				v16 = (unsigned __int8*)v14[10];
				v26 = 0.0;
				if (v16)
				{
					v17 = *v16;
					v18 = 0i64;
					while (1)
					{
						v19 = (unsigned int)(v18 + 1);
						if (!v16[v19])
							break;
						v18 = (unsigned int)v19;
						if ((unsigned int)v19 >= v17)
							goto LABEL_15;
					}
					v20 = (__int64)&v16[4 * v18 + ((v17 + 4) & 0xFFFFFFFC)];
				}
				else
				{
				LABEL_15:
					v20 = 0i64;
				}
				v21 = &v26;
				if (v20)
					v21 = (float*)v20;
				v26 = *v21;
				*(float*)(a2 + 12) = v26 + *(float*)(a2 + 12);
				v14 = (_QWORD*)v14[9];
			} while (v14);
		}
		else
		{
			v22 = *(float*)&v10 + *(float*)(a2 + 16);
			*(float*)(a2 + 8) = v11 + *(float*)(a2 + 8);
			*(float*)(a2 + 16) = v22;
		}
	}
LABEL_22:
	v23 = *(_QWORD*)(a1 + 64);
	if (v23)
	{
		LOBYTE(v25) = 0;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int))(*(_QWORD*)v23 + 512i64))(v23, a2, a3, a4, v25);
	}
	return 1i64;
}
// 140852C75: variable 'v25' is possibly undefined

