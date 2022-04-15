//----- (000000014083C410) ----------------------------------------------------
__int64 __fastcall sub_14083C410(__int64 a1, int* a2, unsigned int a3, unsigned int* a4)
{
	unsigned int* v4; // r15
	unsigned int v5; // ebp
	int* v6; // r14
	unsigned int* v8; // r12
	unsigned int v9; // edi
	unsigned int v10; // eax
	__int64* v11; // rcx
	__int64 v12; // r10
	unsigned int v13; // ebx
	__int64 v14; // rcx
	bool v16; // zf
	unsigned int v17; // eax
	int v18; // [rsp+20h] [rbp-48h]
	char v19; // [rsp+70h] [rbp+8h] BYREF
	unsigned int v20; // [rsp+78h] [rbp+10h] BYREF

	*a4 = 0;
	v4 = a4;
	v5 = a3;
	v6 = a2;
	if (*(_QWORD*)(a1 + 48))
	{
		if (a3)
		{
			v8 = (unsigned int*)(a1 + 16);
			do
			{
				if (*v8)
				{
					v9 = v5;
					if (*v8 < v5)
						v9 = *v8;
					sub_1407DB590(v6, *(int**)(a1 + 8), v9);
					*(_QWORD*)(a1 + 8) += v9;
					*v4 += v9;
					*v8 -= v9;
					v6 = (int*)((char*)v6 + v9);
					v5 -= v9;
				}
				else
				{
					v10 = *(_DWORD*)(a1 + 20);
					v11 = *(__int64**)(a1 + 48);
					v12 = *v11;
					LOBYTE(a4) = 1;
					if (v5 < v10)
					{
						LOBYTE(v18) = *(_BYTE*)(a1 + 60);
						v13 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, unsigned int*, int, _DWORD, unsigned int*))(v12 + 48))(
							v11,
							*(_QWORD*)a1,
							*(_DWORD*)(a1 + 24) * (v10 / *(_DWORD*)(a1 + 24)),
							a4,
							v18,
							(float)(int)(*(_DWORD*)(a1 + 24) * (v10 / *(_DWORD*)(a1 + 24))) / *(float*)(a1 + 56),
							v8);
						if (v13 != 1
							|| (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 96i64))(*(_QWORD*)(a1 + 48)) != 1)
						{
							return v13;
						}
						v16 = *v8 == 0;
						*(_QWORD*)(a1 + 8) = *(_QWORD*)a1;
						if (v16)
							return 1i64;
					}
					else
					{
						LOBYTE(v18) = *(_BYTE*)(a1 + 60);
						v13 = (*(__int64(__fastcall**)(__int64*, int*, _QWORD, unsigned int*, int, _DWORD, unsigned int*))(v12 + 48))(
							v11,
							v6,
							*(_DWORD*)(a1 + 24) * (v5 / *(_DWORD*)(a1 + 24)),
							a4,
							v18,
							(float)(int)(*(_DWORD*)(a1 + 24) * (v5 / *(_DWORD*)(a1 + 24))) / *(float*)(a1 + 56),
							&v20);
						if (v13 != 1
							|| (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 96i64))(*(_QWORD*)(a1 + 48)) != 1)
						{
							return v13;
						}
						v14 = v20;
						*v4 += v20;
						v5 -= v14;
						v6 = (int*)((char*)v6 + v14);
						if (v5 >= *(_DWORD*)(a1 + 20))
						{
							(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 48) + 64i64))(*(_QWORD*)(a1 + 48), &v19);
							return v13 + 1;
						}
					}
				}
			} while (v5);
		}
	}
	else
	{
		v17 = *(_DWORD*)(a1 + 16);
		if (a3 < v17)
			v17 = a3;
		*a4 = v17;
		*(_DWORD*)(a1 + 16) -= v17;
		sub_1407DB590(a2, *(int**)(a1 + 40), *a4);
		*(_QWORD*)(a1 + 40) += *v4;
	}
	return 1i64;
}
// 14083C4D1: variable 'a4' is possibly undefined
// 14083C4D1: variable 'v18' is possibly undefined

