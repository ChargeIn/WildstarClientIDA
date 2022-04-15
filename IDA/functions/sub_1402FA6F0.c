//----- (00000001402FA6F0) ----------------------------------------------------
int* __fastcall sub_1402FA6F0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
	int* v5; // rbp
	int* v6; // r15
	int* v7; // rdi
	int* result; // rax
	__int64 v10; // rax
	__int64 v11; // r14
	unsigned __int64 v12; // rbx
	int* v13; // rdx
	int* v14; // r8
	unsigned __int64 v15; // r9
	__int64 v16; // rcx
	unsigned int v17; // ecx
	__int64* v18; // r12
	__int64 v19; // r11
	__int64 v20; // rcx
	_BYTE* v21; // rdx
	_BYTE* v22; // r9
	__int64 v23; // r13
	int* v24; // r10
	signed __int64 v25; // r15
	unsigned __int64 v26; // rbp
	unsigned int v27; // eax
	int v28; // ebx
	__int64 v29; // r8
	__int64 v30; // rdx
	__int64 v31; // r8
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // r8
	unsigned int v35; // [rsp+30h] [rbp-68h]
	__int64 v36; // [rsp+38h] [rbp-60h] BYREF
	_BYTE* v37; // [rsp+40h] [rbp-58h] BYREF
	_BYTE v38[16]; // [rsp+48h] [rbp-50h] BYREF
	char v39[8]; // [rsp+A0h] [rbp+8h]
	int* v40; // [rsp+A8h] [rbp+10h]
	int* v41; // [rsp+B0h] [rbp+18h]
	int* v42; // [rsp+B8h] [rbp+20h]

	v42 = (int*)a4;
	v41 = (int*)a3;
	v40 = (int*)a2;
	v5 = (int*)a4;
	v6 = (int*)a3;
	v7 = (int*)a2;
	result = (int*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 1008i64))(a1);
	if (!(_DWORD)result)
	{
		v10 = *a1;
		v11 = 0i64;
		LODWORD(v37) = 0;
		if (!(*(unsigned int(__fastcall**)(_QWORD*, _BYTE**, _QWORD))(v10 + 16))(a1, &v37, 0i64))
		{
			result = sub_14018B280(64i64, 0);
			if (result)
				return (int*)sub_1402EFA90(result, (__int64)a1, v7, v6, v5, a5);
			return result;
		}
		if (v7 && v6 && v5 && (v12 = a5) != 0)
		{
			v36 = 0i64;
			v13 = v6;
			v14 = v7;
			v15 = a5;
			do
			{
				if (*v14 == 0x7FFFFFFF)
				{
					v16 = *(unsigned __int8*)v13;
					v39[v16] = *((_BYTE*)v13 + (char*)v5 - (char*)v6);
					*((_DWORD*)&v36 + v16) = 1;
				}
				++v14;
				v13 = (int*)((char*)v13 + 1);
				--v15;
			} while (v15);
			result = (int*)a1[8];
			v17 = 0;
			v35 = 0;
			while (v17 < result[124])
			{
				v18 = &v36;
				v19 = 48i64 * v17 + *((_QWORD*)result + 63);
				v20 = a1[138] + 96i64 * v17;
				v21 = &v38[-v20];
				v22 = (_BYTE*)(v20 + 88);
				v23 = -88 - v20;
				v37 = &v38[-v20];
				do
				{
					if (!v12)
						goto LABEL_29;
					v24 = v5;
					v25 = (char*)v6 - (char*)v5;
					v26 = v12;
					do
					{
						if ((_BYTE*)*((unsigned __int8*)v24 + v25) != &v22[v23])
							goto LABEL_27;
						v27 = 0;
						v28 = 0;
						if (!*(_DWORD*)(v19 + 32))
							goto LABEL_25;
						do
						{
							v29 = a1[8];
							v30 = *(unsigned __int16*)(*(_QWORD*)(v19 + 40) + 296i64 * v27);
							if ((unsigned int)v30 < *(_DWORD*)(v29 + 448)
								&& *(unsigned __int16*)(32 * v30 + *(_QWORD*)(v29 + 456)) == *v7)
							{
								v28 = 1;
								*v22 = *(_BYTE*)v24;
							}
							++v27;
						} while (v27 < *(_DWORD*)(v19 + 32));
						if (!v28)
						{
							v21 = v37;
						LABEL_25:
							if (*(_DWORD*)v18)
								*v22 = v22[(_QWORD)v21];
						}
					LABEL_27:
						v21 = v37;
						++v7;
						v24 = (int*)((char*)v24 + 1);
						--v26;
					} while (v26);
					v12 = a5;
					v5 = v42;
					v6 = v41;
					v7 = v40;
				LABEL_29:
					++v22;
					v18 = (__int64*)((char*)v18 + 4);
				} while ((unsigned __int64)&v22[v23] < 2);
				result = (int*)a1[8];
				v17 = v35 + 1;
				v35 = v17;
			}
		}
		else
		{
			result = (int*)a1[8];
			if (result[124])
			{
				do
				{
					v31 = 48 * v11;
					v32 = 96 * v11;
					v11 = (unsigned int)(v11 + 1);
					v33 = a1[138] + v32;
					v34 = *((_QWORD*)result + 63) + v31;
					*(_BYTE*)(v33 + 88) = *(_BYTE*)(v34 + 24);
					*(_BYTE*)(v33 + 89) = *(_BYTE*)(v34 + 28);
					result = (int*)a1[8];
				} while ((unsigned int)v11 < result[124]);
			}
		}
	}
	return result;
}
// 1402FA6F0: using guessed type char arg_0[8];

