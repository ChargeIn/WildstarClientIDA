//----- (00000001402D9440) ----------------------------------------------------
void __fastcall sub_1402D9440(_QWORD* a1)
{
	__int64* v2; // rcx
	__int64 v3; // rax
	__int64 v4; // r10
	unsigned int v5; // edi
	__int64 v6; // r11
	_QWORD* v7; // r8
	__int64 v8; // rdx
	__int64 v9; // rcx
	int v10; // r9d
	__int16* v11; // rdx
	unsigned int v12; // r9d
	__int64 v13; // rax
	__int64 v14; // r8
	__int16 v15; // cx
	int* v16; // r14
	unsigned int v17; // edi
	__int64 v18; // rbp
	_QWORD* v19; // r8
	__int64 v20; // rdx
	__int64 v21; // rcx
	unsigned __int64 v22; // rbx

	v2 = (__int64*)a1[12];
	if (v2)
	{
		v3 = *v2;
		if (*(_DWORD*)(a1[10] + 56i64) > 0xFFFFu)
		{
			v16 = (int*)(*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, __int64))(v3 + 56))(v2, 0i64, 0i64, 2i64);
			if (v16)
			{
				v17 = 0;
				v18 = *(_QWORD*)(a1[10] + 392i64) + 32i64 * a1[9];
				if (*(_DWORD*)(v18 + 28))
				{
					do
					{
						v19 = (_QWORD*)a1[10];
						v20 = v19[16] + 28i64 * *(unsigned __int16*)(v19[51] + 2i64 * (v17 + *(_DWORD*)(v18 + 24)));
						v21 = *(unsigned int*)(v20 + 4);
						v22 = 4i64 * (unsigned int)(*(_DWORD*)(v20 + 8) - v21 + 1);
						sub_1407DB590(v16, (int*)(v19[12] + 4 * v21), v22);
						++v17;
						v16 = (int*)((char*)v16 + v22);
					} while (v17 < *(_DWORD*)(v18 + 28));
				}
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[12] + 64i64))(a1[12]);
			}
		}
		else
		{
			v4 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, __int64))(v3 + 56))(v2, 0i64, 0i64, 2i64);
			if (v4)
			{
				v5 = 0;
				v6 = *(_QWORD*)(a1[10] + 392i64) + 32i64 * a1[9];
				if (*(_DWORD*)(v6 + 28))
				{
					do
					{
						v7 = (_QWORD*)a1[10];
						v8 = v7[16] + 28i64 * *(unsigned __int16*)(v7[51] + 2i64 * (v5 + *(_DWORD*)(v6 + 24)));
						v9 = *(unsigned int*)(v8 + 4);
						v10 = *(_DWORD*)(v8 + 8) - v9;
						v11 = (__int16*)(v7[12] + 4 * v9);
						v12 = v10 + 1;
						if (v12)
						{
							v13 = v4;
							v14 = v12;
							do
							{
								v15 = *v11;
								v13 += 2i64;
								v11 += 2;
								*(_WORD*)(v13 - 2) = v15;
								--v14;
							} while (v14);
						}
						++v5;
						v4 += 2i64 * v12;
					} while (v5 < *(_DWORD*)(v6 + 28));
				}
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[12] + 64i64))(a1[12]);
			}
		}
	}
}

